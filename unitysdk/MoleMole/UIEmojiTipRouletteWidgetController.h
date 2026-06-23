#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIEmojiTipWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_169A9938636591F3;
class Class_2_169A9938636591F3_Class_2_77EFC073009DCECD;
class Class_2_169A9938636591F3_Class_2_9649345337626B46_1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_AFTERMOUSEPOSSETHANDLE_OFFSET UNITYSDK_OFFSET(0x16779E60)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_CLAMPDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1677B350)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1677D330)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_DOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x1677DDD0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x16777030)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETDIRECTIONANDANGLE2D_OFFSET UNITYSDK_OFFSET(0x1677D8D0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETIGNOREFADING_OFFSET UNITYSDK_OFFSET(0x167768E0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETINDEXDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1677A100)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETRINGINNERRADIUS_OFFSET UNITYSDK_OFFSET(0x1677CA00)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETTARGETVIEW_OFFSET UNITYSDK_OFFSET(0x1677E1D0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETVECTORINDEX_OFFSET UNITYSDK_OFFSET(0x1677BF60)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x167768A0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x16779C80)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_INITSELECTINDEXONSHOW_OFFSET UNITYSDK_OFFSET(0x1677AB60)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16776A00)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ISSHOWCURSORMODE_OFFSET UNITYSDK_OFFSET(0x16777D50)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ISWITHINANGLE_OFFSET UNITYSDK_OFFSET(0x1677D530)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ISWITHINRING_OFFSET UNITYSDK_OFFSET(0x1677CFE0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_JOYSTICK2WHEELPOINT_OFFSET UNITYSDK_OFFSET(0x1677D7C0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x167784E0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167770D0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONDOWNBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x16778B30)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONENTERBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x16778F40)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONEXITBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x16779140)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x167771E0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16776D70)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16777160)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16776920)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16776D00)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x16778590)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x16778A10)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_PLAYTITLEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x16779C30)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHBUTTONCDVIEW_OFFSET UNITYSDK_OFFSET(0x1677A520)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x16779610)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x16779350)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHTITLETXT_OFFSET UNITYSDK_OFFSET(0x16779A50)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_RINGANGLERANGEINDEX_OFFSET UNITYSDK_OFFSET(0x1677D1D0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_SETONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1677DD80)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_SHOWVIEW_OFFSET UNITYSDK_OFFSET(0x16776E40)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1677C880)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPBUTTON_OFFSET UNITYSDK_OFFSET(0x1677DFD0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATEARROW_OFFSET UNITYSDK_OFFSET(0x1677B0E0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16778B80)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATESELECT_GAMEPAD_OFFSET UNITYSDK_OFFSET(0x167776D0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATESELECT_MOUSENEW_OFFSET UNITYSDK_OFFSET(0x16777E50)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1677E220)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1677E2C0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1677E350)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1677E380)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1677E420)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1677E4B0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1677E540)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1677E5D0)
#define MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1677E5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEmojiTipRouletteWidgetController_TypeDefinitionIndex = 87203;

	class UIEmojiTipRouletteWidgetController : public ::MoleMole::UIEmojiTipWidgetController
	{
	public:
		// static const ::System::Single JOYSTICK_VALUE_RATIO; // 0x0
		::Class_2_169A9938636591F3* _view; // 0x2C0
		::Class_2_169A9938636591F3_Class_2_9649345337626B46_1* _childView; // 0x2C8
		::UnityEngine::Vector2 _mousePos; // 0x2D0
		::System::Int32 _currentIndex; // 0x2D8
		::System::Int32 _currentRealStickIndex; // 0x2DC
		::System::Single _mistakeTimer; // 0x2E0
		::System::Int32 _lastMistakeIndex; // 0x2E4
		::System::Single _newbieTimer; // 0x2E8
		::System::Action_1<::System::Int32>* _onClickButton; // 0x2F0
		::System::Boolean _receiveInput; // 0x2F8
		::System::Boolean _enableInput; // 0x2F9
		::UnityEngine::Color maskColor; // 0x2FC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void EnableInput(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ENABLEINPUT_OFFSET))(this, enable);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsShowCursorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ISSHOWCURSORMODE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this, callback);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Boolean GetIgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETIGNOREFADING_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnDownButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONDOWNBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnEnterButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONENTERBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnExitButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ONEXITBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void UpdateSelectIndex(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATESELECTINDEX_OFFSET))(this, index, force);
		}

		::System::Void ShowView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_SHOWVIEW_OFFSET))(this);
		}

		::System::Void RefreshButton(::Class_2_169A9938636591F3_Class_2_77EFC073009DCECD* buttonView, ::System::Int32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_169A9938636591F3_Class_2_77EFC073009DCECD*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHBUTTON_OFFSET))(this, buttonView, configId);
		}

		::System::Void RefreshRouletteTitleView(::System::Int32& rouletteItemIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHROULETTETITLEVIEW_OFFSET))(this, rouletteItemIdx);
		}

		static ::System::Void PlayTitleFadeInAnim(::Class_2_FDFE69FE7B72463B*& anim)
		{
			return ((::System::Void(*)(::Class_2_FDFE69FE7B72463B*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_PLAYTITLEFADEINANIM_OFFSET))(anim);
		}

		static ::System::Void RefreshTitleTxt(::UnityEngine::UI::Extension::UILocalizationText*& titleTxt, ::System::String*& txtMapKey)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHTITLETXT_OFFSET))(titleTxt, txtMapKey);
		}

		static ::System::Boolean get_PlatformNeedRefreshRouletteTitleView()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET))();
		}

		::System::Void AfterMousePosSetHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_AFTERMOUSEPOSSETHANDLE_OFFSET))(this, obj);
		}

		::UnityEngine::Vector2 GetIndexDirectionValue(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETINDEXDIRECTIONVALUE_OFFSET))(this, index);
		}

		::System::Void RefreshButtonCDView(::System::Single time, ::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_REFRESHBUTTONCDVIEW_OFFSET))(this, time, ratio);
		}

		::System::Void InitSelectIndexOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_INITSELECTINDEXONSHOW_OFFSET))(this);
		}

		::System::Void UpdateSelect_MouseNew(::UnityEngine::Vector2 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATESELECT_MOUSENEW_OFFSET))(this, deltaPos);
		}

		::System::Void UpdateArrow(::System::Boolean active, ::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATEARROW_OFFSET))(this, active, direction);
		}

		::System::Void UpdateSelect_Gamepad(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPDATESELECT_GAMEPAD_OFFSET))(this, value);
		}

		static ::System::Int32 RingAngleRangeIndex(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& outerRadius, ::System::Single& angleRangeTolerance, ::Class_2_169A9938636591F3_Class_2_9649345337626B46_1*& viewList, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*& to2dSpace)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&, ::Class_2_169A9938636591F3_Class_2_9649345337626B46_1*&, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_RINGANGLERANGEINDEX_OFFSET))(joystick, center, outerRadius, angleRangeTolerance, viewList, to2dSpace);
		}

		static ::System::Boolean IsWithinRing(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& innerRadius, ::System::Single& outerRadius)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ISWITHINRING_OFFSET))(joystick, center, innerRadius, outerRadius);
		}

		static ::System::Boolean IsWithinAngle(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& outerRadius, ::System::Single& angleRangeTolerance, ::Class_2_169A9938636591F3_Class_2_77EFC073009DCECD*& view, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*& to2dSpace)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&, ::Class_2_169A9938636591F3_Class_2_77EFC073009DCECD*&, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_ISWITHINANGLE_OFFSET))(joystick, center, outerRadius, angleRangeTolerance, view, to2dSpace);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single> GetDirectionAndAngle2D(::UnityEngine::Vector2& center, ::Class_2_169A9938636591F3_Class_2_77EFC073009DCECD*& view, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*& to2dSpace, ::System::Single& angleRangeTolerance)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single>(*)(::UnityEngine::Vector2&, ::Class_2_169A9938636591F3_Class_2_77EFC073009DCECD*&, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETDIRECTIONANDANGLE2D_OFFSET))(center, view, to2dSpace, angleRangeTolerance);
		}

		static ::UnityEngine::Vector2 Transform(::UnityEngine::Vector3 world)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_TRANSFORM_OFFSET))(world);
		}

		static ::UnityEngine::Vector2 Joystick2WheelPoint(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& radius, ::System::Single& configRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_JOYSTICK2WHEELPOINT_OFFSET))(joystick, center, radius, configRatio);
		}

		::System::Single GetRingInnerRadius(::System::Single& outerRadius)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETRINGINNERRADIUS_OFFSET))(this, outerRadius);
		}

		::System::Void SetOnClickButton(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_SETONCLICKBUTTON_OFFSET))(this, onClick);
		}

		::System::Boolean ClickButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_CLICKBUTTON_OFFSET))(this, index);
		}

		::System::Void DownButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_DOWNBUTTON_OFFSET))(this, index);
		}

		::System::Void UpButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_UPBUTTON_OFFSET))(this, index);
		}

		::Class_2_169A9938636591F3_Class_2_9649345337626B46_1* GetTargetView()
		{
			return ((::Class_2_169A9938636591F3_Class_2_9649345337626B46_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETTARGETVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector2 ClampDirectionValue(::UnityEngine::Vector2 originValue, ::System::Int32 minIndex, ::System::Int32 maxIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_CLAMPDIRECTIONVALUE_OFFSET))(this, originValue, minIndex, maxIndex);
		}

		::System::Int32 GetVectorIndex(::UnityEngine::Vector2 direction, ::System::Boolean ignoreDeadZone)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER_GETVECTORINDEX_OFFSET))(this, direction, ignoreDeadZone);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeIn(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_PLAYFADEIN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOJITIPROULETTEWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
