#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_BONELINK_APPLY_OFFSET UNITYSDK_OFFSET(0x1E00AED0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_BONELINK_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1E00B060)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_BONELINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00B070)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_HitPointBone_BoneLink_TypeDefinitionIndex = 38183;

	class HitReaction_HitPointBone_BoneLink : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::System::Single weight; // 0x18
		::UnityEngine::Quaternion lastValue; // 0x1C
		::UnityEngine::Quaternion current; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_BONELINK__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Quaternion offset, ::System::Single crossFader)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_BONELINK_APPLY_OFFSET))(this, solver, offset, crossFader);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTBONE_BONELINK_CROSSFADESTART_OFFSET))(this);
		}
	};
}
