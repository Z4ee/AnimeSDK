#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFABRIKRoot; }

#define ROOTMOTION_FINALIK_FABRIKROOT_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1C345240)
#define ROOTMOTION_FINALIK_FABRIKROOT_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1C345290)
#define ROOTMOTION_FINALIK_FABRIKROOT_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3451A0)
#define ROOTMOTION_FINALIK_FABRIKROOT_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1C345150)
#define ROOTMOTION_FINALIK_FABRIKROOT_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1C3451F0)
#define ROOTMOTION_FINALIK_FABRIKROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3452A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FABRIKRoot_TypeDefinitionIndex = 36581;

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
