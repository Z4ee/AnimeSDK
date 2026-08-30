#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingPreFillSource.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_GETICONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19EDEE80)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_GET_ISANIMATING_OFFSET UNITYSDK_OFFSET(0x19EE1080)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_PLAYHINTANIMATION_OFFSET UNITYSDK_OFFSET(0x19EDF600)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_PLAYVALUEANIMATION_OFFSET UNITYSDK_OFFSET(0x19EDF460)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19ED7BA0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EE9930)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE9D90)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__ENSUREBARMAX_OFFSET UNITYSDK_OFFSET(0x19EE8F80)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19EE9AD0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EE8C00)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETCURRENTVALUENORMALIZED_OFFSET UNITYSDK_OFFSET(0x19EE9840)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x19EE92C0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETFINISHED_OFFSET UNITYSDK_OFFSET(0x19EE97C0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETPREFILL_OFFSET UNITYSDK_OFFSET(0x19EE9340)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETSTATTYPE_OFFSET UNITYSDK_OFFSET(0x19EE9100)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETTARGET_OFFSET UNITYSDK_OFFSET(0x19EE9620)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETUPPREGLOW_OFFSET UNITYSDK_OFFSET(0x19EE9B40)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x19EE90B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatItemControl_TypeDefinitionIndex = 80489;

	class B51RacingCarStatItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _STATE_VALUE_PREFIX; // 0x0
		// static const ::System::String* _STATE_BONUS; // 0x0
		// static const ::System::String* _STATE_DRIVER_BOUNS; // 0x0
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_HINT; // 0x0
		// static const ::System::String* _STATE_FINISH; // 0x0
		// static const ::System::String* _STATE_PREFILL_DRIVER; // 0x0
		// static const ::System::String* _STATE_TARGET_ON; // 0x0
		// static const ::System::String* _STATE_TARGET_OFF; // 0x0
		::UnityEngine::UI::Slider* _MainSlider; // 0x38
		::UnityEngine::UI::SmoothMask* _PreFillMask; // 0x40
		::UnityEngine::UI::SmoothMask* _PreFillHintMask; // 0x48
		::UnityEngine::UI::Slider* _TargetSlider; // 0x50
		::RPG::Client::LocalizedText* _NameText; // 0x58
		::RPG::Client::LocalizedText* _NormalStateCurrentNumText; // 0x60
		::RPG::Client::LocalizedText* _NormalStateTargetNumText; // 0x68
		::RPG::Client::LocalizedText* _DriverStateCurrentNumText; // 0x70
		::RPG::Client::LocalizedText* _DriverStateBonusNumText; // 0x78
		::UnityEngine::Transform* _IconNode; // 0x80
		::UnityEngine::Animation* _HintAnimation; // 0x88
		::RPG::Client::UIStateCtrl* _StatTypeStateCtrl; // 0x90
		::RPG::Client::UIStateCtrl* _ValueStateCtrl; // 0x98
		::RPG::Client::UIStateCtrl* _PreFillStateCtrl; // 0xA0
		::RPG::Client::UIStateCtrl* _TargetStateCtrl; // 0xA8
		::RPG::Client::UIStateCtrl* _NumStateCtrl; // 0xB0
		::RPG::Client::UIStateCtrl* _DriverNumPanelStateCtrl; // 0xB8
		::RPG::Client::UIStateCtrl* _PreGlowCtrl; // 0xC0
		::UnityEngine::RectTransform* _PreGlowRect; // 0xC8
		::System::Single _BarMax; // 0xD0
		::RPG::GameCore::B51RacingStatType _LastStatType; // 0xD4
		::System::Boolean _IsAnimating; // 0xD8
		::System::Single _AnimFromValue; // 0xDC
		::System::Single _AnimToValue; // 0xE0
		::System::Single _AnimDuration; // 0xE4
		::System::Single _AnimElapsed; // 0xE8
		::System::Single _AnimTargetThreshold; // 0xEC
		::System::Boolean _AnimFinishedTriggered; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void PlayValueAnimation(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_PLAYVALUEANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayHintAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_PLAYHINTANIMATION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetIconTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_GETICONTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_IsAnimating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_GET_ISANIMATING_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _EnsureBarMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__ENSUREBARMAX_OFFSET))(this);
		}

		::System::Void _SetStatType(::RPG::GameCore::B51RacingStatType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETSTATTYPE_OFFSET))(this, a1);
		}

		::System::Void _SetCurrentValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETCURRENTVALUE_OFFSET))(this, a1);
		}

		::System::Void _SetCurrentValueNormalized(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETCURRENTVALUENORMALIZED_OFFSET))(this, a1);
		}

		::System::Void _SetPreFill(::System::Single a1, ::System::Single a2, ::RPG::Client::B51Racing::B51RacingPreFillSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::B51Racing::B51RacingPreFillSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETPREFILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetTarget(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void _SetFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETFINISHED_OFFSET))(this, a1);
		}

		::System::Void _StopAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__STOPANIMATION_OFFSET))(this);
		}

		::System::Void _SetUpPreGlow(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATITEMCONTROL__SETUPPREGLOW_OFFSET))(this, a1, a2);
		}
	};
}
