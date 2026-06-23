#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverLimb; }

#define ROOTMOTION_FINALIK_LIMBIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1E014C30)
#define ROOTMOTION_FINALIK_LIMBIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1E014C80)
#define ROOTMOTION_FINALIK_LIMBIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E014B90)
#define ROOTMOTION_FINALIK_LIMBIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1E014B40)
#define ROOTMOTION_FINALIK_LIMBIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1E014BE0)
#define ROOTMOTION_FINALIK_LIMBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E014C90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LimbIK_TypeDefinitionIndex = 38269;

	class LimbIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverLimb* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
