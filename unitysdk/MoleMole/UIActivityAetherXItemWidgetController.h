#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_A933CF9454745DA7_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1926DF60)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1926E250)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1926DFF0)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1926DDC0)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1926DEF0)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1926E070)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1926E620)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1926E680)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1926E710)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1926E7A0)
#define MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1926E830)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAetherXItemWidgetController_TypeDefinitionIndex = 89116;

	class UIActivityAetherXItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A933CF9454745DA7_1* _view; // 0x2C0
		::System::Int32 _index; // 0x2C8
		::System::Int32 _itemID; // 0x2CC
		::System::Action_1<::System::Int32>* OnSelect; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 index, ::System::Int32 curSelectIndex, ::System::Int32 itemID, ::System::Boolean isRewardTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, index, curSelectIndex, itemID, isRewardTaken);
		}

		::System::Void OnItemSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
