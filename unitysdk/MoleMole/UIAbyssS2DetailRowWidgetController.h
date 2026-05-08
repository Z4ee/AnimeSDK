#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_898E23CD4E44A533_1;
class Class_1_945ACFB1FEBC7A2C_4;
class Class_2_754022533D501C3E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET UNITYSDK_OFFSET(0x152C7E30)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x152C7C50)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152C7F00)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152C7F90)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152C7B10)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152C7B70)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152C8010)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152C8070)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152C8100)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152C8190)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152C8220)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2DetailRowWidgetController_TypeDefinitionIndex = 43772;

	class UIAbyssS2DetailRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_754022533D501C3E* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitView(::Class_1_898E23CD4E44A533_1* contextAbyssS2DetailRowInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_898E23CD4E44A533_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this, contextAbyssS2DetailRowInfo);
		}

		::System::Void AddSubRow(::Class_1_945ACFB1FEBC7A2C_4* subRow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET))(this, subRow);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
