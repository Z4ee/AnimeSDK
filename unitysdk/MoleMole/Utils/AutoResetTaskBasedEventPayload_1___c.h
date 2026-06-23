#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace MoleMole::Utils { template <typename T> class AutoResetTaskBasedEventPayload_1___c; }
namespace System { template <typename T> class Func_1; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetTaskBasedEventPayload_1___c_TypeDefinitionIndex = 79330;

	template <typename T>
	class AutoResetTaskBasedEventPayload_1___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::AutoResetTaskBasedEventPayload_1___c<T>** StaticGet___9()
		{
			return (::MoleMole::Utils::AutoResetTaskBasedEventPayload_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>** StaticGet___9__1_1()
		{
			return (::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
