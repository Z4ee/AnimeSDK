#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace BehaviorDesigner::Runtime { class GenericVariable; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C266680)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C266540)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedGenericVariable_TypeDefinitionIndex = 31732;

	class SharedGenericVariable : public ::BehaviorDesigner::Runtime::SharedVariable_1<::BehaviorDesigner::Runtime::GenericVariable*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedGenericVariable* op_Implicit(::BehaviorDesigner::Runtime::GenericVariable* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedGenericVariable*(*)(::BehaviorDesigner::Runtime::GenericVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
