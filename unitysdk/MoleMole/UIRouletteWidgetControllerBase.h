#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIRouletteWidgetControllerBase_DebugInfo.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_AFTERMOUSEPOSSETHANDLE_OFFSET UNITYSDK_OFFSET(0x1518B700)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLAMPDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x15189390)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x151891F0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_DOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x1518A6A0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_FINDRINGANGLEINDEX_OFFSET UNITYSDK_OFFSET(0x15189110)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETCURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x15186320)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETDEADZONE_OFFSET UNITYSDK_OFFSET(0x1518B990)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETDEADZONE_OUTER_OFFSET UNITYSDK_OFFSET(0x1518BCF0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETDIRECTIONANDANGLE2D_OFFSET UNITYSDK_OFFSET(0x1518C3B0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETINDEXDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x15187520)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETMISTAKECURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x15186370)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETRINGINNERRADIUS_OFFSET UNITYSDK_OFFSET(0x15188D50)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETVECTORINDEX_OFFSET UNITYSDK_OFFSET(0x15189C10)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_CONSOLELISTENLOGICEVENT_OFFSET UNITYSDK_OFFSET(0x151880F0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x15186310)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x1518AE40)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITBUTTONCALLBACKS_OFFSET UNITYSDK_OFFSET(0x15186440)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITSELECTINDEXONSHOW_OFFSET UNITYSDK_OFFSET(0x15186FF0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISSHOWCURSORMODE_OFFSET UNITYSDK_OFFSET(0x15186EF0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISWITHINANGLE_OFFSET UNITYSDK_OFFSET(0x1518C050)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISWITHINRING_OFFSET UNITYSDK_OFFSET(0x15188F10)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JOYSTICK2WHEELPOINT_OFFSET UNITYSDK_OFFSET(0x1518C2B0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15186760)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONDOWNBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1518B250)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONENTERBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1518B2A0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONEXITBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1518B4A0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15188100)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONROULETTELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x151867B0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x151866D0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151863C0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONUPBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1518B6B0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEIN_OFFSET UNITYSDK_OFFSET(0x1518AA40)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEOUT_OFFSET UNITYSDK_OFFSET(0x1518AD60)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1518A9E0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1518ACF0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYTITLEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x1518B020)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_REFRESHTITLETXT_OFFSET UNITYSDK_OFFSET(0x1518B070)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_SETONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x15186EA0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPBUTTON_OFFSET UNITYSDK_OFFSET(0x1518A840)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATEARROW_OFFSET UNITYSDK_OFFSET(0x15187910)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15187BD0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_GAMEPAD_OFFSET UNITYSDK_OFFSET(0x15186860)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOBILE_OFFSET UNITYSDK_OFFSET(0x1518A170)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOUSENEW_OFFSET UNITYSDK_OFFSET(0x15188610)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_WORLDTOSCREEN_OFFSET UNITYSDK_OFFSET(0x15188BD0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1518C780)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1518C8A0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1518C7F0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1518C8D0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1518C890)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1518C960)

namespace MoleMole
{
	inline static constexpr unsigned int UIRouletteWidgetControllerBase_TypeDefinitionIndex = 72946;

