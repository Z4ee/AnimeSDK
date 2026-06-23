#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BECCB0)
#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BECCF0)
#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x11BECD00)
#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x11BECDD0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetTaskBasedEventPayload___c_TypeDefinitionIndex = 39840;

	class AutoResetTaskBasedEventPayload___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::AutoResetTaskBasedEventPayload___c** StaticGet___9()
		{
			return (::MoleMole::Utils::AutoResetTaskBasedEventPayload___c**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload___c_TypeDefinitionIndex)->GetStaticField(0x435A0);
		}
		static ::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>** StaticGet___9__1_1()
		{
			return (::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload___c_TypeDefinitionIndex)->GetStaticField(0x435A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CTOR_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>* __cctor_b__1_0()
		{
			return ((::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_0_OFFSET))(this);
		}

		::MoleMole::Utils::ITypeErasedCompletionSource* __cctor_b__1_1()
		{
			return ((::MoleMole::Utils::ITypeErasedCompletionSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_1_OFFSET))(this);
		}
	};
}
