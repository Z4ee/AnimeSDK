#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x626B50)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_GETFORWARDS_OFFSET UNITYSDK_OFFSET(0xE8C1FC0)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_INITJOINTS_OFFSET UNITYSDK_OFFSET(0x626BB0)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_INITPARAMBUFFER_OFFSET UNITYSDK_OFFSET(0x626B60)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_LOOKATDIRECTION_OFFSET UNITYSDK_OFFSET(0xE8C24C0)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x626CB0)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x626C70)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETCLAMPWEIGHTS_OFFSET UNITYSDK_OFFSET(0x626C60)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETTARGET_OFFSET UNITYSDK_OFFSET(0x626B70)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETWEIGHTS_OFFSET UNITYSDK_OFFSET(0x626C50)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x626BA0)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SOLVEEYES_OFFSET UNITYSDK_OFFSET(0xE8C1920)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SOLVEHEAD_OFFSET UNITYSDK_OFFSET(0xE8C1250)
#define NPCCROWD_ANIMATION_JOB_LOOKATJOB_SOLVESPINE_OFFSET UNITYSDK_OFFSET(0xE8C0C10)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int LookAtJob_TypeDefinitionIndex = 58191;

	struct alignas(8) LookAtJob
	{
		::Unity::Collections::NativeArray_1<::System::Single> _floats; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> _joints; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _forwards; // 0x30
		::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle> _spineJoints; // 0x40
		::UnityEngine::Animations::TransformStreamHandle _headJoint; // 0x50
		::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle> _eyeJoints; // 0x60
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> _spineForwards; // 0x70
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> _headForwards; // 0x80
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> _eyeForwards; // 0x90
		::UnityEngine::Vector3 _spineAxis; // 0xA0
		::UnityEngine::Vector3 _headAxis; // 0xAC
		::UnityEngine::Vector3 _eyeAxis; // 0xB8
		::System::Single _bodyWeight; // 0xC4
		::System::Single _headWeight; // 0xC8
		::System::Single _eyesWeight; // 0xCC
		::System::Single _clampWeightBody; // 0xD0
		::System::Single _clampWeightHead; // 0xD4
		::System::Single _clampWeightEyes; // 0xD8
		::System::Int32 _clampSmoothing; // 0xDC

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_DISPOSE_OFFSET))(this);
		}

		::System::Void InitParamBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_INITPARAMBUFFER_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Vector3 target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETTARGET_OFFSET))(this, target);
		}

		::System::Void SetWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InitJoints(::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>* spines, ::UnityEngine::Animations::TransformStreamHandle head, ::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>* eyes, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 headAxis, ::UnityEngine::Vector3 eyeAxis)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>*, ::UnityEngine::Animations::TransformStreamHandle, ::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_INITJOINTS_OFFSET))(this, spines, head, eyes, spineAxis, headAxis, eyeAxis);
		}

		::System::Void SetWeights(::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETWEIGHTS_OFFSET))(this, bodyWeight, headWeight, eyesWeight);
		}

		::System::Void SetClampWeights(::System::Single bodyClampWeight, ::System::Single headClampWeight, ::System::Single eyesClampWeight, ::System::Int32 clampSmoothing, ::UnityEngine::AnimationCurve* spineWeightCurve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SETCLAMPWEIGHTS_OFFSET))(this, bodyClampWeight, headClampWeight, eyesClampWeight, clampSmoothing, spineWeightCurve);
		}

		/*
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
		*/

		/*
		static ::System::Void SolveSpine(::UnityEngine::Animations::AnimationStream stream, ::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle> spineJoints, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> spineForwards, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 targetPosition, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SOLVESPINE_OFFSET))(stream, spineJoints, spineForwards, spineAxis, targetPosition, clampWeight, clampSmoothing, weight);
		}
		*/

		/*
		static ::System::Void SolveHead(::UnityEngine::Animations::AnimationStream stream, ::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle> spineJoints, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> headForwards, ::UnityEngine::Animations::TransformStreamHandle headJoint, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 headAxis, ::UnityEngine::Vector3 targetPosition, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SOLVEHEAD_OFFSET))(stream, spineJoints, headForwards, headJoint, spineAxis, headAxis, targetPosition, clampWeight, clampSmoothing, weight);
		}
		*/

		/*
		static ::System::Void SolveEyes(::UnityEngine::Animations::AnimationStream stream, ::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle> eyeJoints, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> eyesForwards, ::UnityEngine::Animations::TransformStreamHandle headJoint, ::UnityEngine::Vector3 headAxis, ::UnityEngine::Vector3 eyeAxis, ::UnityEngine::Vector3 targetPosition, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeSlice_1<::UnityEngine::Animations::TransformStreamHandle>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_SOLVEEYES_OFFSET))(stream, eyeJoints, eyesForwards, headJoint, headAxis, eyeAxis, targetPosition, clampWeight, clampSmoothing, weight);
		}
		*/

		static ::System::Void GetForwards(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> forwards, ::UnityEngine::Vector3 baseForward, ::UnityEngine::Vector3 targetForward, ::System::Single clamp, ::System::Int32 clampSmoothing, ::System::Single weight)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_GETFORWARDS_OFFSET))(forwards, baseForward, targetForward, clamp, clampSmoothing, weight);
		}

		/*
		static ::UnityEngine::Quaternion LookAtDirection(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis, ::UnityEngine::Vector3 direction, ::System::Single weight)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_LOOKATJOB_LOOKATDIRECTION_OFFSET))(rotation, axis, direction, weight);
		}
		*/
	};
}
