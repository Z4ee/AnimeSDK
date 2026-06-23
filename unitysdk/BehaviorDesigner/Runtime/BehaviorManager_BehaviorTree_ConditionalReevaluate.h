#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/System/Object.h"

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_CONDITIONALREEVALUATE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DDB1CE0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_CONDITIONALREEVALUATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1CD0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorTree_ConditionalReevaluate_TypeDefinitionIndex = 33225;

	class BehaviorManager_BehaviorTree_ConditionalReevaluate : public ::System::Object
	{
	public:
		::System::Int32 stackIndex; // 0x10
		::BehaviorDesigner::Runtime::Tasks::TaskStatus taskStatus; // 0x14
		::System::Int32 index; // 0x18
		::System::Int32 compositeIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_CONDITIONALREEVALUATE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 i, ::BehaviorDesigner::Runtime::Tasks::TaskStatus status, ::System::Int32 stack, ::System::Int32 composite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_CONDITIONALREEVALUATE_INITIALIZE_OFFSET))(this, i, status, stack, composite);
		}
	};
}
