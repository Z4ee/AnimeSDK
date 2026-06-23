#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_573;
class Class_2_79AE422BA06F6D26_24;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17154F40)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONPOPUPSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17154C30)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONSKINCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x17154FD0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17154B20)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171552C0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17154820)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171549D0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x17153250)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x171534A0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_PLAYUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x171539A0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17155060)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x17150FB0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x171523A0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETLEVELROWCOLOR_OFFSET UNITYSDK_OFFSET(0x17151000)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x17154C90)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x171553D0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER__PLAYFADEIN_B__21_0_OFFSET UNITYSDK_OFFSET(0x17155460)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER__SETDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x17155430)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171554D0)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17155560)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17155570)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17155600)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17155690)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeLevelRowWidgetController_TypeDefinitionIndex = 83209;

	class UIMindscapeLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_24* _view; // 0x2C0
		::Class_2_1824EF69C8E376A3* _avatarItemData; // 0x2C8
		::System::Int32 _currentSlot; // 0x2D0
		::Class_2_208CC9941471731A_573* _talentCfg; // 0x2D8
		::System::Action_1<::System::Int32>* _clickHandle; // 0x2E0
		::System::Boolean isShowRedPoint; // 0x2E8
		::System::Single fadeInLen; // 0x2EC
		::Foundation::Coroutine::CoroutineHandle fadeinHandle; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnPopUpStateUpdate(::MoleMole::NotificationBadge* arg1, ::System::Boolean arg2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONPOPUPSTATEUPDATE_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnSkinClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONSKINCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void SetData(::Class_2_1824EF69C8E376A3* avatarItem, ::System::Int32 talentSlot, ::System::Boolean _previewMode, ::System::Boolean _friendPreviewMode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, avatarItem, talentSlot, _previewMode, _friendPreviewMode);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void PlayUnlockEffect(::System::Action* unlockCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_PLAYUNLOCKEFFECT_OFFSET))(this, unlockCallback);
		}

		::System::Single PlayFadeIn(::System::Boolean isInit, ::System::Single delay)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this, isInit, delay);
		}

		::System::Void SetUnlockState(::System::Boolean isCanUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETUNLOCKSTATE_OFFSET))(this, isCanUnlock);
		}

		::System::Single PlayFadeOut(::System::Boolean isInit)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, isInit);
		}

		::System::Void SetLevelRowColor(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_SETLEVELROWCOLOR_OFFSET))(this, c);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean _SetData_b__17_0(::Class_2_208CC9941471731A_573* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_573*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER__SETDATA_B__17_0_OFFSET))(this, o);
		}

		::System::Void _PlayFadeIn_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER__PLAYFADEIN_B__21_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
