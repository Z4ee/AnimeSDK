#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver_Bone.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1E633BF0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE_INITIATE_OFFSET UNITYSDK_OFFSET(0x1E6334A0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1E633880)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E633450)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E633410)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLookAt_LookAtBone_TypeDefinitionIndex = 38162;

	class IKSolverLookAt_LookAtBone : public ::RootMotion::FinalIK::IKSolver_Bone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void Initiate(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE_INITIATE_OFFSET))(this, root);
		}

		::System::Void LookAt(::UnityEngine::Vector3 direction, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE_LOOKAT_OFFSET))(this, direction, weight);
		}

		::UnityEngine::Vector3 get_forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_LOOKATBONE_GET_FORWARD_OFFSET))(this);
		}
	};
}
