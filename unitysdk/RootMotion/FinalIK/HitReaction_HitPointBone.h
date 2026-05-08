#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/HitReaction_HitPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class HitReaction_HitPointBone_BoneLink; }
namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }

#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1B6F53B0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1B6F5310)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_HIT_OFFSET UNITYSDK_OFFSET(0x1B6F4EB0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_ONAPPLY_OFFSET UNITYSDK_OFFSET(0x1B6F5420)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F5520)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_HitPointBone_TypeDefinitionIndex = 36700;

	class HitReaction_HitPointBone : public ::RootMotion::FinalIK::HitReaction_HitPoint
	{
	public:
		::UnityEngine::AnimationCurve* aroundCenterOfMass; // 0x48
		::Il2CppArray<::RootMotion::FinalIK::HitReaction_HitPointBone_BoneLink*>* boneLinks; // 0x50
		::UnityEngine::Rigidbody* rigidbody; // 0x58
		::UnityEngine::Vector3 comAxis; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE__CTOR_OFFSET))(this);
		}

		::System::Void Hit(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_HIT_OFFSET))(this, force, point);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_GETLENGTH_OFFSET))(this);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_CROSSFADESTART_OFFSET))(this);
		}

		::System::Void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_ONAPPLY_OFFSET))(this, solver, weight);
		}
	};
}
