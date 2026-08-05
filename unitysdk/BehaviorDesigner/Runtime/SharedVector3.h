#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F528800)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5288E0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVector3_TypeDefinitionIndex = 33935;

	class SharedVector3 : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedVector3* op_Implicit(::UnityEngine::Vector3 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedVector3*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
