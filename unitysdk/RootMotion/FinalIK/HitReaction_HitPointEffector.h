#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/HitReaction_HitPoint.h"

namespace RootMotion::FinalIK { class HitReaction_HitPointEffector_EffectorLink; }
namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1C1EAF00)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C1EADA0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_ONAPPLY_OFFSET UNITYSDK_OFFSET(0x1C1EAF70)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EB370)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_HitPointEffector_TypeDefinitionIndex = 36698;

	class HitReaction_HitPointEffector : public ::RootMotion::FinalIK::HitReaction_HitPoint
	{
	public:
		::UnityEngine::AnimationCurve* offsetInForceDirection; // 0x48
		::UnityEngine::AnimationCurve* offsetInUpDirection; // 0x50
		::Il2CppArray<::RootMotion::FinalIK::HitReaction_HitPointEffector_EffectorLink*>* effectorLinks; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_GETLENGTH_OFFSET))(this);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_CROSSFADESTART_OFFSET))(this);
		}

		::System::Void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_ONAPPLY_OFFSET))(this, solver, weight);
		}
	};
}
