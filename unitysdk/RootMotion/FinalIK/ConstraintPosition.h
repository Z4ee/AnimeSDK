#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Constraint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_CONSTRAINTPOSITION_UPDATECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1F28E5C0)
#define ROOTMOTION_FINALIK_CONSTRAINTPOSITION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F28E6A0)
#define ROOTMOTION_FINALIK_CONSTRAINTPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F28E690)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int ConstraintPosition_TypeDefinitionIndex = 39009;

	class ConstraintPosition : public ::RootMotion::FinalIK::Constraint
	{
	public:
		::UnityEngine::Vector3 position; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITION__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void UpdateConstraint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITION_UPDATECONSTRAINT_OFFSET))(this);
		}
	};
}
