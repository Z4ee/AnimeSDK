#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E105550)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E105610)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVector2_TypeDefinitionIndex = 33297;

	class SharedVector2 : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedVector2* op_Implicit(::UnityEngine::Vector2 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedVector2*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR2_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
