#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver_Limb.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverLimb_AxisDirection.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverLimb_BendModifier.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverTrigonometric.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYFROM_OFFSET UNITYSDK_OFFSET(0x196AB820)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYTO_OFFSET UNITYSDK_OFFSET(0x196AB440)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_GETMODIFIEDBENDNORMAL_OFFSET UNITYSDK_OFFSET(0x196AC3F0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x196AD760)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINBEND_OFFSET UNITYSDK_OFFSET(0x196AAAE0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINROTATION_OFFSET UNITYSDK_OFFSET(0x196AAA80)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_ONINITIATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x196AB8B0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_ONPOSTSOLVEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x196AD280)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_ONUPDATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x196AC2C0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_STOREAXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x196AC150)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196AD5F0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x196AD360)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_TypeDefinitionIndex = 44881;

	class IKSolverLimb : public ::RootMotion::FinalIK::IKSolverTrigonometric
	{
	public:
		::UnityEngine::AvatarIKGoal goal; // 0xB0
		::RootMotion::FinalIK::IKSolverLimb_BendModifier bendModifier; // 0xB4
		::System::Single maintainRotationWeight; // 0xB8
		::System::Single bendModifierWeight; // 0xBC
		::UnityEngine::Transform* bendGoal; // 0xC0
		::System::Boolean useBendGoalForInitialBend; // 0xC8
		::System::Boolean maintainBendFor1Frame; // 0xC9
		::System::Boolean maintainRotationFor1Frame; // 0xCA
		::UnityEngine::Quaternion defaultRootRotation; // 0xCC
		::UnityEngine::Quaternion parentDefaultRotation; // 0xDC
		::UnityEngine::Quaternion bone3RotationBeforeSolve; // 0xEC
		::UnityEngine::Quaternion maintainRotation; // 0xFC
		::UnityEngine::Quaternion bone3DefaultRotation; // 0x10C
		::UnityEngine::Vector3 _bendNormal; // 0x11C
		::UnityEngine::Vector3 animationNormal; // 0x128
		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* axisDirectionsLeft; // 0x138
		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* axisDirectionsRight; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::AvatarIKGoal a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void MaintainRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINROTATION_OFFSET))(this);
		}

		::System::Void MaintainBend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINBEND_OFFSET))(this);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void OnInitiateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_ONINITIATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnUpdateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_ONUPDATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnPostSolveVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_ONPOSTSOLVEVIRTUAL_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* get_axisDirections()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET))(this);
		}

		::System::Void StoreAxisDirections(::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_STOREAXISDIRECTIONS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetModifiedBendNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_GETMODIFIEDBENDNORMAL_OFFSET))(this);
		}
	};
}
