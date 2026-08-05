#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior.h"

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F217370)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorTree_TypeDefinitionIndex = 33872;

	class BehaviorTree : public ::BehaviorDesigner::Runtime::Behavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORTREE__CTOR_OFFSET))(this);
		}
	};
}
