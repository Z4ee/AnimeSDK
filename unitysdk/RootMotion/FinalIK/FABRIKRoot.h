#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFABRIKRoot; }

#define ROOTMOTION_FINALIK_FABRIKROOT_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1FA58080)
#define ROOTMOTION_FINALIK_FABRIKROOT_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1FA580D0)
#define ROOTMOTION_FINALIK_FABRIKROOT_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1FA57FE0)
#define ROOTMOTION_FINALIK_FABRIKROOT_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1FA57F90)
#define ROOTMOTION_FINALIK_FABRIKROOT_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1FA58030)
#define ROOTMOTION_FINALIK_FABRIKROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA580E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FABRIKRoot_TypeDefinitionIndex = 38844;

	class FABRIKRoot : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverFABRIKRoot* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKROOT__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKROOT_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKROOT_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKROOT_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKROOT_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKROOT_GETIKSOLVER_OFFSET))(this);
		}
	};
}
