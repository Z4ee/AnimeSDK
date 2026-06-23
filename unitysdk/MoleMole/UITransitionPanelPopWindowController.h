#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UITransitionPanelPopWindowController_TransitionState.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_52BF5A8E97668B1D_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x161987F0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITION_OFFSET UNITYSDK_OFFSET(0x16198610)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFORCETRANSITIONWITHCOLOR_OFFSET UNITYSDK_OFFSET(0x16198470)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x16197D40)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16197D30)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x161994B0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEOUT_OFFSET UNITYSDK_OFFSET(0x16199560)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x16199510)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16197FB0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONDISABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x161981C0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONENABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x16197E30)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x161980D0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16198040)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16197D50)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_1_OFFSET UNITYSDK_OFFSET(0x16199330)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_OFFSET UNITYSDK_OFFSET(0x16199220)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16198340)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_WITHALPHA_OFFSET UNITYSDK_OFFSET(0x16199190)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x161995C0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x161995E0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONDISABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x16199670)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONENABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x16199700)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16199790)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16199850)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16199860)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x161998F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController_TypeDefinitionIndex = 51415;

	class UITransitionPanelPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single DEF_FADE_TRANSIT_DURATION; // 0x0
		::System::Boolean notSetAudioPlayMix; // 0x318
		::Class_2_52BF5A8E97668B1D_5* _view; // 0x320
		::MoleMole::UITransitionPanelPopWindowController_TransitionState _curState; // 0x328
		::UnityEngine::Color _curtainBaseColor; // 0x32C
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x33C
		::MoleMole::UITransitionPanelPopWindowController_TransitionState _targetState; // 0x340
		::System::Action* _fadeEndCallback; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEnableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONENABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDisableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONDISABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void DoForceTransitionWithColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFORCETRANSITIONWITHCOLOR_OFFSET))(this, color);
		}

		::System::Void DoFadeTransition(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback, ::UnityEngine::AnimationCurve* curve, ::System::Boolean fromCurrentColor, ::System::Boolean isWhiteCurtain)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITION_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback, curve, fromCurrentColor, isWhiteCurtain);
		}

		static ::UnityEngine::Color WithAlpha(::UnityEngine::Color color, ::System::Single alpha)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_WITHALPHA_OFFSET))(color, alpha);
		}

		::System::Void DoFadeTransitionWithStartColor(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback, ::UnityEngine::AnimationCurve* curve, ::System::Boolean useCurrentColor, ::System::Nullable_1<::UnityEngine::Color> curtainColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHSTARTCOLOR_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback, curve, useCurrentColor, curtainColor);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RefreshImgInfo(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::UnityEngine::Color fromColor, ::UnityEngine::Color targetColor, ::System::Action* onFadeEndCallback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_OFFSET))(this, state, duration, curve, fromColor, targetColor, onFadeEndCallback);
		}

		::System::Void RefreshImgInfo_1(::System::Single timeSpan, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::UnityEngine::Color fromColor, ::UnityEngine::Color targetColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_1_OFFSET))(this, timeSpan, duration, curve, fromColor, targetColor);
		}

		::System::Boolean IsFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEIN_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEOUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnDisableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONDISABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void __base_OnEnableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONENABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
