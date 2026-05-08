#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T> class Func_1; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetTaskBasedEventPayload_1_TypeDefinitionIndex = 44672;

	template <typename T>
	class AutoResetTaskBasedEventPayload_1 : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>** StaticGet_Constructor()
		{
			return (::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
