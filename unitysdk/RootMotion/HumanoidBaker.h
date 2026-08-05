#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/Baker.h"
#include "unitysdk/UnityEngine/HumanPose.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion { class BakerHumanoidQT; }
namespace RootMotion { class BakerMuscle; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class HumanPoseHandler; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_HUMANOIDBAKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F3D88C0)
#define ROOTMOTION_HUMANOIDBAKER_GETCHARACTERROOT_OFFSET UNITYSDK_OFFSET(0x1F3D8FD0)
#define ROOTMOTION_HUMANOIDBAKER_ONSETCURVES_OFFSET UNITYSDK_OFFSET(0x1F3D93A0)
#define ROOTMOTION_HUMANOIDBAKER_ONSETKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1F3D9630)
#define ROOTMOTION_HUMANOIDBAKER_ONSETLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1F3D9150)
#define ROOTMOTION_HUMANOIDBAKER_ONSTARTBAKING_OFFSET UNITYSDK_OFFSET(0x1F3D8FF0)
#define ROOTMOTION_HUMANOIDBAKER_UPDATEHUMANPOSE_OFFSET UNITYSDK_OFFSET(0x1F3D9AB0)
#define ROOTMOTION_HUMANOIDBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D9D90)

namespace RootMotion
{
	inline static constexpr unsigned int HumanoidBaker_TypeDefinitionIndex = 38973;

	class HumanoidBaker : public ::RootMotion::Baker
	{
	public:
		::System::Boolean bakeHandIK; // 0x90
		::System::Single IKKeyReductionError; // 0x94
		::System::Int32 muscleFrameRateDiv; // 0x98
		::Il2CppArray<::RootMotion::BakerMuscle*>* bakerMuscles; // 0xA0
		::RootMotion::BakerHumanoidQT* rootQT; // 0xA8
		::RootMotion::BakerHumanoidQT* leftFootQT; // 0xB0
		::RootMotion::BakerHumanoidQT* rightFootQT; // 0xB8
		::RootMotion::BakerHumanoidQT* leftHandQT; // 0xC0
		::RootMotion::BakerHumanoidQT* rightHandQT; // 0xC8
		::Il2CppArray<::System::Single>* muscles; // 0xD0
		::UnityEngine::HumanPose pose; // 0xD8
		::UnityEngine::HumanPoseHandler* handler; // 0x100
		::UnityEngine::Vector3 bodyPosition; // 0x108
		::UnityEngine::Quaternion bodyRotation; // 0x114
		::System::Int32 mN; // 0x124
		::UnityEngine::Quaternion lastBodyRotation; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetCharacterRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_GETCHARACTERROOT_OFFSET))(this);
		}

		::System::Void OnStartBaking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_ONSTARTBAKING_OFFSET))(this);
		}

		::System::Void OnSetLoopFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_ONSETLOOPFRAME_OFFSET))(this, time);
		}

		::System::Void OnSetCurves(::UnityEngine::AnimationClip*& clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*&))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_ONSETCURVES_OFFSET))(this, clip);
		}

		::System::Void OnSetKeyframes(::System::Single time, ::System::Boolean lastFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_ONSETKEYFRAMES_OFFSET))(this, time, lastFrame);
		}

		::System::Void UpdateHumanPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HUMANOIDBAKER_UPDATEHUMANPOSE_OFFSET))(this);
		}
	};
}
