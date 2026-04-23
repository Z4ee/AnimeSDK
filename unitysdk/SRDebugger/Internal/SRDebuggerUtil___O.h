#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebuggerUtil___O_TypeDefinitionIndex = 35475;

	class SRDebuggerUtil___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>** StaticGet__0___GetPropertyOptionDefinition()
		{
			return (::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>**)Il2CppClass::FromTypeDefinitionIndex(SRDebuggerUtil___O_TypeDefinitionIndex)->GetStaticField(0x68490);
		}
		static ::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>** StaticGet__1___GetMethodOptionDefinition()
		{
			return (::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>**)Il2CppClass::FromTypeDefinitionIndex(SRDebuggerUtil___O_TypeDefinitionIndex)->GetStaticField(0x68498);
		}
	};
}
