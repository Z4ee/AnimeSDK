#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5A2AEBF92B56F4C9.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_277;
class Class_2_79AE422BA06F6D26_151;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18885120)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18885230)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188851B0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18884F70)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET UNITYSDK_OFFSET(0x18886430)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x18886640)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET UNITYSDK_OFFSET(0x18886280)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x188852F0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x18885D00)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0x18886AD0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x18886820)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x18886930)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET UNITYSDK_OFFSET(0x188869C0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x18886A60)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET UNITYSDK_OFFSET(0x18887BA0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18887C20)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18887C30)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18887CC0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18887D60)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18887DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianItemIconBtnWidgetController_TypeDefinitionIndex = 55868;

	class UISuibianItemIconBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_151* _view; // 0x2F0
		::Class_0_16E4307DCC419505_277* _itemView; // 0x2F8
		::System::Int32 _curCount; // 0x300
		::System::Int32 _targetCount; // 0x304
		::System::Boolean _enableClick; // 0x308
		::System::Int32 _itemID; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmptyState(::System::Boolean showEmptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this, showEmptyLabel);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_277* itemView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_277*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemView);
		}

		::System::Void RefreshViewInner(::Class_0_16E4307DCC419505_277* itemView, ::System::Int32 curCount)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_277*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET))(this, itemView, curCount);
		}

		::System::Void RefreshView_1(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::Enum_3_5A2AEBF92B56F4C9 Type, ::System::Boolean showTips, ::System::Action* customTipHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_5A2AEBF92B56F4C9, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, itemID, curCount, targetcount, Type, showTips, customTipHandle);
		}

		::System::Void RefreshView_2(::System::Int32 itemID, ::System::Int32 count, ::Enum_3_5A2AEBF92B56F4C9 showCountTextType, ::System::Boolean isShowTip, ::System::Action* customTipHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_5A2AEBF92B56F4C9, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET))(this, itemID, count, showCountTextType, isShowTip, customTipHandle);
		}

		::System::Void TryShowNegative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET))(this);
		}

		::System::Void SetItemInfo(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::Enum_3_5A2AEBF92B56F4C9 showCountTextType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_5A2AEBF92B56F4C9))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET))(this, itemID, curCount, targetcount, showCountTextType);
		}

		::System::Void SetLock(::System::Boolean isLock, ::System::Boolean isDress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET))(this, isLock, isDress);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetTransGray(::System::Boolean isGray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET))(this, isGray);
		}

		::System::Void SetUpState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
