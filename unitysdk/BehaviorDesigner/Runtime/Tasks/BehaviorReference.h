#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"

namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedNamedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_GETEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x1F217D00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_ONPREPAREEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x1F217B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F217D40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_VERIFY_OFFSET UNITYSDK_OFFSET(0x1F217B80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F217D90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F217E20)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int BehaviorReference_TypeDefinitionIndex = 33970;

	class BehaviorReference : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>* externalBehaviors; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedNamedVariable*>* variables; // 0x60
		::System::Boolean collapsed; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void OnPrepareExternalBehaviors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_ONPREPAREEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::System::Void Verify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_VERIFY_OFFSET))(this);
		}

		::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>* GetExternalBehaviors()
		{
			return ((::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_GETEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORREFERENCE___BASE_ONRESET_OFFSET))(this);
		}
	};
}
