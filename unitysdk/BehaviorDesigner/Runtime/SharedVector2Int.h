#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E3C1F70)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2INT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2030)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVector2Int_TypeDefinitionIndex = 33298;

	class SharedVector2Int : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2INT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedVector2Int* op_Implicit(::UnityEngine::Vector2Int value)
		{
			return ((::BehaviorDesigner::Runtime::SharedVector2Int*(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2INT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
