#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F801E10)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3INT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F801EF0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVector3Int_TypeDefinitionIndex = 33936;

	class SharedVector3Int : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Vector3Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3INT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedVector3Int* op_Implicit(::UnityEngine::Vector3Int value)
		{
			return ((::BehaviorDesigner::Runtime::SharedVector3Int*(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR3INT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
