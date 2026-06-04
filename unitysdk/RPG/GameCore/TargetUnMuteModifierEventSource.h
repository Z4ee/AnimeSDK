#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_METHOD_3_F470137BB7AFCCED_OFFSET UNITYSDK_OFFSET(0x19D2F6A0)
#define RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_METHOD_3_F50D3BF4FDA6A631_OFFSET UNITYSDK_OFFSET(0x19D2F620)
#define RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2F670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetUnMuteModifierEventSource_TypeDefinitionIndex = 22194;

	class TargetUnMuteModifierEventSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ModifierEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F50D3BF4FDA6A631(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetUnMuteModifierEventSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetUnMuteModifierEventSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_METHOD_3_F50D3BF4FDA6A631_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F470137BB7AFCCED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetUnMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetUnMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_METHOD_3_F470137BB7AFCCED_OFFSET))(a1, a2);
		}
	};
}
