#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A11CB4C08EF906E4;
class Class_2_B61F7879B44C046D;
class Class_2_B61F7879B44C046D_Class_2_918A88C840E30455;
class Class_2_B61F7879B44C046D_Class_2_9649345337626B46;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_AFTERMOUSEPOSSETHANDLE_OFFSET UNITYSDK_OFFSET(0x152F11B0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_CLAMPDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x152EB510)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x152ED5C0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_DOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x152EE600)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETCURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x152EA030)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETDIRECTIONANDANGLE2D_OFFSET UNITYSDK_OFFSET(0x152EDBA0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETIGNOREFADING_OFFSET UNITYSDK_OFFSET(0x152E6D50)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETINDEXDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x152EFA60)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETMISTICKCURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x152EA080)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x152E6D90)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETRINGINNERRADIUS_OFFSET UNITYSDK_OFFSET(0x152ECC90)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETROULETTEITEMCONFIGID_OFFSET UNITYSDK_OFFSET(0x152F09D0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETROULETTETXTKEY_OFFSET UNITYSDK_OFFSET(0x152F1020)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETTARGETVIEW_OFFSET UNITYSDK_OFFSET(0x152E7080)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETVECTORINDEX_OFFSET UNITYSDK_OFFSET(0x152EABB0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x152E6D10)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x152F0C60)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_HIDEROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x152F0930)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_INITSELECTINDEXONSHOW_OFFSET UNITYSDK_OFFSET(0x152EF4D0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x152E71B0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ISSHOWCURSORMODE_OFFSET UNITYSDK_OFFSET(0x152E7950)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ISWITHINANGLE_OFFSET UNITYSDK_OFFSET(0x152ED800)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ISWITHINRING_OFFSET UNITYSDK_OFFSET(0x152ED270)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_JOYSTICK2WHEELPOINT_OFFSET UNITYSDK_OFFSET(0x152EDA90)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x152E9F50)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_NEEDREFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x152F0780)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_NEWBIECORRECT_OFFSET UNITYSDK_OFFSET(0x152E8C50)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152E8B30)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONDOWNBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x152EFEC0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONENTERBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x152EFF10)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONEXITBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x152F0110)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x152E8A90)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x152E8CB0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x152E89D0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONPHOTOQUESTTIPSUPDATEHANDLE_OFFSET UNITYSDK_OFFSET(0x152F1450)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x152E7BD0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152E8BC0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152E70D0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152E7450)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUNLOCKCHANGE_OFFSET UNITYSDK_OFFSET(0x152F0320)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONWHEELSHORTCUTCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x152F14A0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x152E74C0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x152E7A50)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_PLAYTITLEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x152F1160)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x152EEA80)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHROULETTETITLEVIEWBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x152F0B70)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x152F0700)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHTITLETXT_OFFSET UNITYSDK_OFFSET(0x152F0E40)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REGISTNOTIFY_OFFSET UNITYSDK_OFFSET(0x152E85F0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_RINGANGLERANGEINDEX_OFFSET UNITYSDK_OFFSET(0x152ED460)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_SETONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x152EA0D0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_SHOWVIEW_OFFSET UNITYSDK_OFFSET(0x152E7DC0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x152ECB10)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_TRYREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x152EEDF0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UNREGISTNOTIFY_OFFSET UNITYSDK_OFFSET(0x152E8040)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPBUTTON_OFFSET UNITYSDK_OFFSET(0x152EE840)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATEARROW_OFFSET UNITYSDK_OFFSET(0x152EC860)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x152EC120)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_GAMEPAD_OFFSET UNITYSDK_OFFSET(0x152E91A0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_MOBILE_OFFSET UNITYSDK_OFFSET(0x152EE050)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_MOUSENEW_OFFSET UNITYSDK_OFFSET(0x152E9870)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_MOUSE_OFFSET UNITYSDK_OFFSET(0x152EA120)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152F1540)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x152F15B0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152F1640)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x152F16D0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x152F1760)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x152F1790)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152F1830)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152F18C0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152F1950)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x152F19E0)
#define MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x152F19F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRoulettWidgetController_TypeDefinitionIndex = 58505;

	class UIMainCityRoulettWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 PHOTO_FUNC_ID = 0xB; // 0x0
		// static const ::System::Single JOYSTICK_VALUE_RATIO; // 0x0
		::Class_2_B61F7879B44C046D* _view; // 0x2C0
		::System::Int32 _currentIndex; // 0x2C8
		::System::Int32 _currentRealStickIndex; // 0x2CC
		::UnityEngine::Vector2 _mousePos; // 0x2D0
		::System::Single _mistakeTimer; // 0x2D8
		::System::Int32 _lastMistakeIndex; // 0x2DC
		::System::Single _newbieTimer; // 0x2E0
		::Class_2_B61F7879B44C046D_Class_2_9649345337626B46* _mobileView; // 0x2E8
		::System::Boolean _receiveInput; // 0x2F0
		::System::Action_1<::System::Int32>* _onClickButton; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Boolean GetIgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETIGNOREFADING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void PlayFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this, callback);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean NewbieCorrect(::System::Int32 funcId, ::System::Single& timerConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_NEWBIECORRECT_OFFSET))(this, funcId, timerConfig);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 GetCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETCURRENTINDEX_OFFSET))(this);
		}

		::System::Int32 GetMistickCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETMISTICKCURRENTINDEX_OFFSET))(this);
		}

		::System::Void SetOnClickButton(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_SETONCLICKBUTTON_OFFSET))(this, onClick);
		}

		::System::Void UpdateSelect_Mouse(::UnityEngine::Vector2 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_MOUSE_OFFSET))(this, deltaPos);
		}

		::System::Void UpdateSelect_MouseNew(::UnityEngine::Vector2 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_MOUSENEW_OFFSET))(this, deltaPos);
		}

		::System::Void UpdateArrow(::System::Boolean active, ::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATEARROW_OFFSET))(this, active, direction);
		}

		::System::Void UpdateSelect_Gamepad(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_GAMEPAD_OFFSET))(this, value);
		}

		static ::System::Int32 RingAngleRangeIndex(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& outerRadius, ::System::Single& angleRangeTolerance, ::Class_2_B61F7879B44C046D_Class_2_9649345337626B46*& viewList, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*& to2dSpace)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&, ::Class_2_B61F7879B44C046D_Class_2_9649345337626B46*&, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_RINGANGLERANGEINDEX_OFFSET))(joystick, center, outerRadius, angleRangeTolerance, viewList, to2dSpace);
		}

		static ::System::Boolean IsWithinRing(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& innerRadius, ::System::Single& outerRadius)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ISWITHINRING_OFFSET))(joystick, center, innerRadius, outerRadius);
		}

		static ::System::Boolean IsWithinAngle(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& outerRadius, ::System::Single& angleRangeTolerance, ::Class_2_B61F7879B44C046D_Class_2_918A88C840E30455*& view, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*& to2dSpace)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&, ::Class_2_B61F7879B44C046D_Class_2_918A88C840E30455*&, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ISWITHINANGLE_OFFSET))(joystick, center, outerRadius, angleRangeTolerance, view, to2dSpace);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single> GetDirectionAndAngle2D(::UnityEngine::Vector2& center, ::Class_2_B61F7879B44C046D_Class_2_918A88C840E30455*& view, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*& to2dSpace, ::System::Single& angleRangeTolerance)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single>(*)(::UnityEngine::Vector2&, ::Class_2_B61F7879B44C046D_Class_2_918A88C840E30455*&, ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector2>*&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETDIRECTIONANDANGLE2D_OFFSET))(center, view, to2dSpace, angleRangeTolerance);
		}

		static ::UnityEngine::Vector2 Transform(::UnityEngine::Vector3 world)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_TRANSFORM_OFFSET))(world);
		}

		static ::UnityEngine::Vector2 Joystick2WheelPoint(::UnityEngine::Vector2& joystick, ::UnityEngine::Vector2& center, ::System::Single& radius, ::System::Single& configRatio)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_JOYSTICK2WHEELPOINT_OFFSET))(joystick, center, radius, configRatio);
		}

		::System::Single GetRingInnerRadius(::System::Single& outerRadius)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETRINGINNERRADIUS_OFFSET))(this, outerRadius);
		}

		::System::Void UpdateSelect_Mobile(::UnityEngine::Vector3 touchScreenPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECT_MOBILE_OFFSET))(this, touchScreenPos);
		}

		::System::Boolean ClickButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_CLICKBUTTON_OFFSET))(this, index);
		}

		::System::Void DownButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_DOWNBUTTON_OFFSET))(this, index);
		}

		::System::Void UpButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPBUTTON_OFFSET))(this, index);
		}

		::System::Void InitView(::Class_2_B61F7879B44C046D_Class_2_9649345337626B46* targetView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B61F7879B44C046D_Class_2_9649345337626B46*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_INITVIEW_OFFSET))(this, targetView);
		}

		::System::Void ShowView(::Class_2_B61F7879B44C046D_Class_2_9649345337626B46* targetView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B61F7879B44C046D_Class_2_9649345337626B46*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_SHOWVIEW_OFFSET))(this, targetView);
		}

		::System::Boolean IsShowCursorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ISSHOWCURSORMODE_OFFSET))(this);
		}

		::System::Void InitSelectIndexOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_INITSELECTINDEXONSHOW_OFFSET))(this);
		}

		::Class_2_B61F7879B44C046D_Class_2_9649345337626B46* GetTargetView()
		{
			return ((::Class_2_B61F7879B44C046D_Class_2_9649345337626B46*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETTARGETVIEW_OFFSET))(this);
		}

		::System::Void OnDownButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONDOWNBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnEnterButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONENTERBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnExitButtonCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONEXITBUTTONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnUnlockChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONUNLOCKCHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshButton(::Class_2_B61F7879B44C046D_Class_2_918A88C840E30455* buttonView, ::System::Int32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B61F7879B44C046D_Class_2_918A88C840E30455*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHBUTTON_OFFSET))(this, buttonView, configId);
		}

		::System::Void RefreshRouletteTitleView(::System::Int32& rouletteItemIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHROULETTETITLEVIEW_OFFSET))(this, rouletteItemIdx);
		}

		static ::System::Boolean get_PlatformNeedRefreshRouletteTitleView()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET))();
		}

		static ::System::Boolean NeedRefreshRouletteTitleView(::System::Int32& rouletteItemIdx)
		{
			return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_NEEDREFRESHROULETTETITLEVIEW_OFFSET))(rouletteItemIdx);
		}

		::System::Void HideRouletteTitleView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_HIDEROULETTETITLEVIEW_OFFSET))(this);
		}

		::System::Void RefreshRouletteTitleViewByConfigId(::System::Int32& configId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHROULETTETITLEVIEWBYCONFIGID_OFFSET))(this, configId);
		}

		static ::System::Void PlayTitleFadeInAnim(::Class_2_FDFE69FE7B72463B*& anim)
		{
			return ((::System::Void(*)(::Class_2_FDFE69FE7B72463B*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_PLAYTITLEFADEINANIM_OFFSET))(anim);
		}

		static ::System::Void RefreshTitleTxt(::UnityEngine::UI::Extension::UILocalizationText*& titleTxt, ::System::String*& txtMapKey)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REFRESHTITLETXT_OFFSET))(titleTxt, txtMapKey);
		}

		static ::System::Int32 GetRouletteItemConfigId(::System::Int32& rouletteItemIdx)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETROULETTEITEMCONFIGID_OFFSET))(rouletteItemIdx);
		}

		static ::System::String* GetRouletteTxtKey(::System::Int32& configId)
		{
			return ((::System::String*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETROULETTETXTKEY_OFFSET))(configId);
		}

		::System::Void UpdateSelectIndex(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UPDATESELECTINDEX_OFFSET))(this, index, force);
		}

		::UnityEngine::Vector2 ClampDirectionValue(::UnityEngine::Vector2 originValue, ::System::Int32 minIndex, ::System::Int32 maxIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_CLAMPDIRECTIONVALUE_OFFSET))(this, originValue, minIndex, maxIndex);
		}

		::System::Int32 GetVectorIndex(::UnityEngine::Vector2 direction, ::System::Boolean ignoreDeadZone)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETVECTORINDEX_OFFSET))(this, direction, ignoreDeadZone);
		}

		::UnityEngine::Vector2 GetIndexDirectionValue(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_GETINDEXDIRECTIONVALUE_OFFSET))(this, index);
		}

		::System::Void RegistNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_REGISTNOTIFY_OFFSET))(this);
		}

		::System::Void AfterMousePosSetHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_AFTERMOUSEPOSSETHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnPhotoQuestTipsUpdateHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONPHOTOQUESTTIPSUPDATEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnWheelShortCutChangeHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONWHEELSHORTCUTCHANGEHANDLE_OFFSET))(this, args);
		}

		::System::Void OnNotify(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_ONNOTIFY_OFFSET))(this, count);
		}

		::System::Void UnRegistNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_UNREGISTNOTIFY_OFFSET))(this);
		}

		::System::Void TryRefreshNotify(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER_TRYREFRESHNOTIFY_OFFSET))(this, index);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeIn(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_PLAYFADEIN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYROULETTWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
