#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_C3EDD1939743B320;
class Class_3_4E47F36769F2B13F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralTabBtnWidgetController_Data; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x199C9BE0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_EXPANDCHILDBTN_OFFSET UNITYSDK_OFFSET(0x199C9960)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x199C9A00)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199C91A0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x199C9AC0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x199C9A70)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x199C9B10)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x199C92B0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONSELECTSUBITEM_OFFSET UNITYSDK_OFFSET(0x199C9C40)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199C9230)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199C8F00)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x199C9730)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x199C9B60)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_1_OFFSET UNITYSDK_OFFSET(0x199C96A0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x199CA050)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199CA0B0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x199CA0C0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199CA0D0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x199CA160)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x199CA1F0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x199CA280)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x199CA310)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199CA3B0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199CA440)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTabBtnWidgetController_TypeDefinitionIndex = 42459;

	class UIGeneralTabBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_C3EDD1939743B320* _view; // 0x2F0
		::System::Action_2<::System::Int32, ::System::Int32>* _onClick; // 0x2F8
		::MoleMole::UIGeneralTabBtnWidgetController_Data* _data; // 0x300
		::Class_3_4E47F36769F2B13F* _notification; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_SELECTITEM_OFFSET))(this, index);
		}

		::System::Void CancelSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_CANCELSELECT_OFFSET))(this);
		}

		::System::Void RefreshSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET))(this);
		}

		::System::Void OnSelectSubItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_ONSELECTSUBITEM_OFFSET))(this, index);
		}

		::System::Void ExpandChildBtn(::System::Boolean expand)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_EXPANDCHILDBTN_OFFSET))(this, expand);
		}

		::System::Void SetupNotificationBadge(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_OFFSET))(this, badgeType);
		}

		::System::Void SetupNotificationBadge_1(::Share::ENotificationBadgeType badgeType, ::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_1_OFFSET))(this, badgeType, subId);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
