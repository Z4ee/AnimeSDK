#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class AimPoser_Pose; }

#define ROOTMOTION_FINALIK_AIMPOSER_GETPOSE_OFFSET UNITYSDK_OFFSET(0x1EEDB7D0)
#define ROOTMOTION_FINALIK_AIMPOSER_SETPOSEACTIVE_OFFSET UNITYSDK_OFFSET(0x1EEDB8D0)
#define ROOTMOTION_FINALIK_AIMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDB930)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimPoser_TypeDefinitionIndex = 38872;

	class AimPoser : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single angleBuffer; // 0x18
		::Il2CppArray<::RootMotion::FinalIK::AimPoser_Pose*>* poses; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMPOSER__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::AimPoser_Pose* GetPose(::UnityEngine::Vector3 localDirection)
		{
			return ((::RootMotion::FinalIK::AimPoser_Pose*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMPOSER_GETPOSE_OFFSET))(this, localDirection);
		}

		::System::Void SetPoseActive(::RootMotion::FinalIK::AimPoser_Pose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::AimPoser_Pose*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMPOSER_SETPOSEACTIVE_OFFSET))(this, pose);
		}
	};
}
