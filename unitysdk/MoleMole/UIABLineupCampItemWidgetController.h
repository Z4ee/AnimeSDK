#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1B0A36368606660E_5;
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_HIDENUM_OFFSET UNITYSDK_OFFSET(0x190D2F60)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x190D2FC0)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190D2A80)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x190D3150)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x190D2B90)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190D2B10)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190D26B0)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x190D2C60)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x190D2EB0)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190D3460)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x190D3470)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x190D34D0)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190D34E0)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x190D3570)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x190D3600)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190D36A0)
#define MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190D3730)

namespace MoleMole
{
	inline static constexpr unsigned int UIABLineupCampItemWidgetController_TypeDefinitionIndex = 73393;

	class UIABLineupCampItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1B0A36368606660E_5* _view; // 0x2F0
		::System::Int32 _campId; // 0x2F8
		::MoleMole::UIBangBooAutoBattleInLevelPageController* _parent; // 0x300
		::System::Action_1<::System::Int32>* OnClick; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void RefreshView(::System::Int32 campId, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, campId, count);
		}

		::System::Void HideNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_HIDENUM_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPCAMPITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
