#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B1F470)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetTaskBasedEventPayload_TypeDefinitionIndex = 72055;

	class AutoResetTaskBasedEventPayload : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>** StaticGet_Constructor()
		{
			return (::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload_TypeDefinitionIndex)->GetStaticField(0x4DB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD__CCTOR_OFFSET))();
		}
	};
}
