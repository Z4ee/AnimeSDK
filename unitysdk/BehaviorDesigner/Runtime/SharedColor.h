#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDCOLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F6062A0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F606370)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedColor_TypeDefinitionIndex = 33914;

	class SharedColor : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDCOLOR__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedColor* op_Implicit(::UnityEngine::Color value)
		{
			return ((::BehaviorDesigner::Runtime::SharedColor*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDCOLOR_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
