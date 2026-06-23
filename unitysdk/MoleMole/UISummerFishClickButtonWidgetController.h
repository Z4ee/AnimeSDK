#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISummerFishClickButtonWidgetController_EButtonState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

class Class_2_60638234271CCDB8_75;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_CHANGETOSTATE_OFFSET UNITYSDK_OFFSET(0x16DE9430)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_CLICKQTEFF_OFFSET UNITYSDK_OFFSET(0x16DE9E30)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x16DE8F90)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_GET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x16DE8C10)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_HIDETIPS_OFFSET UNITYSDK_OFFSET(0x16DE9B00)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16DE9170)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONDOWNCALL_OFFSET UNITYSDK_OFFSET(0x16DE8FF0)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16DE9200)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16DE8C20)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONUPCALL_OFFSET UNITYSDK_OFFSET(0x16DE90B0)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16DE9620)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_SETLONGEFFECTONPRESS_OFFSET UNITYSDK_OFFSET(0x16DE9EA0)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x16DE9A60)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0x16DE9D80)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEQTECIRCLE_OFFSET UNITYSDK_OFFSET(0x16DE9BA0)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER__CHANGETOSTATE_B__20_0_OFFSET UNITYSDK_OFFSET(0x16DEA180)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEA120)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16DEA190)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16DEA220)
#define MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16DEA2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_TypeDefinitionIndex = 73821;

	class UISummerFishClickButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_75* _view; // 0x2C0
		::System::String* _currentMatName; // 0x2C8
		::MoleMole::UISummerFishClickButtonWidgetController_EButtonState _buttonState; // 0x2D0
		::System::Single originDuration; // 0x2D4
		::UnityEngine::ParticleSystem_MinMaxCurve originLifeTime; // 0x2D8
		::System::Action* OnDown; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UISummerFishClickButtonWidgetController_EButtonState get_ButtonState()
		{
			return ((::MoleMole::UISummerFishClickButtonWidgetController_EButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_GET_BUTTONSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDownCall(::UnityEngine::EventSystems::PointerEventData* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONDOWNCALL_OFFSET))(this, arg0);
		}

		::System::Void OnUpCall(::UnityEngine::EventSystems::PointerEventData* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONUPCALL_OFFSET))(this, arg0);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* GetButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void ChangeToState(::MoleMole::UISummerFishClickButtonWidgetController_EButtonState buttonState, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerFishClickButtonWidgetController_EButtonState, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_CHANGETOSTATE_OFFSET))(this, buttonState, force);
		}

		::System::Void ShowTips(::System::String* tip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_SHOWTIPS_OFFSET))(this, tip);
		}

		::System::Void HideTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_HIDETIPS_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void UpdateQTECircle(::System::Single progress, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEQTECIRCLE_OFFSET))(this, progress, active);
		}

		::System::Void ClickQTEff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_CLICKQTEFF_OFFSET))(this);
		}

		::System::Void UpdateBattleProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEBATTLEPROGRESS_OFFSET))(this, progress);
		}

		::System::Void SetLongEffectOnPress(::System::Boolean press)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER_SETLONGEFFECTONPRESS_OFFSET))(this, press);
		}

		::System::Void _ChangeToState_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER__CHANGETOSTATE_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
