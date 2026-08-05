#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_COMPUTEDAMPEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x7C0980)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_COMPUTEJOINTLOCALROTATIONS_OFFSET UNITYSDK_OFFSET(0x7C09C0)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTLOCALPOS_OFFSET UNITYSDK_OFFSET(0x7C0810)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x7C0830)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTLOC_OFFSET UNITYSDK_OFFSET(0x7C07D0)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTROT_OFFSET UNITYSDK_OFFSET(0x7C07F0)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTWORLDPOS_OFFSET UNITYSDK_OFFSET(0x7C0850)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x7C0870)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_INIT_OFFSET UNITYSDK_OFFSET(0x7C0890)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x7C0940)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x7C0900)
#define NPCCROWD_ANIMATION_JOB_DAMPINGJOB_SETROOTLOCANDROT_OFFSET UNITYSDK_OFFSET(0x7C0760)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int DampingJob_TypeDefinitionIndex = 44602;

	struct alignas(8) DampingJob
	{
		// static const ::System::Int32 ROOT_PARAM_LEN = 0xE; // 0x0
		::UnityEngine::Animations::TransformStreamHandle rootHandle; // 0x10
		::Unity::Collections::NativeArray_1<::System::Single> rootParams; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> jointHandles; // 0x30
		::System::Boolean bIsLocalDamping; // 0x40
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> localPositions; // 0x48
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> localRotations; // 0x58
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions; // 0x68
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> velocities; // 0x78
		::Unity::Collections::NativeArray_1<::System::Single> smooths; // 0x88

		::System::Void SetRootLocAndRot(::UnityEngine::Vector3 loc, ::UnityEngine::Quaternion rot, ::UnityEngine::Vector3 worldLoc, ::UnityEngine::Quaternion worldRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_SETROOTLOCANDROT_OFFSET))(this, loc, rot, worldLoc, worldRot);
		}

		::UnityEngine::Vector3 GetRootLoc()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTLOC_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRootRot()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTROT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRootLocalPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTLOCALPOS_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRootLocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTLOCALROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRootWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTWORLDPOS_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRootWorldRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_GETROOTWORLDROTATION_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Vector3 loc, ::UnityEngine::Quaternion rot, ::UnityEngine::Vector3 worldloc, ::UnityEngine::Quaternion worldrot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_INIT_OFFSET))(this, loc, rot, worldloc, worldrot);
		}

		/*
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ComputeDampedPositions(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_COMPUTEDAMPEDPOSITIONS_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ComputeJointLocalRotations(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_DAMPINGJOB_COMPUTEJOINTLOCALROTATIONS_OFFSET))(this, stream);
		}
		*/
	};
}
