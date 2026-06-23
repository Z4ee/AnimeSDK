#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B83900)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B83940)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17B83950)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__REFRESHPENDINGVIEW_B__6_1_OFFSET UNITYSDK_OFFSET(0x17B83A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeMakerWidgetController___c_TypeDefinitionIndex = 43520;

	class UIRopeMakerWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRopeMakerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRopeMakerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489E0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489E8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__1_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _RefreshPendingView_b__6_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___C__REFRESHPENDINGVIEW_B__6_1_OFFSET))(this, success);
		}
	};
}
