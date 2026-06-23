#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver_Point.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_NODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E5190)
#define ROOTMOTION_FINALIK_IKSOLVER_NODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E6E51B0)
#define ROOTMOTION_FINALIK_IKSOLVER_NODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5170)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_Node_TypeDefinitionIndex = 38231;

	class IKSolver_Node : public ::RootMotion::FinalIK::IKSolver_Point
	{
	public:
		::System::Single length; // 0x58
		::System::Single effectorPositionWeight; // 0x5C
		::System::Single effectorRotationWeight; // 0x60
		::UnityEngine::Vector3 offset; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_NODE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_NODE__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void _ctor_2(::UnityEngine::Transform* transform, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_NODE__CTOR_2_OFFSET))(this, transform, weight);
		}
	};
}
