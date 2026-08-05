#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0AB14FA7677844A2.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_BBB9057201B3EEE3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralItemBtnWidgetContext; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_GET_BTN_OFFSET UNITYSDK_OFFSET(0x17D9AF50)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17D9A650)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D9A540)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x17D9A740)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONITEMICONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17D9A6B0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D9A5D0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D9A090)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D9A260)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x17D9A790)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17D9A450)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETCLICK_OFFSET UNITYSDK_OFFSET(0x17D9ACA0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEMNUM_OFFSET UNITYSDK_OFFSET(0x17D9AD20)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEM_OFFSET UNITYSDK_OFFSET(0x17D9AB10)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D9AC40)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETTIPS_OFFSET UNITYSDK_OFFSET(0x17D9AA30)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9AF70)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D9AFD0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D9B060)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D9B0F0)
#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D9B180)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemBtnWidgetController_TypeDefinitionIndex = 77500;

	class UIGeneralItemBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BBB9057201B3EEE3* _view; // 0x2C0
		::System::Int32 itemID; // 0x2C8
		::Class_1_0D6706375CDAAE8C* itemData; // 0x2D0
		::Enum_3_0AB14FA7677844A2 showType; // 0x2D8
		::System::Int32 consume; // 0x2DC
		::System::Boolean canClick; // 0x2E0
		::UnityEngine::Events::UnityAction* clickAction; // 0x2E8
		::MoleMole::UIGeneralItemBtnWidgetContext* _context; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONBTNCLICK_OFFSET))(this);
		}

		::System::Void OnItemIconBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONITEMICONBTNCLICK_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetItem(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEM_OFFSET))(this, itemID);
		}

		::System::Void SetShowType(::Enum_3_0AB14FA7677844A2 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0AB14FA7677844A2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETSHOWTYPE_OFFSET))(this, type);
		}

		::System::Void SetClick(::System::Boolean canClick, ::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETCLICK_OFFSET))(this, canClick, action);
		}

		::System::Void RefreshItemView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET))(this);
		}

		::System::Void SetTips(::System::Boolean showTips, ::System::String* tipsText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETTIPS_OFFSET))(this, showTips, tipsText);
		}

		::System::Void SetItemNum(::System::Int32 currNum, ::System::Boolean showSpace, ::System::Int32 totalNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_SETITEMNUM_OFFSET))(this, currNum, showSpace, totalNum);
		}

		::MoleMole::UIGeneralButtonController* get_Btn()
		{
			return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER_GET_BTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
