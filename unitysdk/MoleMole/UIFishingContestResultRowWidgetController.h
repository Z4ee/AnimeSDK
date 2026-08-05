#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_325E12CD1D8D08C6;
class Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFishingContestResultRowContext; }

#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180573F0)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18057500)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18057480)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18057320)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18057380)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18057720)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18057A10)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18057A70)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18057B00)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18057BA0)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18057C30)
#define MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18057CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestResultRowWidgetController_TypeDefinitionIndex = 65546;

	class UIFishingContestResultRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_325E12CD1D8D08C6* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F* view, ::MoleMole::UIFishingContestResultRowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F*, ::MoleMole::UIFishingContestResultRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, view, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
