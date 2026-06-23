#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_898E23CD4E44A533_1;
class Class_1_945ACFB1FEBC7A2C_8;
class Class_2_754022533D501C3E_14;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET UNITYSDK_OFFSET(0x15E3AD70)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15E3ABE0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E3AE40)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E3AED0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E3AAA0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E3AB00)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3AF50)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E3AFB0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E3B040)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E3B0D0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E3B160)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2DetailRowWidgetController_TypeDefinitionIndex = 72358;

	class UIAbyssS2DetailRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_754022533D501C3E_14* _view; // 0x2C0

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

		::System::Void AddSubRow(::Class_1_945ACFB1FEBC7A2C_8* subRow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C_8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET))(this, subRow);
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
