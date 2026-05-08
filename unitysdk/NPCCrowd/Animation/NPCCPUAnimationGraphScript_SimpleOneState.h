#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/FAnimBoneIDPathKV.h"
#include "unitysdk/NPCCrowd/Animation/Job/DampingJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimationGraphScriptBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"
#include "unitysdk/UnityEngine/Playables/PlayState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_CREATEDAMPINGIKBUFFER_OFFSET UNITYSDK_OFFSET(0xCD4A5D0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0xCD49DD0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_DISABLEDAMPINGIK_OFFSET UNITYSDK_OFFSET(0xCD4A830)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_ENABLEDAMPINGIK_OFFSET UNITYSDK_OFFSET(0xCD4A030)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCD49FE0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_GETMAINANIMCLIPSTATUES_OFFSET UNITYSDK_OFFSET(0xCD49AD0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_GETMAINANIMCLIPTIME_OFFSET UNITYSDK_OFFSET(0xCD49990)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_INIT_OFFSET UNITYSDK_OFFSET(0xCD49B70)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_PLAY_OFFSET UNITYSDK_OFFSET(0xCD49500)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0xCD48EB0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_RELEASEDAMPINGIKBUFFER_OFFSET UNITYSDK_OFFSET(0xCD49E70)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETDAMPINGROOTTRANS_OFFSET UNITYSDK_OFFSET(0xCD4A890)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETMAINANIMCLIPTIME_OFFSET UNITYSDK_OFFSET(0xCD497C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETMAINANIMCLIP_OFFSET UNITYSDK_OFFSET(0xCD49250)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETMAINCLIPSPEED_OFFSET UNITYSDK_OFFSET(0xCD49560)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_STOPMAINANIMATION_OFFSET UNITYSDK_OFFSET(0xCD496B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD4AA70)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD4AA60)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0xCD4AAB0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphScript_SimpleOneState_TypeDefinitionIndex = 63445;

	class NPCCPUAnimationGraphScript_SimpleOneState : public ::NPCCrowd::Animation::NPCCPUAnimationGraphScriptBase
	{
	public:
		static ::System::String** StaticGet_NPCCPUAnimationGraphScriptFName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphScript_SimpleOneState_TypeDefinitionIndex)->GetStaticField(0x42510);
		}
		::UnityEngine::AnimationClip* clip; // 0x40
		::Unity::Collections::NativeArray_1<::System::Single> damping_smooths; // 0x48
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> damping_Positions; // 0x58
		::NPCCrowd::Animation::Job::DampingJob dampingJob; // 0x68
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> damping_Velocities; // 0xF0
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> damping_LocalRotations; // 0x100
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> damping_Handles; // 0x110
		::UnityEngine::Animations::AnimationClipPlayable mainClipPlayable; // 0x120
		::UnityEngine::Animations::AnimationScriptPlayable dampingPlayable; // 0x130
		::Unity::Collections::NativeArray_1<::System::Single> damping_rootParams; // 0x140
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> damping_LocalPositions; // 0x150
		::System::Boolean bIsEnableDampingIK; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE__CCTOR_OFFSET))();
		}

		::System::Void RebuildGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_REBUILDGRAPH_OFFSET))(this);
		}

		::System::Void SetMainAnimClip(::UnityEngine::AnimationClip* inMainClip, ::System::Single time, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETMAINANIMCLIP_OFFSET))(this, inMainClip, time, speed);
		}

		::System::Void StopMainAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_STOPMAINANIMATION_OFFSET))(this);
		}

		::System::Void SetMainAnimClipTime(::System::Single time, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETMAINANIMCLIPTIME_OFFSET))(this, time, speed);
		}

		::System::Single GetMainAnimClipTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_GETMAINANIMCLIPTIME_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayState GetMainAnimClipStatues()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_GETMAINANIMCLIPSTATUES_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Animator* inAnimator, ::UnityEngine::Playables::DirectorUpdateMode inUpdateMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_INIT_OFFSET))(this, inAnimator, inUpdateMode);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_PLAY_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_DESTROY_OFFSET))(this);
		}

		::System::Void SetMainClipSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETMAINCLIPSPEED_OFFSET))(this, speed);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_EVALUATE_OFFSET))(this);
		}

		::System::Void EnableDampingIK(::Il2CppArray<::UnityEngine::Transform*>* joints, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::FAnimBoneIDPathKV>* boneInfos, ::System::Boolean bInIsLocalDamping)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::FAnimBoneIDPathKV>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_ENABLEDAMPINGIK_OFFSET))(this, joints, boneInfos, bInIsLocalDamping);
		}

		::System::Void DisableDampingIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_DISABLEDAMPINGIK_OFFSET))(this);
		}

		::System::Void SetDampingRootTrans(::NPCCrowd::Ability::FTransformFragment& attachedLocalPRS, ::NPCCrowd::Ability::FTransformFragment& attachedWorldPRS)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_SETDAMPINGROOTTRANS_OFFSET))(this, attachedLocalPRS, attachedWorldPRS);
		}

		::System::Void CreateDampingIKBuffer(::System::Int32 numJoints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_CREATEDAMPINGIKBUFFER_OFFSET))(this, numJoints);
		}

		::System::Void ReleaseDampingIKBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE_RELEASEDAMPINGIKBUFFER_OFFSET))(this);
		}

		::System::Void __base_Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPT_SIMPLEONESTATE___BASE_DESTROY_OFFSET))(this);
		}
	};
}
