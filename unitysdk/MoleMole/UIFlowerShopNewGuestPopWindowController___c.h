#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__9_0_OFFSET UNITYSDK_OFFSET(0x16F529B0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__9_2_OFFSET UNITYSDK_OFFSET(0x16F52AD0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F52960)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F529A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewGuestPopWindowController___c_TypeDefinitionIndex = 67941;

	class UIFlowerShopNewGuestPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIFlowerShopNewGuestPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIFlowerShopNewGuestPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerShopNewGuestPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x413C0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__9_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerShopNewGuestPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x413C8);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__9_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerShopNewGuestPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x413D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindViewCallbacks_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__9_0_OFFSET))(this);
		}

		::System::Void _BindViewCallbacks_b__9_2(::System::Boolean jump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__9_2_OFFSET))(this, jump);
		}
	};
}
