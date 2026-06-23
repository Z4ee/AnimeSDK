#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_2CCC5D7984CDCED4;
class Class_2_55648B18360E84CE;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CHECKAVATARCANSELECT_1_OFFSET UNITYSDK_OFFSET(0x12280DA0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CHECKAVATARCANSELECT_OFFSET UNITYSDK_OFFSET(0x12280300)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CREATROLELISTROW_OFFSET UNITYSDK_OFFSET(0x122801D0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_DELAYCHANGEACTION_OFFSET UNITYSDK_OFFSET(0x12282960)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1227FE30)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x12281180)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONAVATARSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x12282400)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x12281A10)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12282220)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x122818F0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x12280930)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONNEXTBTN_OFFSET UNITYSDK_OFFSET(0x12280560)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONPREVIOUSBTN_OFFSET UNITYSDK_OFFSET(0x122808A0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12281020)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x122829B0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1227FE40)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12280FA0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x122823A0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x12282110)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEACTION_OFFSET UNITYSDK_OFFSET(0x122822B0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x122804D0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETFORBIDSELECTLOCKAVATAR_OFFSET UNITYSDK_OFFSET(0x12280470)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETLEFTACTION_OFFSET UNITYSDK_OFFSET(0x12282300)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETNEXTAVATAR_OFFSET UNITYSDK_OFFSET(0x122805E0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETRIGHTACTION_OFFSET UNITYSDK_OFFSET(0x12282350)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12282B00)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER__SETBLOCKINPUT_B__25_0_OFFSET UNITYSDK_OFFSET(0x12282BE0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12282CB0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x12282D40)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x12282DD0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12282E00)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12282EA0)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12282F30)
#define MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12282FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleChangeWidgetController_TypeDefinitionIndex = 49298;

	class UIRoleChangeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_55648B18360E84CE* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* _allItems; // 0x2C8
		::System::Action_1<::Class_1_2CCC5D7984CDCED4*>* _selectChangeAction; // 0x2D0
		::System::Action* _selectLeftAction; // 0x2D8
		::System::Action* _selectRightAction; // 0x2E0
		::System::Single changeDelayTime; // 0x2E8
		::System::Int32 _curSelectIndex; // 0x2EC
		::System::Boolean _isForbidSelectLockAvatar; // 0x2F0
		::System::Int32 _forbidSelectLockAvatarTip; // 0x2F4
		::System::Boolean _isSelectChange; // 0x2F8
		::System::Int32 _selectChangeType; // 0x2FC
		::Foundation::Coroutine::CoroutineHandle changeDelay; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldHandleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatRoleListRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CREATROLELISTROW_OFFSET))(this, arg);
		}

		::System::Boolean CheckAvatarCanSelect(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CHECKAVATARCANSELECT_OFFSET))(this, arg);
		}

		::System::Void SetForbidSelectLockAvatar(::System::Boolean isForbid, ::System::Int32 tipId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETFORBIDSELECTLOCKAVATAR_OFFSET))(this, isForbid, tipId);
		}

		::System::Void SetChangeBtnState(::System::Boolean canClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEBTNSTATE_OFFSET))(this, canClick);
		}

		::System::Void OnNextBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONNEXTBTN_OFFSET))(this);
		}

		::System::Void OnPreviousBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONPREVIOUSBTN_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean CheckAvatarCanSelect_1(::System::Int32 index, ::System::Boolean showTip)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_CHECKAVATARCANSELECT_1_OFFSET))(this, index, showTip);
		}

		::System::Void SetNextAvatar(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETNEXTAVATAR_OFFSET))(this, selectIndex);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetBlockInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETBLOCKINPUT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitView(::MoleMole::UIRoleInfoPageContext* roleInfoContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleInfoPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_INITVIEW_OFFSET))(this, roleInfoContext);
		}

		::System::Void SetChangeAction(::System::Action_1<::Class_1_2CCC5D7984CDCED4*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_2CCC5D7984CDCED4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETCHANGEACTION_OFFSET))(this, action);
		}

		::System::Void SetLeftAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETLEFTACTION_OFFSET))(this, action);
		}

		::System::Void SetRightAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_SETRIGHTACTION_OFFSET))(this, action);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnAvatarSelectHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONAVATARSELECTHANDLE_OFFSET))(this, obj);
		}

		::System::Void DelayChangeAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_DELAYCHANGEACTION_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _SetBlockInput_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER__SETBLOCKINPUT_B__25_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
