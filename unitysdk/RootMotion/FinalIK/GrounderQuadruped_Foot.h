#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_FOOT__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7740)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderQuadruped_Foot_TypeDefinitionIndex = 38968;

	struct alignas(8) GrounderQuadruped_Foot
	{
		::RootMotion::FinalIK::IKSolver* solver; // 0x10
		::UnityEngine::Transform* transform; // 0x18
		::UnityEngine::Quaternion rotation; // 0x20
		::RootMotion::FinalIK::Grounding_Leg* leg; // 0x30

		::System::Void _ctor(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolver*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_FOOT__CTOR_OFFSET))(this, solver, transform);
		}
	};
}
