#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverAim; }

#define ROOTMOTION_FINALIK_AIMIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F2E3990)
#define ROOTMOTION_FINALIK_AIMIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1F2E39E0)
#define ROOTMOTION_FINALIK_AIMIK_GET_SHOULDSKIPANIMATORDELAYMODE_OFFSET UNITYSDK_OFFSET(0x1F2E37F0)
#define ROOTMOTION_FINALIK_AIMIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F2E38A0)
#define ROOTMOTION_FINALIK_AIMIK_OPENSETUPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1F2E38F0)
#define ROOTMOTION_FINALIK_AIMIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F2E3850)
#define ROOTMOTION_FINALIK_AIMIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F2E3940)
#define ROOTMOTION_FINALIK_AIMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E39F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimIK_TypeDefinitionIndex = 38845;

	class AimIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverAim* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_shouldSkipAnimatorDelayMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_GET_SHOULDSKIPANIMATORDELAYMODE_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenSetupTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_OPENSETUPTUTORIAL_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
