#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }

#define ROOTMOTION_FINALIK_OFFSETPOSE_EFFECTORLINK_APPLY_OFFSET UNITYSDK_OFFSET(0x1C141870)
#define ROOTMOTION_FINALIK_OFFSETPOSE_EFFECTORLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C141D00)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetPose_EffectorLink_TypeDefinitionIndex = 36719;

	class OffsetPose_EffectorLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effector; // 0x10
		::UnityEngine::Vector3 offset; // 0x14
		::UnityEngine::Vector3 pin; // 0x20
		::UnityEngine::Vector3 pinWeight; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE_EFFECTORLINK__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE_EFFECTORLINK_APPLY_OFFSET))(this, solver, weight, rotation);
		}
	};
}
