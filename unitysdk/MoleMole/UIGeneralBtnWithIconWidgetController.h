#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_40DE9BFF4E857B03;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_GETBTN_OFFSET UNITYSDK_OFFSET(0x16F68960)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16F690C0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F68A30)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16F689C0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16F68B40)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F68AC0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F68900)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER_REFRESHBYDATA_OFFSET UNITYSDK_OFFSET(0x16F68C00)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F69110)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16F69120)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F69130)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16F691C0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16F69250)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F692F0)
#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F69380)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBtnWithIconWidgetController_TypeDefinitionIndex = 45061;

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
