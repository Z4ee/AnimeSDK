#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_METHOD_3_576010C292B1A4FF_OFFSET UNITYSDK_OFFSET(0x19439060)
#define RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_METHOD_3_9F7696538B9BD25E_OFFSET UNITYSDK_OFFSET(0x19439100)
#define RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x194390C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupButtonListTrigger_TypeDefinitionIndex = 20951;

	class AdvSetupButtonListTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20
		::Il2CppArray<::System::String*>* ButtonsByName; // 0x28
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x30
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x38
		::System::Boolean DisableAfterTriggered; // 0x40
		::System::Boolean ConsiderAngleLimit; // 0x41
		::System::Single InteractAngleRange; // 0x44
		::System::Boolean ConsiderOwnerForwardAngleLimit; // 0x48
		::System::Single OwnerForwardAngleRange; // 0x4C
		::System::Boolean IsOverrideValidGuestConfig; // 0x50
		::RPG::GameCore::TriggerValidGuestConfig* OverridedValidGuestConfig; // 0x58
		::System::Boolean MustNotInDanger; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_576010C292B1A4FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupButtonListTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupButtonListTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_METHOD_3_576010C292B1A4FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F7696538B9BD25E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupButtonListTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupButtonListTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_METHOD_3_9F7696538B9BD25E_OFFSET))(a1, a2);
		}
	};
}
