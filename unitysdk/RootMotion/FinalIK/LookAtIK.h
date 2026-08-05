#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverLookAt; }

#define ROOTMOTION_FINALIK_LOOKATIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F8B08B0)
#define ROOTMOTION_FINALIK_LOOKATIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1F8B0960)
#define ROOTMOTION_FINALIK_LOOKATIK_GET_SHOULDSKIPANIMATORDELAYMODE_OFFSET UNITYSDK_OFFSET(0x1F8B0900)
#define ROOTMOTION_FINALIK_LOOKATIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F8B0810)
#define ROOTMOTION_FINALIK_LOOKATIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F8B07C0)
#define ROOTMOTION_FINALIK_LOOKATIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F8B0860)
#define ROOTMOTION_FINALIK_LOOKATIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B0970)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LookAtIK_TypeDefinitionIndex = 38962;

	class LookAtIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverLookAt* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK_ASTHREAD_OFFSET))(this);
		}

		::System::Boolean get_shouldSkipAnimatorDelayMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK_GET_SHOULDSKIPANIMATORDELAYMODE_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKATIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
