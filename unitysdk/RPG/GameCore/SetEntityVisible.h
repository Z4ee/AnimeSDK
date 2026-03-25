#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityVisibleReason.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYVISIBLE_METHOD_3_9687334C1C730750_OFFSET UNITYSDK_OFFSET(0x176CC850)
#define RPG_GAMECORE_SETENTITYVISIBLE_METHOD_3_E4E5CD1590F7D5FA_OFFSET UNITYSDK_OFFSET(0x176CC8D0)
#define RPG_GAMECORE_SETENTITYVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CC8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityVisible_TypeDefinitionIndex = 18910;

	class SetEntityVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Boolean MuteColliderWhenInvisible; // 0x21
		::System::Boolean MuteTriggerWhenInvisible; // 0x22
		::System::Boolean SetAudio; // 0x23
		::RPG::GameCore::EntityVisibleReason Reason; // 0x24
		::System::String* UniqueKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9687334C1C730750(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYVISIBLE_METHOD_3_9687334C1C730750_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4E5CD1590F7D5FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYVISIBLE_METHOD_3_E4E5CD1590F7D5FA_OFFSET))(a1, a2);
		}
	};
}
