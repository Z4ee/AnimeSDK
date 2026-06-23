#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_GENERICVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A4A80)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int GenericVariable_TypeDefinitionIndex = 33282;

	class GenericVariable : public ::System::Object
	{
	public:
		::System::String* type; // 0x10
		::BehaviorDesigner::Runtime::SharedVariable* value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GENERICVARIABLE__CTOR_OFFSET))(this);
		}
	};
}
