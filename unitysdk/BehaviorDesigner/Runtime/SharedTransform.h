#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E4FB110)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB1D0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedTransform_TypeDefinitionIndex = 33294;

	class SharedTransform : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Transform*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedTransform* op_Implicit(::UnityEngine::Transform* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedTransform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORM_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
