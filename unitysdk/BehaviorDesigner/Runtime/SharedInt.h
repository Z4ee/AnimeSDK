#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E376F20)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E376FE0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedInt_TypeDefinitionIndex = 33284;

	class SharedInt : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDINT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedInt* op_Implicit(::System::Int32 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedInt*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDINT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
