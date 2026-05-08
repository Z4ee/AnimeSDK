#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C2A8C70)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A8D50)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedFloat_TypeDefinitionIndex = 31728;

	class SharedFloat : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedFloat* op_Implicit(::System::Single value)
		{
			return ((::BehaviorDesigner::Runtime::SharedFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
