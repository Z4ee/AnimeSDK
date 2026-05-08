#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_5E2FBACADDB625B7_35;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ADDMOUSEMOVEDELTARECORDDATA_OFFSET UNITYSDK_OFFSET(0x1469F700)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_CLEARMOUSEMOVEDELTARECORDDATA_OFFSET UNITYSDK_OFFSET(0x1469F8F0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GETTOTALMOUSEMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x1469F7A0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1469D3A0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x1469FA00)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1469D3B0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1469D9B0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1469D6A0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1469D730)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1469D440)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1469D630)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_OVERRIDECAMERAMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x1469F9B0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMODECAMERALOCK_OFFSET UNITYSDK_OFFSET(0x1469E6B0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMOVEDELTARECORDDATA_OFFSET UNITYSDK_OFFSET(0x1469F540)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REGISTERWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x1469D4B0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_RESETROTATING_OFFSET UNITYSDK_OFFSET(0x1469D960)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SETMANUALLOCKENABLED_OFFSET UNITYSDK_OFFSET(0x1469F960)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x1469ECA0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1469F4E0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x1469E450)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_TOGGLEMANUALLOCK_OFFSET UNITYSDK_OFFSET(0x1469F230)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_UNREGISTERWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x1469D7E0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1469FAD0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_B__12_0_OFFSET UNITYSDK_OFFSET(0x1469FBA0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__TOGGLEMANUALLOCK_B__9_0_OFFSET UNITYSDK_OFFSET(0x1469FB90)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1469FBB0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1469FC40)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1469FC70)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1469FD30)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1469FD40)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1469FD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPlayerCameraChildWindowController_TypeDefinitionIndex = 69046;

	class UIInLevelPlayerCameraChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean isRotating; // 0x310
		::Class_2_5E2FBACADDB625B7_35* _view; // 0x318
		::UnityEngine::Vector2 _curFrameAxisValue; // 0x320
		::UnityEngine::Vector2 _curFrameRawAxisValue; // 0x328
		::System::Boolean _isManualLockEnabled; // 0x330
		::System::Boolean _isMouseScrollCD; // 0x331
		::System::Boolean _isMouseMoveDeltaCD; // 0x332
		::System::Boolean _isToggleManualLockCD; // 0x333
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* _manualLockMouseMoveDeltaRecordData; // 0x338
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* _mouseModeMouseMoveDeltaRecordData; // 0x340
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x348
		::MoleMole::InputLogicEventType _overrideCameraMoveEvent; // 0x34C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void RefreshMouseModeCameraLock(::UnityEngine::Vector2 mouseDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMODECAMERALOCK_OFFSET))(this, mouseDelta);
		}

		::System::Boolean ToggleManualLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_TOGGLEMANUALLOCK_OFFSET))(this);
		}

		::System::Boolean SwitchManualLockTarget(::System::Boolean isPrev)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGET_OFFSET))(this, isPrev);
		}

		::System::Boolean SwitchManualLockTargetByMouseScroll(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSESCROLL_OFFSET))(this, inputAction);
		}

		::System::Boolean SwitchManualLockTargetByMouseMoveDelta(::UnityEngine::Vector2 mouseDelta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_OFFSET))(this, mouseDelta);
		}

		::System::Void AddMouseMoveDeltaRecordData(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList, ::System::Single delta, ::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ADDMOUSEMOVEDELTARECORDDATA_OFFSET))(this, dataList, delta, curTime);
		}

		::System::Void ClearMouseMoveDeltaRecordData(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_CLEARMOUSEMOVEDELTARECORDDATA_OFFSET))(this, dataList);
		}

		::System::Single GetTotalMouseMoveDelta(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GETTOTALMOUSEMOVEDELTA_OFFSET))(this, dataList);
		}

		::System::Void RefreshMouseMoveDeltaRecordData(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList, ::System::Single curTime, ::System::Single maxRecordTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMOVEDELTARECORDDATA_OFFSET))(this, dataList, curTime, maxRecordTime);
		}

		::System::Void SetManualLockEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SETMANUALLOCKENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void OverrideCameraMoveEvent(::MoleMole::InputLogicEventType moveEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_OVERRIDECAMERAMOVEEVENT_OFFSET))(this, moveEvent);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void ResetRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_RESETROTATING_OFFSET))(this);
		}

		::System::Void RegisterWorldUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REGISTERWORLDUPDATE_OFFSET))(this);
		}

		::System::Void UnregisterWorldUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_UNREGISTERWORLDUPDATE_OFFSET))(this);
		}

		::System::Void _ToggleManualLock_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__TOGGLEMANUALLOCK_B__9_0_OFFSET))(this);
		}

		::System::Void _SwitchManualLockTargetByMouseMoveDelta_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