	class UIRouletteWidgetControllerBase : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single JOYSTICK_VALUE_RATIO; // 0x0
		::System::Boolean _debugDraw; // 0x2C0
		::System::Int32 _currentIndex; // 0x2C4
		::System::Int32 _currentRealStickIndex; // 0x2C8
		::UnityEngine::Vector2 _mousePos; // 0x2CC
		::System::Nullable_1<::UnityEngine::Vector2> _touchPos; // 0x2D4
		::System::Single _mistakeTimer; // 0x2E0
		::System::Int32 _lastMistakeIndex; // 0x2E4
		::System::Boolean _receiveInput; // 0x2E8
		::System::Action_1<::System::Int32>* _onClickButton; // 0x2F0
		::MoleMole::UIRouletteWidgetControllerBase_DebugInfo _debugInfo; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Int32 GetCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETCURRENTINDEX_OFFSET))(this);
		}

		::System::Int32 GetMistakeCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETMISTAKECURRENTINDEX_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnRouletteLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONROULETTELATEUPDATE_OFFSET))(this);
		}

		::System::Void SetOnClickButton(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_SETONCLICKBUTTON_OFFSET))(this, onClick);
		}

		::System::Boolean IsShowCursorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISSHOWCURSORMODE_OFFSET))(this);
		}

		::System::Void InitSelectIndexOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITSELECTINDEXONSHOW_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_ConsoleListenLogicEvent()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_CONSOLELISTENLOGICEVENT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void UpdateSelect_Gamepad(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_GAMEPAD_OFFSET))(this, value);
		}

		::System::Void UpdateSelect_MouseNew(::UnityEngine::Vector2 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOUSENEW_OFFSET))(this, deltaPos);
		}

		::System::Void UpdateSelect_Mobile(::UnityEngine::Vector3 touchScreenPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOBILE_OFFSET))(this, touchScreenPos);
		}

		::System::Void UpdateSelectIndex(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECTINDEX_OFFSET))(this, index, force);
		}

		::System::Boolean ClickButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLICKBUTTON_OFFSET))(this, index);
		}

		::System::Void DownButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_DOWNBUTTON_OFFSET))(this, index);
		}

		::System::Void UpButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPBUTTON_OFFSET))(this, index);
		}

		::System::Void PlayFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEIN_OFFSET))(this, callback);
		}

		::System::Void PlayArrowFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEIN_OFFSET))(this);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void PlayArrowFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEOUT_OFFSET))(this);
		}

		::System::Void UpdateArrow(::System::Boolean active, ::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATEARROW_OFFSET))(this, active, direction);
		}

		static ::System::Boolean get_PlatformNeedRefreshRouletteTitleView()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET))();
		}

		static ::System::Void PlayTitleFadeInAnim(::Class_2_FDFE69FE7B72463B*& anim)
		{
			return ((::System::Void(*)(::Class_2_FDFE69FE7B72463B*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYTITLEFADEINANIM_OFFSET))(anim);
		}

		static ::System::Void RefreshTitleTxt(::UnityEngine::UI::Extension::UILocalizationText*& titleTxt, ::System::String*& txtMapKey)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_REFRESHTITLETXT_OFFSET))(titleTxt, txtMapKey);
		}

		::System::Void InitButtonCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITBUTTONCALLBACKS_OFFSET))(this);
		}

		::System::Void OnDownButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONDOWNBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnEnterButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONENTERBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnExitButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONEXITBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnUpButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONUPBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void AfterMousePosSetHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_AFTERMOUSEPOSSETHANDLE_OFFSET))(this, obj);
		}

		::System::Single GetRingInnerRadius(::System::Single outerRadius)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETRINGINNERRADIUS_OFFSET))(this, outerRadius);
		}

		::UnityEngine::Vector2 GetIndexDirectionValue(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETINDEXDIRECTIONVALUE_OFFSET))(this, index);
		}

		::System::Int32 GetVectorIndex(::UnityEngine::Vector2 direction, ::System::Boolean ignoreDeadZone)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETVECTORINDEX_OFFSET))(this, direction, ignoreDeadZone);
		}

		::System::Nullable_1<::System::Single> GetDeadZone()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETDEADZONE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> GetDeadZone_Outer()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETDEADZONE_OUTER_OFFSET))(this);
		}

		::UnityEngine::Vector2 ClampDirectionValue(::UnityEngine::Vector2 originValue, ::System::Int32 minIndex, ::System::Int32 maxIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLAMPDIRECTIONVALUE_OFFSET))(this, originValue, minIndex, maxIndex);
		}

		::System::Int32 FindRingAngleIndex(::UnityEngine::Vector2 joystick, ::UnityEngine::Vector2 center, ::System::Single outerRadius, ::System::Single angleRangeTolerance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_FINDRINGANGLEINDEX_OFFSET))(this, joystick, center, outerRadius, angleRangeTolerance);
		}

		static ::System::Boolean IsWithinRing(::UnityEngine::Vector2 joystick, ::UnityEngine::Vector2 center, ::System::Single innerRadius, ::System::Single outerRadius)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISWITHINRING_OFFSET))(joystick, center, innerRadius, outerRadius);
		}

		::System::Boolean IsWithinAngle(::UnityEngine::Vector2 joystick, ::UnityEngine::Vector2 center, ::System::Single outerRadius, ::System::Single angleRangeTolerance, ::System::Int32 buttonIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISWITHINANGLE_OFFSET))(this, joystick, center, outerRadius, angleRangeTolerance, buttonIndex);
		}

		::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single> GetDirectionAndAngle2D(::UnityEngine::Vector2 center, ::System::Int32 buttonIndex, ::System::Single angleRangeTolerance)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETDIRECTIONANDANGLE2D_OFFSET))(this, center, buttonIndex, angleRangeTolerance);
		}

		static ::UnityEngine::Vector2 WorldToScreen(::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_WORLDTOSCREEN_OFFSET))(worldPos);
		}

		static ::UnityEngine::Vector2 Joystick2WheelPoint(::UnityEngine::Vector2 joystick, ::UnityEngine::Vector2 center, ::System::Single radius, ::System::Single configRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JOYSTICK2WHEELPOINT_OFFSET))(joystick, center, radius, configRatio);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeIn(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEIN_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
