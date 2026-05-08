#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }

#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_EFFECTORLINK_APPLY_OFFSET UNITYSDK_OFFSET(0x1B9A1E30)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_EFFECTORLINK_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1B9A1EE0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_EFFECTORLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A1EF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_HitPointEffector_EffectorLink_TypeDefinitionIndex = 36699;

	class HitReaction_HitPointEffector_EffectorLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effector; // 0x10
		::System::Single weight; // 0x14
		::UnityEngine::Vector3 lastValue; // 0x18
		::UnityEngine::Vector3 current; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_EFFECTORLINK__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Vector3 offset, ::System::Single crossFader)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_EFFECTORLINK_APPLY_OFFSET))(this, solver, offset, crossFader);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINTEFFECTOR_EFFECTORLINK_CROSSFADESTART_OFFSET))(this);
		}
	};
}
