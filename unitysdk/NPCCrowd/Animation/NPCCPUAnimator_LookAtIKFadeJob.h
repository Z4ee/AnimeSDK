#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimator_LookAtIKFadeJob_ETargetType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation { class IGraphScript_SetLookAtWeight; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphScriptBase; }
namespace NPCCrowd::Animation { class NPCCPUAnimationPassBase; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_CLEARTARGET_OFFSET UNITYSDK_OFFSET(0x6A6B70)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_END_OFFSET UNITYSDK_OFFSET(0x6A6A00)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x6A6BF0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_INIT_OFFSET UNITYSDK_OFFSET(0x6A68C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_ISCREATED_OFFSET UNITYSDK_OFFSET(0x6A6A60)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_ISEND_OFFSET UNITYSDK_OFFSET(0x6A6A10)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_SETPOSTARGET_OFFSET UNITYSDK_OFFSET(0x6A6AC0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_SETTRANSFORMTARGET_OFFSET UNITYSDK_OFFSET(0x6A6AB0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_START_OFFSET UNITYSDK_OFFSET(0x6A69B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATEGRAPHTARGET_OFFSET UNITYSDK_OFFSET(0x6A6D40)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATELOCK_OFFSET UNITYSDK_OFFSET(0x6A6D20)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x6A6D30)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x6A6D10)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x6A6D00)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATE_OFFSET UNITYSDK_OFFSET(0x6A6CF0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x102BD3F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimator_LookAtIKFadeJob_TypeDefinitionIndex = 39909;

	struct alignas(8) NPCCPUAnimator_LookAtIKFadeJob
	{
		static ::System::Single* StaticGet__minLookAtWeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimator_LookAtIKFadeJob_TypeDefinitionIndex)->GetStaticField(0xD080);
		}
		::System::Boolean _isCreated; // 0x10
		::System::Boolean _isEnd; // 0x11
		::System::Boolean _isPendingEnd; // 0x12
		::NPCCrowd::Animation::NPCCPUAnimator_LookAtIKFadeJob_ETargetType _targetType; // 0x14
		::UnityEngine::Vector3 _targetPos; // 0x18
		::UnityEngine::Transform* _targetTransform; // 0x28
		::UnityEngine::Transform* _baseTransform; // 0x30
		::UnityEngine::Transform* _pivotTransform; // 0x38
		::UnityEngine::Vector3 _baseAxis; // 0x40
		::UnityEngine::Vector3 _pivotAxis; // 0x4C
		::System::Single _speedOnGetTarget; // 0x58
		::System::Single _speedOnChangeTarget; // 0x5C
		::System::Single _speedOnMissTarget; // 0x60
		::System::Single _speedOnLockTarget; // 0x64
		::System::Single _currentSpeed; // 0x68
		::System::Single _pitchUp; // 0x6C
		::System::Single _pitchDown; // 0x70
		::System::Single _yawLeft; // 0x74
		::System::Single _yawRight; // 0x78
		::System::Single _weight; // 0x7C
		::UnityEngine::Vector3 _targetDir; // 0x80
		::UnityEngine::Vector3 _currentDir; // 0x8C
		::System::Boolean _isLocking; // 0x98

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB__CCTOR_OFFSET))();
		}

		::System::Void Init(::UnityEngine::Transform* spineBase, ::UnityEngine::Transform* pivot, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 pivotAxis, ::System::Single speedOnGetTarget, ::System::Single speedOnChangeTarget, ::System::Single speedOnMissTarget, ::System::Single speedOnLockTarget, ::System::Single pitchUp, ::System::Single pitchDown, ::System::Single yawLeft, ::System::Single yawRight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_INIT_OFFSET))(this, spineBase, pivot, spineAxis, pivotAxis, speedOnGetTarget, speedOnChangeTarget, speedOnMissTarget, speedOnLockTarget, pitchUp, pitchDown, yawLeft, yawRight);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_START_OFFSET))(this);
		}

		::System::Void End(::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_END_OFFSET))(this, immediate);
		}

		::System::Boolean IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_ISEND_OFFSET))(this);
		}

		::System::Boolean IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_ISCREATED_OFFSET))(this);
		}

		::System::Void SetTransformTarget(::UnityEngine::Transform* targetTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_SETTRANSFORMTARGET_OFFSET))(this, targetTransform);
		}

		::System::Void SetPosTarget(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_SETPOSTARGET_OFFSET))(this, targetPos);
		}

		::System::Void ClearTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_CLEARTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_GETTARGETPOS_OFFSET))(this);
		}

		::System::Void Update(::NPCCrowd::Animation::NPCCPUAnimationGraphScriptBase* graph, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationGraphScriptBase*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATE_OFFSET))(this, graph, deltaTime);
		}

		::System::Void Update_1(::NPCCrowd::Animation::NPCCPUAnimationPassBase* graph, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationPassBase*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATE_1_OFFSET))(this, graph, deltaTime);
		}

		::System::Void UpdateWeight(::NPCCrowd::Animation::IGraphScript_SetLookAtWeight* lookGraph, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::IGraphScript_SetLookAtWeight*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATEWEIGHT_OFFSET))(this, lookGraph, deltaTime);
		}

		::System::Void UpdateLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATELOCK_OFFSET))(this);
		}

		::System::Void UpdateTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATETARGET_OFFSET))(this);
		}

		::System::Void UpdateGraphTarget(::NPCCrowd::Animation::IGraphScript_SetLookAtWeight* lookGraph, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::IGraphScript_SetLookAtWeight*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_LOOKATIKFADEJOB_UPDATEGRAPHTARGET_OFFSET))(this, lookGraph, deltaTime);
		}
	};
}
