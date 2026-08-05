#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion { class BipedReferences; }
namespace RootMotion::FinalIK { class Constraints; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverAim; }
namespace RootMotion::FinalIK { class IKSolverFABRIK; }
namespace RootMotion::FinalIK { class IKSolverLimb; }
namespace RootMotion::FinalIK { class IKSolverLookAt; }

#define ROOTMOTION_FINALIK_BIPEDIKSOLVERS_ASSIGNREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EE3EF00)
#define ROOTMOTION_FINALIK_BIPEDIKSOLVERS_GET_IKSOLVERS_OFFSET UNITYSDK_OFFSET(0x1EE3EB30)
#define ROOTMOTION_FINALIK_BIPEDIKSOLVERS_GET_LIMBS_OFFSET UNITYSDK_OFFSET(0x1EE3E8C0)
#define ROOTMOTION_FINALIK_BIPEDIKSOLVERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE3F1E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int BipedIKSolvers_TypeDefinitionIndex = 38936;

	class BipedIKSolvers : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::IKSolverLimb* leftFoot; // 0x10
		::RootMotion::FinalIK::IKSolverLimb* rightFoot; // 0x18
		::RootMotion::FinalIK::IKSolverLimb* leftHand; // 0x20
		::RootMotion::FinalIK::IKSolverLimb* rightHand; // 0x28
		::RootMotion::FinalIK::IKSolverFABRIK* spine; // 0x30
		::RootMotion::FinalIK::IKSolverLookAt* lookAt; // 0x38
		::RootMotion::FinalIK::IKSolverAim* aim; // 0x40
		::RootMotion::FinalIK::Constraints* pelvis; // 0x48
		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb*>* _limbs; // 0x50
		::Il2CppArray<::RootMotion::FinalIK::IKSolver*>* _ikSolvers; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIKSOLVERS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb*>* get_limbs()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIKSOLVERS_GET_LIMBS_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver*>* get_ikSolvers()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIKSOLVERS_GET_IKSOLVERS_OFFSET))(this);
		}

		::System::Void AssignReferences(::RootMotion::BipedReferences* references)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedReferences*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIKSOLVERS_ASSIGNREFERENCES_OFFSET))(this, references);
		}
	};
}
