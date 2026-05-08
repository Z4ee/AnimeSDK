#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace RootMotion::FinalIK { class PenetrationAvoidance_Avoider_EffectorLink; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_GETOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x1C349360)
#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C3494F0)
#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_SOLVE_OFFSET UNITYSDK_OFFSET(0x1C349160)
#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C349AD0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int PenetrationAvoidance_Avoider_TypeDefinitionIndex = 36721;

	class PenetrationAvoidance_Avoider : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* raycastFrom; // 0x10
		::UnityEngine::Transform* raycastTo; // 0x18
		::System::Single raycastRadius; // 0x20
		::Il2CppArray<::RootMotion::FinalIK::PenetrationAvoidance_Avoider_EffectorLink*>* effectors; // 0x28
		::System::Single smoothTimeIn; // 0x30
		::System::Single smoothTimeOut; // 0x34
		::UnityEngine::LayerMask layers; // 0x38
		::UnityEngine::Vector3 offset; // 0x3C
		::UnityEngine::Vector3 offsetTarget; // 0x48
		::UnityEngine::Vector3 offsetV; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER__CTOR_OFFSET))(this);
		}

		::System::Void Solve(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_SOLVE_OFFSET))(this, solver, weight);
		}

		::UnityEngine::Vector3 GetOffsetTarget(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_GETOFFSETTARGET_OFFSET))(this, solver);
		}

		::UnityEngine::Vector3 Raycast(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_AVOIDER_RAYCAST_OFFSET))(this, from, to);
		}
	};
}
