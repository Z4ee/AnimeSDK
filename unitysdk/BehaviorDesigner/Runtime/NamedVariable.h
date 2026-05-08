#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/GenericVariable.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_NAMEDVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4284E0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int NamedVariable_TypeDefinitionIndex = 31736;

	class NamedVariable : public ::BehaviorDesigner::Runtime::GenericVariable
	{
	public:
		::System::String* name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_NAMEDVARIABLE__CTOR_OFFSET))(this);
		}
	};
}
