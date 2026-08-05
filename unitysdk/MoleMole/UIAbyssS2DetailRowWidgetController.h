#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_898E23CD4E44A533;
class Class_1_945ACFB1FEBC7A2C_7;
class Class_2_754022533D501C3E_12;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET UNITYSDK_OFFSET(0x173C8EB0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x173C8D20)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173C8F80)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173C9010)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173C8BE0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173C8C40)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173C9090)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173C90F0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173C9180)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173C9210)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173C92A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2DetailRowWidgetController_TypeDefinitionIndex = 67721;

	class UIAbyssS2DetailRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_754022533D501C3E_12* _view; // 0x2C0

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

		::System::Void InitView(::Class_1_898E23CD4E44A533* contextAbyssS2DetailRowInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_898E23CD4E44A533*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this, contextAbyssS2DetailRowInfo);
		}

		::System::Void AddSubRow(::Class_1_945ACFB1FEBC7A2C_7* subRow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET))(this, subRow);
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
