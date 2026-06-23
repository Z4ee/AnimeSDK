#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E7140)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E7180)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A1E7190)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A1E7200)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x1A1E7270)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex = 85588;

	class UIActivityCheckinFinalRewardWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34440);
		}
		static ::MoleMole::UIActivityCheckinFinalRewardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCheckinFinalRewardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34448);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34450);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34458);
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
