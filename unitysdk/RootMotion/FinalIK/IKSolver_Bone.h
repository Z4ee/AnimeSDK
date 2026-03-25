#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver_Point.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class RotationLimit; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_BONE_GET_ROTATIONLIMIT_OFFSET UNITYSDK_OFFSET(0x85EB760)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE_SETTOSOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0x85EC4A0)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE_SET_ROTATIONLIMIT_OFFSET UNITYSDK_OFFSET(0x85EB820)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE_SOLVERSWING_OFFSET UNITYSDK_OFFSET(0x85EBD20)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE_SWING2D_OFFSET UNITYSDK_OFFSET(0x85EC150)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE_SWING_OFFSET UNITYSDK_OFFSET(0x85EB840)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x85EC540)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x85EC590)
#define ROOTMOTION_FINALIK_IKSOLVER_BONE__CTOR_OFFSET UNITYSDK_OFFSET(0x85EC4E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_Bone_TypeDefinitionIndex = 35205;

	class IKSolver_Bone : public ::RootMotion::FinalIK::IKSolver_Point
	{
	public:
		::System::Single length; // 0x58
		::System::Single sqrMag; // 0x5C
		::UnityEngine::Vector3 axis; // 0x60
		::RootMotion::FinalIK::RotationLimit* _rotationLimit; // 0x70
		::System::Boolean isLimited; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void _ctor_2(::UnityEngine::Transform* transform, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE__CTOR_2_OFFSET))(this, transform, weight);
		}

		::RootMotion::FinalIK::RotationLimit* get_rotationLimit()
		{
			return ((::RootMotion::FinalIK::RotationLimit*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE_GET_ROTATIONLIMIT_OFFSET))(this);
		}

		::System::Void set_rotationLimit(::RootMotion::FinalIK::RotationLimit* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::RotationLimit*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE_SET_ROTATIONLIMIT_OFFSET))(this, value);
		}

		::System::Void Swing(::UnityEngine::Vector3 swingTarget, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE_SWING_OFFSET))(this, swingTarget, weight);
		}

		static ::System::Void SolverSwing(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>* bones, ::System::Int32 index, ::UnityEngine::Vector3 swingTarget, ::System::Single weight)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE_SOLVERSWING_OFFSET))(bones, index, swingTarget, weight);
		}

		::System::Void Swing2D(::UnityEngine::Vector3 swingTarget, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE_SWING2D_OFFSET))(this, swingTarget, weight);
		}

		::System::Void SetToSolverPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_BONE_SETTOSOLVERPOSITION_OFFSET))(this);
		}
	};
}
