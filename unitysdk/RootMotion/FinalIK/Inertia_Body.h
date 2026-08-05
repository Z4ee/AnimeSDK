#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace RootMotion::FinalIK { class Inertia_Body_EffectorLink; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INERTIA_BODY_RESET_OFFSET UNITYSDK_OFFSET(0x1F8AFF40)
#define ROOTMOTION_FINALIK_INERTIA_BODY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F8B0120)
#define ROOTMOTION_FINALIK_INERTIA_BODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B05C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Inertia_Body_TypeDefinitionIndex = 38865;

	class Inertia_Body : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::Il2CppArray<::RootMotion::FinalIK::Inertia_Body_EffectorLink*>* effectorLinks; // 0x18
		::System::Single speed; // 0x20
		::System::Single acceleration; // 0x24
		::System::Single matchVelocity; // 0x28
		::System::Single gravity; // 0x2C
		::UnityEngine::Vector3 delta; // 0x30
		::UnityEngine::Vector3 lazyPoint; // 0x3C
		::UnityEngine::Vector3 direction; // 0x48
		::UnityEngine::Vector3 lastPosition; // 0x54
		::System::Boolean firstUpdate; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_BODY__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_BODY_RESET_OFFSET))(this);
		}

		::System::Void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_BODY_UPDATE_OFFSET))(this, solver, weight, deltaTime);
		}
	};
}
