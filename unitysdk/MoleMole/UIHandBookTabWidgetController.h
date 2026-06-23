#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_6535CE33BDD95E74;
class Class_2_79AE422BA06F6D26_46;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167BBE80)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x167BC310)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x167BC2A0)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x167BC1A0)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x167BC0F0)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167BC360)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167BBF10)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167BBD30)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_REFRESHWISHLISTVIEW_OFFSET UNITYSDK_OFFSET(0x167BD450)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_RESETREDPOINT_OFFSET UNITYSDK_OFFSET(0x167BBFA0)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_SETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x167BCF40)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_SETREDPOINT_OFFSET UNITYSDK_OFFSET(0x167BCAF0)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_SETREWARDBUFF_OFFSET UNITYSDK_OFFSET(0x167BCC40)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167BD820)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x167BD830)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_1_OFFSET UNITYSDK_OFFSET(0x167BD840)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167BD850)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x167BD8E0)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x167BD970)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x167BDA00)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167BDA90)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167BDB30)
#define MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167BDBC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTabWidgetController_TypeDefinitionIndex = 42975;

	class UIHandBookTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_46* _view; // 0x2F0
		::Share::ENotificationBadgeType _redPointType; // 0x2F8
		::System::UInt32 _redPointId; // 0x2FC
		::System::Boolean hasSelected; // 0x300
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshWishlistView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_REFRESHWISHLISTVIEW_OFFSET))(this);
		}

		::System::Void SetRedPoint(::Share::ENotificationBadgeType type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_SETREDPOINT_OFFSET))(this, type, id);
		}

		::System::Void ResetRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_RESETREDPOINT_OFFSET))(this);
		}

		::System::Void SetCountDown(::System::Int64 EndTime, ::System::Boolean useDiffBg, ::System::Int32 useDiffBgSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_SETCOUNTDOWN_OFFSET))(this, EndTime, useDiffBg, useDiffBgSeconds);
		}

		::System::Void SetRewardBuff(::Class_1_6535CE33BDD95E74* showBuff)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6535CE33BDD95E74*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER_SETREWARDBUFF_OFFSET))(this, showBuff);
		}

		::System::Void _OnScrollItemUpdate_b__8_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_0_OFFSET))(this, args);
		}

		::System::Void _OnScrollItemUpdate_b__8_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_1_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
