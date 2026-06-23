#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverVR; }
namespace RootMotion::FinalIK { class VRIK_References; }

#define ROOTMOTION_FINALIK_VRIK_AUTODETECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E2C1510)
#define ROOTMOTION_FINALIK_VRIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1E2C1570)
#define ROOTMOTION_FINALIK_VRIK_GUESSHANDORIENTATIONS_OFFSET UNITYSDK_OFFSET(0x1E2C1540)
#define ROOTMOTION_FINALIK_VRIK_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1E2C1580)
#define ROOTMOTION_FINALIK_VRIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E2C1470)
#define ROOTMOTION_FINALIK_VRIK_OPENSETUPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1E2C14C0)
#define ROOTMOTION_FINALIK_VRIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1E2C1420)
#define ROOTMOTION_FINALIK_VRIK_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1E2C1650)
#define ROOTMOTION_FINALIK_VRIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C1870)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIK_TypeDefinitionIndex = 38328;

	class VRIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::VRIK_References* references; // 0x48
		::RootMotion::FinalIK::IKSolverVR* solver; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenSetupTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_OPENSETUPTUTORIAL_OFFSET))(this);
		}

		::System::Void AutoDetectReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_AUTODETECTREFERENCES_OFFSET))(this);
		}

		::System::Void GuessHandOrientations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_GUESSHANDORIENTATIONS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_GETIKSOLVER_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_UPDATESOLVER_OFFSET))(this);
		}
	};
}
