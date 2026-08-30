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

#define RPG_GAMECORE_FREESTYLECOMPONENT_CREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1158D2A0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1158E5D0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_FINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1158D160)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1158D3A0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GETCURRENTPLAYINGMOTIONIDONEXTENDLAYER_OFFSET UNITYSDK_OFFSET(0x1158C0A0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x1158EDD0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x1158F050)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_CURRENTPLAYINGMOTIONID_OFFSET UNITYSDK_OFFSET(0x1158CF60)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1158EDE0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1158CE10)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1158CD90)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1158F060)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1158CE90)
#define RPG_GAMECORE_FREESTYLECOMPONENT_GET_RUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1158CFE0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENTASSETS_OFFSET UNITYSDK_OFFSET(0x11532380)
#define RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1152EAA0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ISOUTFREESTYLESTATE_OFFSET UNITYSDK_OFFSET(0x1158E3E0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ISTRANSITIONOUTFREESTYLESTATE_OFFSET UNITYSDK_OFFSET(0x1158E2D0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_JUMPTOLOOP_OFFSET UNITYSDK_OFFSET(0x1158E510)
#define RPG_GAMECORE_FREESTYLECOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1158ECF0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1158EDF0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMSTATEPLAY_OFFSET UNITYSDK_OFFSET(0x1158EEB0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONFREESTYLEPLAY_OFFSET UNITYSDK_OFFSET(0x1158EF50)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1158E970)
#define RPG_GAMECORE_FREESTYLECOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1158EAE0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x1158DC20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTIONINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x1158DE20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1158DD20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1158DB20)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEFORAVATAR_OFFSET UNITYSDK_OFFSET(0x1158D900)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTIONGRAPH_OFFSET UNITYSDK_OFFSET(0x1158DED0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1158DA00)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEONEXTENDLAYER_OFFSET UNITYSDK_OFFSET(0x1158C230)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0x1158D6C0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYINITFREESTYLE_OFFSET UNITYSDK_OFFSET(0x1158DF60)
#define RPG_GAMECORE_FREESTYLECOMPONENT_PLAYMOCAP_OFFSET UNITYSDK_OFFSET(0x1158E000)
#define RPG_GAMECORE_FREESTYLECOMPONENT_RECOVERRUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1158D3E0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1158F070)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SEEKSTATICFRAME_OFFSET UNITYSDK_OFFSET(0x1158E260)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SETCONTROLMODE_OFFSET UNITYSDK_OFFSET(0x1158D4D0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SETEXTENDLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0x1158C170)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SETUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1158CC70)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1158CE30)
#define RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1158CDB0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_1_OFFSET UNITYSDK_OFFSET(0x1158C420)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_2_OFFSET UNITYSDK_OFFSET(0x1158C990)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_3_OFFSET UNITYSDK_OFFSET(0x1158CA50)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_OFFSET UNITYSDK_OFFSET(0x1158C370)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_1_OFFSET UNITYSDK_OFFSET(0x1158E180)
#define RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_OFFSET UNITYSDK_OFFSET(0x1158E0D0)
#define RPG_GAMECORE_FREESTYLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x1158EB90)
#define RPG_GAMECORE_FREESTYLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1158CB10)
#define RPG_GAMECORE_FREESTYLECOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1158CBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleComponent_TypeDefinitionIndex = 57424;

	class FreeStyleComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::FreeStyleController* _CurrentController; // 0x18
		::Class_1_D7003CCDED916330* _FreeStyleInstance; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EFreeStyleControlMode, ::RPG::GameCore::FreeStyleController*>* _FreeStyleControllerMap; // 0x28
		::RPG::Client::MockAnimator* _Animator; // 0x30
		::RPG::GameCore::TaskContext* _EventContext; // 0x38
		::Struct_2_2B16FFFF87B43037 _RootMotionHandle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetCurrentPlayingMotionIDOnExtendLayer(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GETCURRENTPLAYINGMOTIONIDONEXTENDLAYER_OFFSET))(this, a1);
		}

		::System::Void SetExtendLayerWeight(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SETEXTENDLAYERWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayFreeStyleOnExtendLayer(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::FreeStyleMotionInfoConfig* a3, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEONEXTENDLAYER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StopFreeStyleOnExtendLayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_OFFSET))(this, a1);
		}

		::System::Void StopFreeStyleOnExtendLayer_1(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_1_OFFSET))(this, a1, a2);
		}

		::System::Void StopFreeStyleOnExtendLayer_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_2_OFFSET))(this, a1, a2);
		}

		::System::Void StopFreeStyleOnExtendLayer_3(::System::String* a1, ::System::Boolean a2, ::Struct_2_D3B84DD3734B83D6 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLEONEXTENDLAYER_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void SetupCharacterID(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SETUPCHARACTERID_OFFSET))(this, a1, a2);
		}

		::System::Void InitComponent(::System::String* a1, ::System::String* a2, ::RPG::Client::MockAnimator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitComponentAssets(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_INITCOMPONENTASSETS_OFFSET))(this, a1, a2);
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

		::RPG::GameCore::FreeStyleController* FindController(::RPG::GameCore::EFreeStyleControlMode a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::FreeStyleController*(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_FINDCONTROLLER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FreeStyleController* GetController()
		{
			return ((::RPG::GameCore::FreeStyleController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GETCONTROLLER_OFFSET))(this);
		}

		::System::Void RecoverRuntimeInfo(::Struct_2_127EAB4936C75FCC a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_127EAB4936C75FCC))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_RECOVERRUNTIMEINFO_OFFSET))(this, a1);
		}

		::System::Void PlayFreeStyle(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayFreeStyleForAvatar(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::FreeStyleMotionInfoConfig* a3, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEFORAVATAR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayFreeStyleInteraction(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4, ::System::Nullable_1<::System::Single> a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayAnimState(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayAnimStateInFixedTime(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINFIXEDTIME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayAnimStateInteraction(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayAnimStateInteractionInFixedTime(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYANIMSTATEINTERACTIONINFIXEDTIME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayFreeStyleInteractionGraph(::System::String* a1, ::Struct_2_D3B84DD3734B83D6 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYFREESTYLEINTERACTIONGRAPH_OFFSET))(this, a1, a2);
		}

		::System::Void PlayInitFreeStyle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYINITFREESTYLE_OFFSET))(this, a1);
		}

		::System::Void PlayMocap(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_PLAYMOCAP_OFFSET))(this, a1);
		}

		::System::Void StopFreeStyle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_OFFSET))(this, a1);
		}

		::System::Void StopFreeStyle_1(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_STOPFREESTYLE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SeekStaticFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SEEKSTATICFRAME_OFFSET))(this, a1);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void OnAnimStatePlay(::System::Int32 a1, ::Struct_2_D3B84DD3734B83D6 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONANIMSTATEPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnFreeStylePlay(::System::UInt32 a1, ::Struct_2_D3B84DD3734B83D6 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_ONFREESTYLEPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetControlMode(::RPG::GameCore::EFreeStyleControlMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SETCONTROLMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FreeStyleController* CreateController(::RPG::GameCore::EFreeStyleControlMode a1)
		{
			return ((::RPG::GameCore::FreeStyleController*(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_CREATECONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::MockAnimator* get_AnimatorRef()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::String* get_FreeStyleCharacterID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERID_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERID_OFFSET))(this, a1);
		}

		::System::String* get_FreeStyleCharacterConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this, a1);
		}

		::Class_1_D7003CCDED916330* get_FreeStyleInstance()
		{
			return ((::Class_1_D7003CCDED916330*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_GET_FREESTYLEINSTANCE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
