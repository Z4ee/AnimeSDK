#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace UnityEngine { class Collider; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D4A9610)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A96D0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedCollider_TypeDefinitionIndex = 33277;

	class SharedCollider : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Collider*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedCollider* op_Implicit(::UnityEngine::Collider* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedCollider*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
