#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F9DD030)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DD0F0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedBool_TypeDefinitionIndex = 33912;

	class SharedBool : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDBOOL__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedBool* op_Implicit(::System::Boolean value)
		{
			return ((::BehaviorDesigner::Runtime::SharedBool*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDBOOL_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
