#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_29428BCD386F0990_OFFSET UNITYSDK_OFFSET(0x1E1BE4F0)
#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_994A3AB606C92E7F_OFFSET UNITYSDK_OFFSET(0x1E1BE4B0)
#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMuteModifierEventSource_TypeDefinitionIndex = 23207;

	class TargetMuteModifierEventSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ModifierEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_994A3AB606C92E7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMuteModifierEventSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMuteModifierEventSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_994A3AB606C92E7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29428BCD386F0990(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_29428BCD386F0990_OFFSET))(a1, a2);
		}
	};
}
