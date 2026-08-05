#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/Job/LookAtJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimationGraphScriptBase.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"
#include "unitysdk/UnityEngine/Playables/PlayState.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0xE9449F0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_DISABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0xE9456A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_ENABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0xE944CC0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0xE944C50)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE944C00)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_GETMAINANIMCLIPSTATUES_OFFSET UNITYSDK_OFFSET(0xE943DA0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_GETMAINANIMCLIPTIME_OFFSET UNITYSDK_OFFSET(0xE943E40)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_INIT_OFFSET UNITYSDK_OFFSET(0xE944720)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_PLAY_OFFSET UNITYSDK_OFFSET(0xE943780)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0xE9421E0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETBLENDANIMATION_OFFSET UNITYSDK_OFFSET(0xE943F80)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETBLENDCLIPSPEED_OFFSET UNITYSDK_OFFSET(0xE9444B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0xE944A90)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xE945780)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0xE945700)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMATIONMANUALLY_OFFSET UNITYSDK_OFFSET(0xE943A80)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMCLIPSPEED_OFFSET UNITYSDK_OFFSET(0xE943C50)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMCLIPTIME_OFFSET UNITYSDK_OFFSET(0xE943930)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMCLIP_OFFSET UNITYSDK_OFFSET(0xE9434C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINCLIPSPEED_OFFSET UNITYSDK_OFFSET(0xE9437E0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_STOPBLENDANIMATION1_OFFSET UNITYSDK_OFFSET(0xE9446A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE944980)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE945810)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE945800)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0xE945850)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphScript_OneState_TypeDefinitionIndex = 48105;

	class NPCCPUAnimationGraphScript_OneState : public ::NPCCrowd::Animation::NPCCPUAnimationGraphScriptBase
	{
	public:
		static ::System::String** StaticGet__npcCpuAnimationGraphScriptFName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphScript_OneState_TypeDefinitionIndex)->GetStaticField(0x3ACE0);
		}
		::UnityEngine::AvatarMask* _blendAvatarMask1; // 0x40
		::UnityEngine::AvatarMask* _blendAvatarMask2; // 0x48
		::UnityEngine::AnimationClip* _blendClip1; // 0x50
		::UnityEngine::AnimationClip* _blendClip2; // 0x58
		::UnityEngine::AnimationClip* _mainClip; // 0x60
		::UnityEngine::Animations::AnimationLayerMixerPlayable _mixerPlayable; // 0x68
		::System::Boolean _isUsingBlendClip2; // 0x78
		::System::Boolean _isUsingBlendClip1; // 0x79
		::System::Boolean _bIsEnableLookAtIK; // 0x7A
		::UnityEngine::Animations::AnimationScriptPlayable _lookAtPlayable; // 0x80
		::NPCCrowd::Animation::Job::LookAtJob _lookAtJob; // 0x90
		::UnityEngine::Animations::AnimationClipPlayable _mainClipPlayable; // 0x160
		::UnityEngine::Animations::AnimationClipPlayable _blendClip2Playable; // 0x170
		::UnityEngine::Animations::AnimationClipPlayable _blendClip1Playable; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE__CCTOR_OFFSET))();
		}

		::System::Void RebuildGraph(::System::Boolean keepState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_REBUILDGRAPH_OFFSET))(this, keepState);
		}

		::System::Void SetMainAnimClip(::UnityEngine::AnimationClip* inMainClip, ::System::Single time, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMCLIP_OFFSET))(this, inMainClip, time, speed);
		}

		::System::Void SetMainAnimClipTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMCLIPTIME_OFFSET))(this, time);
		}

		::System::Void SetMainAnimationManually(::UnityEngine::AnimationClip* animationClip, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMATIONMANUALLY_OFFSET))(this, animationClip, time);
		}

		::System::Void SetMainAnimClipSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINANIMCLIPSPEED_OFFSET))(this, speed);
		}

		::UnityEngine::Playables::PlayState GetMainAnimClipStatues()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_GETMAINANIMCLIPSTATUES_OFFSET))(this);
		}

		::System::Single GetMainAnimClipTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_GETMAINANIMCLIPTIME_OFFSET))(this);
		}

		::System::Void SetBlendAnimation(::UnityEngine::AnimationClip* inBlendClip, ::UnityEngine::AvatarMask* inBlendAvatarMask, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::AvatarMask*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETBLENDANIMATION_OFFSET))(this, inBlendClip, inBlendAvatarMask, index);
		}

		::System::Void StopBlendAnimation1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_STOPBLENDANIMATION1_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Animator* inAnimator, ::UnityEngine::Playables::DirectorUpdateMode inUpdateMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_INIT_OFFSET))(this, inAnimator, inUpdateMode);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_PLAY_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_DESTROY_OFFSET))(this);
		}

		::System::Void SetMainClipSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETMAINCLIPSPEED_OFFSET))(this, speed);
		}

		::System::Void SetBlendClipSpeed(::System::Single speed, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETBLENDCLIPSPEED_OFFSET))(this, speed, index);
		}

		::System::Void SetBlendWeight(::System::Single weight, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETBLENDWEIGHT_OFFSET))(this, weight, index);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_EVALUATE_OFFSET))(this);
		}

		::System::Void Evaluate_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_EVALUATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void EnableLookAtIK(::Il2CppArray<::UnityEngine::Transform*>* spineJoints, ::UnityEngine::Transform* headJoint, ::Il2CppArray<::UnityEngine::Transform*>* eyeJoints, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 headAxis, ::UnityEngine::Vector3 eyeAxis, ::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight, ::System::Single clampWeight, ::System::Single clampWeightHead, ::System::Single clampWeightEyes, ::System::Int32 clampSmoothing, ::UnityEngine::AnimationCurve* spineWeightCurve)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_ENABLELOOKATIK_OFFSET))(this, spineJoints, headJoint, eyeJoints, spineAxis, headAxis, eyeAxis, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes, clampSmoothing, spineWeightCurve);
		}

		::System::Void DisableLookAtIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_DISABLELOOKATIK_OFFSET))(this);
		}

		::System::Void SetLookAtWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETLOOKATWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtTarget(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE_SETLOOKATTARGET_OFFSET))(this, pos);
		}

		::System::Void __base_Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_ONESTATE___BASE_DESTROY_OFFSET))(this);
		}
	};
}
