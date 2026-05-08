#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UITransitionPanelPopWindowController_TransitionState.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_52BF5A8E97668B1D_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADEINTRANSITIONINSTANT_OFFSET UNITYSDK_OFFSET(0x137AE3D0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADEOUTTRANSITIONINSTANT_OFFSET UNITYSDK_OFFSET(0x137AE1E0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHBLACKCOLOR_OFFSET UNITYSDK_OFFSET(0x137AF290)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x137AE7F0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHWHITECOLOR_OFFSET UNITYSDK_OFFSET(0x137AF360)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITION_OFFSET UNITYSDK_OFFSET(0x137AE760)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFORCETRANSITIONWITHCOLOR_OFFSET UNITYSDK_OFFSET(0x137AE5C0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x137ADAB0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x137ADAA0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x137AF410)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEOUT_OFFSET UNITYSDK_OFFSET(0x137AF4C0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x137AF470)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x137ADD20)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONDISABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x137ADF30)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONENABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x137ADBA0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x137ADE40)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x137ADDB0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x137ADAC0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_1_OFFSET UNITYSDK_OFFSET(0x137AF110)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_OFFSET UNITYSDK_OFFSET(0x137AF010)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x137AE0B0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x137AF530)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x137AF520)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x137AF560)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONDISABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x137AF5F0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONENABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x137AF680)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x137AF710)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x137AF7D0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x137AF7E0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x137AF870)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController_TypeDefinitionIndex = 70321;

	class UITransitionPanelPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Color* StaticGet_TRANSIT_WHITE()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UITransitionPanelPopWindowController_TypeDefinitionIndex)->GetStaticField(0xD130);
		}
		static ::UnityEngine::Color* StaticGet_TRANSIT_HALF()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UITransitionPanelPopWindowController_TypeDefinitionIndex)->GetStaticField(0xD140);
		}
		static ::UnityEngine::Color* StaticGet_TRANSIT_BLACK()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UITransitionPanelPopWindowController_TypeDefinitionIndex)->GetStaticField(0xD150);
		}
		// static const ::System::Single DEF_FADE_TRANSIT_DURATION; // 0x0
		::System::Boolean notSetAudioPlayMix; // 0x310
		::Class_2_52BF5A8E97668B1D_5* _view; // 0x318
		::MoleMole::UITransitionPanelPopWindowController_TransitionState _curState; // 0x320
		::UnityEngine::Color _curColor; // 0x324
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x334
		::MoleMole::UITransitionPanelPopWindowController_TransitionState _targetState; // 0x338
		::System::Action* _fadeEndCallback; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
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

		::System::Void DoFadeOutTransitionInstant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADEOUTTRANSITIONINSTANT_OFFSET))(this);
		}

		::System::Void DoFadeInTransitionInstant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADEINTRANSITIONINSTANT_OFFSET))(this);
		}

		::System::Void DoForceTransitionWithColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFORCETRANSITIONWITHCOLOR_OFFSET))(this, color);
		}

		::System::Void DoFadeTransition(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITION_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback);
		}

		::System::Void DoFadeTransitionWithStartColor(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback, ::UnityEngine::AnimationCurve* curve, ::System::Boolean useCurrentColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHSTARTCOLOR_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback, curve, useCurrentColor);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RefreshImgInfo(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::UnityEngine::Color fromColor, ::UnityEngine::Color targetColor, ::System::Action* onFadeEndCallback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_OFFSET))(this, state, duration, curve, fromColor, targetColor, onFadeEndCallback);
		}

		::System::Void RefreshImgInfo_1(::System::Single timeSpan, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::UnityEngine::Color fromColor, ::UnityEngine::Color targetColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_REFRESHIMGINFO_1_OFFSET))(this, timeSpan, duration, curve, fromColor, targetColor);
		}

		::System::Void DoFadeTransitionWithBlackColor(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback, ::UnityEngine::AnimationCurve* curve, ::System::Boolean fromCurrentColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHBLACKCOLOR_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback, curve, fromCurrentColor);
		}

		::System::Void DoFadeTransitionWithWhiteColor(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback, ::UnityEngine::AnimationCurve* curve, ::System::Boolean fromCurrentColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITIONWITHWHITECOLOR_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback, curve, fromCurrentColor);
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
