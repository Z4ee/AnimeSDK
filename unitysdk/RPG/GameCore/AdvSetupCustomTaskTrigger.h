#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_METHOD_3_08AD533224B1CD59_OFFSET UNITYSDK_OFFSET(0x16F43AF0)
#define RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_METHOD_3_C2E3732AD3286C97_OFFSET UNITYSDK_OFFSET(0x16F43B70)
#define RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F43B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupCustomTaskTrigger_TypeDefinitionIndex = 18839;

	class AdvSetupCustomTaskTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x30
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x38
		::System::Boolean DisableAfterTriggered; // 0x40
		::System::Boolean IsOverrideValidGuestConfig; // 0x41
		::RPG::GameCore::TriggerValidGuestConfig* OverridedValidGuestConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_08AD533224B1CD59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupCustomTaskTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupCustomTaskTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_METHOD_3_08AD533224B1CD59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2E3732AD3286C97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetupCustomTaskTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetupCustomTaskTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_METHOD_3_C2E3732AD3286C97_OFFSET))(a1, a2);
		}
	};
}
