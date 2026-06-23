#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/NPCCrowd/Ability/ENPCCPUAnimatorControllerType.h"
#include "unitysdk/NPCCrowd/Ability/ENPCCPUAnimatorFlags.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ANIMATIONCLIPID_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_BHASANIMATION_OFFSET UNITYSDK_OFFSET(0x67E410)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_CLIPSPEED_OFFSET UNITYSDK_OFFSET(0x416EC0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_CONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x67E6D0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x67E3D0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x67E5D0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ISTURNING_OFFSET UNITYSDK_OFFSET(0x67E5F0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_MAINCLIPNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x460BA0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ROOTMOTIONROTATION_OFFSET UNITYSDK_OFFSET(0x67E3C0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ROOTMOTIONTRANSLATION_OFFSET UNITYSDK_OFFSET(0x2ACBA0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_ANIMATIONCLIPID_OFFSET UNITYSDK_OFFSET(0x67E520)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_BHASANIMATION_OFFSET UNITYSDK_OFFSET(0x67E4C0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_CLIPSPEED_OFFSET UNITYSDK_OFFSET(0x67E610)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_CONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x67E6E0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x67E5E0)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_ISTURNING_OFFSET UNITYSDK_OFFSET(0x67E600)
#define NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SYNCWITHSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x67E6F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCCPUAnimatorFragment_TypeDefinitionIndex = 76257;

	struct alignas(4) FNPCCPUAnimatorFragment
	{
		::NPCCrowd::Ability::ENPCCPUAnimatorFlags _flags; // 0x10
		::System::Int32 _mainClipId; // 0x14
		::System::Single _mainClipSpeed; // 0x18
		::System::Single _mainClipNormalizedTime; // 0x1C
		::Foundation::Unreal::FTransform3D _rootMotion; // 0x20
		::System::Single blendClip1Speed; // 0x48
		::System::Int32 blendClip1ID; // 0x4C
		::System::Single blendClip1NormalizedTime; // 0x50
		::System::Single blendClip2Speed; // 0x54
		::System::Int32 blendClip2ID; // 0x58
		::System::Single blendClip2NormalizedTime; // 0x5C
		::System::Single blendClip3Speed; // 0x60
		::System::Int32 blendClip3ID; // 0x64
		::System::Single blendClip3NormalizedTime; // 0x68
		::System::Byte layerFlags; // 0x6C
		::System::Single TurningAngle; // 0x70

		/*
		::UnityEngine::Vector3 get_RootMotionTranslation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ROOTMOTIONTRANSLATION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Quaternion get_RootMotionRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ROOTMOTIONROTATION_OFFSET))(this);
		}
		*/

		::System::Boolean get_HasRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_HASROOTMOTION_OFFSET))(this);
		}

		::System::Boolean get_bHasAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_BHASANIMATION_OFFSET))(this);
		}

		::System::Void set_bHasAnimation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_BHASANIMATION_OFFSET))(this, value);
		}

		::System::Int32 get_animationClipID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ANIMATIONCLIPID_OFFSET))(this);
		}

		::System::Void set_animationClipID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_ANIMATIONCLIPID_OFFSET))(this, value);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ISMOVING_OFFSET))(this);
		}

		::System::Void set_IsMoving(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_ISMOVING_OFFSET))(this, value);
		}

		::System::Boolean get_IsTurning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_ISTURNING_OFFSET))(this);
		}

		::System::Void set_IsTurning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_ISTURNING_OFFSET))(this, value);
		}

		::System::Single get_clipSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_CLIPSPEED_OFFSET))(this);
		}

		::System::Void set_clipSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_CLIPSPEED_OFFSET))(this, value);
		}

		::NPCCrowd::Ability::ENPCCPUAnimatorControllerType get_ControllerType()
		{
			return ((::NPCCrowd::Ability::ENPCCPUAnimatorControllerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_CONTROLLERTYPE_OFFSET))(this);
		}

		::System::Void set_ControllerType(::NPCCrowd::Ability::ENPCCPUAnimatorControllerType value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::ENPCCPUAnimatorControllerType))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SET_CONTROLLERTYPE_OFFSET))(this, value);
		}

		::System::Single get_MainClipNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_GET_MAINCLIPNORMALIZEDTIME_OFFSET))(this);
		}

		/*
		::System::Void SyncWithStateMachine(::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer& layerData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::UnityEngine::NapTransformData rootMotion)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCCPUANIMATORFRAGMENT_SYNCWITHSTATEMACHINE_OFFSET))(this, layerData, sampleData, rootMotion);
		}
		*/
	};
}
