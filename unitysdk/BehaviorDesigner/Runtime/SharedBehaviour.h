#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace UnityEngine { class Behaviour; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE5C660)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5C720)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedBehaviour_TypeDefinitionIndex = 31724;

	class SharedBehaviour : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Behaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedBehaviour* op_Explicit(::UnityEngine::Behaviour* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedBehaviour*(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR_OP_EXPLICIT_OFFSET))(value);
		}
	};
}
