#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C2A8B50)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A8C10)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedBool_TypeDefinitionIndex = 31725;

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
