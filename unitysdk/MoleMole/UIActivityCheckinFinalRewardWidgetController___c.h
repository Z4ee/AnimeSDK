#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1675CB30)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1675CB70)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1675CB80)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x1675CBF0)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x1675CC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex = 44004;

	class UIActivityCheckinFinalRewardWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityCheckinFinalRewardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCheckinFinalRewardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32590);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32598);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x325A0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x325A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _SetDataAndRefreshView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_0_OFFSET))(this);
		}

		::System::Void _SetDataAndRefreshView_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_1_OFFSET))(this);
		}
	};
}
