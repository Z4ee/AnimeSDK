#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_D7003CCDED916330;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class FreeStyleController; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_FREESTYLECOMPONENT_CREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0xB68F560)
#define RPG_GAMECORE_FREESTYLECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB690500)
#define RPG_GAMECORE_FREESTYLECOMPONENT_FINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xB68F410)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GETCONTROLLER_OFFSET UNITYSDK_OFFSET(0xB68F660)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xB690B50)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xB690DD0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_CURRENTPLAYINGMOTIONID_OFFSET UNITYSDK_OFFSET(0xB68F2E0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB690B60)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xB68F170)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xB68F0F0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB690DE0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB68F280)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_RUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0xB68F360)
#define RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENTASSETS_OFFSET UNITYSDK_OFFSET(0xB68F1F0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6588D0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ISOUTFREESTYLESTATE_OFFSET UNITYSDK_OFFSET(0xB690370)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ISTRANSITIONOUTFREESTYLESTATE_OFFSET UNITYSDK_OFFSET(0xB690260)
#define RPG_GAMECORE_FREESTYLECOMPONENT_JUMPTOLOOP_OFFSET UNITYSDK_OFFSET(0xB6904A0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB690AD0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xB690B70)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMSTATEPLAY_OFFSET UNITYSDK_OFFSET(0xB690C30)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONFREESTYLEPLAY_OFFSET UNITYSDK_OFFSET(0xB690CD0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB6907C0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB690940)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xB68FCE0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTIONINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xB68FE20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTION_OFFSET UNITYSDK_OFFSET(0xB68FD80)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATE_OFFSET UNITYSDK_OFFSET(0xB68FC40)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEFORAVATAR_OFFSET UNITYSDK_OFFSET(0xB68FA20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTIONGRAPH_OFFSET UNITYSDK_OFFSET(0xB68FED0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTION_OFFSET UNITYSDK_OFFSET(0xB68FB20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEONEXTENDLAYER_OFFSET UNITYSDK_OFFSET(0xB68E730)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0xB68F7E0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYINITFREESTYLE_OFFSET UNITYSDK_OFFSET(0xB68FF60)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYMOCAP_OFFSET UNITYSDK_OFFSET(0xB690000)
#define RPG_GAMECORE_FREESTYLECOMPONENT_RECOVERRUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0xB68F6A0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xB690DF0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SETCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB68F730)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SETUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0xB68EFD0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xB68F190)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xB68F110)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_1_OFFSET UNITYSDK_OFFSET(0xB68E940)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_2_OFFSET UNITYSDK_OFFSET(0xB68ED40)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_3_OFFSET UNITYSDK_OFFSET(0xB68EE00)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_OFFSET UNITYSDK_OFFSET(0xB68E890)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_1_OFFSET UNITYSDK_OFFSET(0xB6901E0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_OFFSET UNITYSDK_OFFSET(0xB6900D0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xB6909F0)
#define RPG_GAMECORE_FREESTYLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB68EEE0)
#define RPG_GAMECORE_FREESTYLECOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB68EF70)
#define RPG_GAMECORE_FREESTYLECOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB690F60)
#define RPG_GAMECORE_FREESTYLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB690F50)
#define RPG_GAMECORE_FREESTYLECOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB690ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleComponent_TypeDefinitionIndex = 52781;

	class FreeStyleComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MockAnimator* _Animator; // 0x18
		::Struct_2_2B16FFFF87B43037 _RootMotionHandle; // 0x20
		::Class_1_D7003CCDED916330* _FreeStyleInstance; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EFreeStyleControlMode, ::RPG::GameCore::FreeStyleController*>* _FreeStyleControllerMap; // 0x38
		::RPG::GameCore::FreeStyleController* _CurrentController; // 0x40
		::RPG::GameCore::TaskContext* _EventContext; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void PlayFreeStyleOnExtendLayer(::System::String* layerName, ::System::UInt32 motionID, ::RPG::GameCore::FreeStyleMotionInfoConfig* motionInfoConfig, ::System::Nullable_1<::Struct_2_648594091F1A68D6> motionStartInfo, ::System::Boolean disableAnimEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEONEXTENDLAYER_OFFSET))(this, layerName, motionID, motionInfoConfig, motionStartInfo, disableAnimEvent);
		}

		::System::Void StopFreeStyleOnExtendLayer(::System::Boolean bCrossFadeToIdle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_OFFSET))(this, bCrossFadeToIdle);
		}

		::System::Void StopFreeStyleOnExtendLayer_1(::System::Boolean bCrossFadeToIdle, ::Struct_2_D3B84DD3734B83D6 transitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_1_OFFSET))(this, bCrossFadeToIdle, transitionTime);
		}

		::System::Void StopFreeStyleOnExtendLayer_2(::System::String* layerName, ::System::Boolean bCrossFadeToIdle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_2_OFFSET))(this, layerName, bCrossFadeToIdle);
		}

		::System::Void StopFreeStyleOnExtendLayer_3(::System::String* layerName, ::System::Boolean bCrossFadeToIdle, ::Struct_2_D3B84DD3734B83D6 transitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_3_OFFSET))(this, layerName, bCrossFadeToIdle, transitionTime);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void SetupCharacterID(::System::String* freeStyleCharacterID, ::System::String* freeStyleCharacterConfigPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SETUPCHARACTERID_OFFSET))(this, freeStyleCharacterID, freeStyleCharacterConfigPath);
		}

		::System::Void InitComponent(::System::String* freeStyleCharacterID, ::System::String* freeStyleCharacterConfigPath, ::RPG::Client::MockAnimator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENT_OFFSET))(this, freeStyleCharacterID, freeStyleCharacterConfigPath, animator);
		}

		::System::Void InitComponentAssets(::System::UInt32 npcDefDefaultIdleFreeStyleMotionID, ::System::Action* onloadFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENTASSETS_OFFSET))(this, npcDefDefaultIdleFreeStyleMotionID, onloadFinish);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ISPLAYING_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPlayingMotionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_CURRENTPLAYINGMOTIONID_OFFSET))(this);
		}

		::Struct_2_127EAB4936C75FCC get_RuntimeInfo()
		{
			return ((::Struct_2_127EAB4936C75FCC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_RUNTIMEINFO_OFFSET))(this);
		}

		::RPG::GameCore::FreeStyleController* FindController(::RPG::GameCore::EFreeStyleControlMode mode, ::System::Boolean required)
		{
			return ((::RPG::GameCore::FreeStyleController*(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_FINDCONTROLLER_OFFSET))(this, mode, required);
		}

		::RPG::GameCore::FreeStyleController* GetController()
		{
			return ((::RPG::GameCore::FreeStyleController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GETCONTROLLER_OFFSET))(this);
		}

		::System::Void RecoverRuntimeInfo(::Struct_2_127EAB4936C75FCC runtimeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_127EAB4936C75FCC))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_RECOVERRUNTIMEINFO_OFFSET))(this, runtimeInfo);
		}

		::System::Void PlayFreeStyle(::System::UInt32 motionID, ::RPG::GameCore::FreeStyleMotionInfoConfig* motionInfoConfig, ::System::Nullable_1<::Struct_2_648594091F1A68D6> motionStartInfo, ::System::Boolean disableAnimEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLE_OFFSET))(this, motionID, motionInfoConfig, motionStartInfo, disableAnimEvent);
		}

		::System::Void PlayFreeStyleForAvatar(::System::UInt32 avatarID, ::System::UInt32 motionID, ::RPG::GameCore::FreeStyleMotionInfoConfig* motionInfoConfig, ::System::Nullable_1<::Struct_2_648594091F1A68D6> motionStartInfo, ::System::Boolean disableAnimEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEFORAVATAR_OFFSET))(this, avatarID, motionID, motionInfoConfig, motionStartInfo, disableAnimEvent);
		}

		::System::Void PlayFreeStyleInteraction(::System::UInt32 motionID, ::RPG::GameCore::FreeStyleMotionInfoConfig* motionInfoConfig, ::System::Nullable_1<::Struct_2_648594091F1A68D6> motionStartInfo, ::System::Boolean disableAnimEvent, ::System::Nullable_1<::System::Single> overrideStartMotionExitNormalizedTime, ::System::Boolean fastMoveState)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTION_OFFSET))(this, motionID, motionInfoConfig, motionStartInfo, disableAnimEvent, overrideStartMotionExitNormalizedTime, fastMoveState);
		}

		::System::Void PlayAnimState(::System::Int32 stateNameHash, ::System::Single normalizedTransitionTime, ::System::Single normalizedStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATE_OFFSET))(this, stateNameHash, normalizedTransitionTime, normalizedStartTime);
		}

		::System::Void PlayAnimStateInFixedTime(::System::Int32 stateNameHash, ::System::Single normalizedTransitionTime, ::System::Single normalizedStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINFIXEDTIME_OFFSET))(this, stateNameHash, normalizedTransitionTime, normalizedStartTime);
		}

		::System::Void PlayAnimStateInteraction(::System::Int32 animStateHash, ::System::Single normalizedTransitionTime, ::System::Single normalizedStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTION_OFFSET))(this, animStateHash, normalizedTransitionTime, normalizedStartTime);
		}

		::System::Void PlayAnimStateInteractionInFixedTime(::System::Int32 animStateHash, ::System::Single transitionTime, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTIONINFIXEDTIME_OFFSET))(this, animStateHash, transitionTime, startTime);
		}

		::System::Void PlayFreeStyleInteractionGraph(::System::String* graphName, ::Struct_2_D3B84DD3734B83D6 transitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTIONGRAPH_OFFSET))(this, graphName, transitionTime);
		}

		::System::Void PlayInitFreeStyle(::System::UInt32 motionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYINITFREESTYLE_OFFSET))(this, motionID);
		}

		::System::Void PlayMocap(::UnityEngine::AnimationClip* animClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYMOCAP_OFFSET))(this, animClip);
		}

		::System::Void StopFreeStyle(::System::Boolean bCrossFadeToIdle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_OFFSET))(this, bCrossFadeToIdle);
		}

		::System::Void StopFreeStyle_1(::System::Boolean bCrossFadeToIdle, ::Struct_2_D3B84DD3734B83D6 transitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_1_OFFSET))(this, bCrossFadeToIdle, transitionTime);
		}

		::System::Boolean IsTransitionOutFreeStyleState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ISTRANSITIONOUTFREESTYLESTATE_OFFSET))(this);
		}

		::System::Boolean IsOutFreeStyleState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ISOUTFREESTYLESTATE_OFFSET))(this);
		}

		::System::Void JumpToLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_JUMPTOLOOP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMATORMOVE_OFFSET))(this, animator);
		}

		::System::Void OnAnimStatePlay(::System::Int32 stateHash, ::Struct_2_D3B84DD3734B83D6 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMSTATEPLAY_OFFSET))(this, stateHash, time);
		}

		::System::Void OnFreeStylePlay(::System::UInt32 motionID, ::Struct_2_D3B84DD3734B83D6 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONFREESTYLEPLAY_OFFSET))(this, motionID, time);
		}

		::System::Void SetControlMode(::RPG::GameCore::EFreeStyleControlMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SETCONTROLMODE_OFFSET))(this, mode);
		}

		::RPG::GameCore::FreeStyleController* CreateController(::RPG::GameCore::EFreeStyleControlMode mode)
		{
			return ((::RPG::GameCore::FreeStyleController*(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_CREATECONTROLLER_OFFSET))(this, mode);
		}

		::RPG::Client::MockAnimator* get_AnimatorRef()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::String* get_FreeStyleCharacterID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERID_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERID_OFFSET))(this, value);
		}

		::System::String* get_FreeStyleCharacterConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterConfigPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this, value);
		}

		::Class_1_D7003CCDED916330* get_FreeStyleInstance()
		{
			return ((::Class_1_D7003CCDED916330*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLEINSTANCE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
