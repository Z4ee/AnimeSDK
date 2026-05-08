#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_ThirdPartyObjectType.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime::Tasks { class Task; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1BE5C300)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_GET_THIRDPARTYOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE5C320)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE5C330)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1BE5C310)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5C390)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_ThirdPartyTask_TypeDefinitionIndex = 31676;

	class BehaviorManager_ThirdPartyTask : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::Task* task; // 0x10
		::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType thirdPartyObjectType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* get_Task()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_GET_TASK_OFFSET))(this);
		}

		::System::Void set_Task(::BehaviorDesigner::Runtime::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_SET_TASK_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType get_ThirdPartyObjectType()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_GET_THIRDPARTYOBJECTTYPE_OFFSET))(this);
		}

		::System::Void Initialize(::BehaviorDesigner::Runtime::Tasks::Task* t, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType objectType)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASK_INITIALIZE_OFFSET))(this, t, objectType);
		}
	};
}
