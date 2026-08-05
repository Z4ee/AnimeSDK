#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_40DE9BFF4E857B03;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_GETBTN_OFFSET UNITYSDK_OFFSET(0x195F43F0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x195F4B60)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195F44C0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x195F4450)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x195F45D0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x195F4550)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x195F4390)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_REFRESHBYDATA_OFFSET UNITYSDK_OFFSET(0x195F4690)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195F4BB0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x195F4BC0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195F4BD0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x195F4C60)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x195F4CF0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x195F4D90)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x195F4E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBtnWithIconWidgetController_TypeDefinitionIndex = 86504;

	class UIGeneralBtnWithIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_40DE9BFF4E857B03* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetBtn()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_GETBTN_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByData(::MoleMole::UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_REFRESHBYDATA_OFFSET))(this, data);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
