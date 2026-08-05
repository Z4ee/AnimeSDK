#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralPopUpArrowWidgetController_ArrowPosition.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5E2FBACADDB625B7_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195FE180)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x195FE210)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x195FDD70)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x195FDDE0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x195FDFE0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWPOSITION_OFFSET UNITYSDK_OFFSET(0x195FE290)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWSTATE_OFFSET UNITYSDK_OFFSET(0x195FDEF0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETSHOWINGSTATE_OFFSET UNITYSDK_OFFSET(0x195FE2E0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195FE340)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195FE3A0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x195FE430)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x195FE4C0)
#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x195FE550)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPopUpArrowWidgetController_TypeDefinitionIndex = 61674;

	class UIGeneralPopUpArrowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_5* _view; // 0x2C0
		::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition _arrowPosition; // 0x2C8
		::System::Boolean _isShowing; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetArrowPosition(::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWPOSITION_OFFSET))(this, position);
		}

		::System::Void SetShowingState(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETSHOWINGSTATE_OFFSET))(this, show);
		}

		::System::Void RefreshView(::System::Boolean show, ::System::Boolean force, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, show, force, playAnim);
		}

		::System::Void SetArrowState(::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER_SETARROWSTATE_OFFSET))(this, position);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
