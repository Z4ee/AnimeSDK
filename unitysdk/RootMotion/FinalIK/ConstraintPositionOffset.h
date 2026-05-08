#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Constraint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET_GET_POSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1BF84C90)
#define ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET_UPDATECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1BF84A10)
#define ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF84D30)
#define ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF84D20)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int ConstraintPositionOffset_TypeDefinitionIndex = 36554;

	class ConstraintPositionOffset : public ::RootMotion::FinalIK::Constraint
	{
	public:
		::UnityEngine::Vector3 offset; // 0x20
		::UnityEngine::Vector3 defaultLocalPosition; // 0x2C
		::UnityEngine::Vector3 lastLocalPosition; // 0x38
		::System::Boolean initiated; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void UpdateConstraint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET_UPDATECONSTRAINT_OFFSET))(this);
		}

		::System::Boolean get_positionChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTPOSITIONOFFSET_GET_POSITIONCHANGED_OFFSET))(this);
		}
	};
}
