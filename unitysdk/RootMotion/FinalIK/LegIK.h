#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverLeg; }

#define ROOTMOTION_FINALIK_LEGIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1E014A00)
#define ROOTMOTION_FINALIK_LEGIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1E014A50)
#define ROOTMOTION_FINALIK_LEGIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E014960)
#define ROOTMOTION_FINALIK_LEGIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1E014910)
#define ROOTMOTION_FINALIK_LEGIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1E0149B0)
#define ROOTMOTION_FINALIK_LEGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E014A60)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LegIK_TypeDefinitionIndex = 38289;

	class LegIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverLeg* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
