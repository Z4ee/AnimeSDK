#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDUINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DDDAB80)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDUINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDAC40)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedUInt_TypeDefinitionIndex = 33296;

	class SharedUInt : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDUINT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedUInt* op_Implicit(::System::UInt32 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedUInt*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDUINT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
