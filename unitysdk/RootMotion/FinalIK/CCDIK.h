#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverCCD; }

#define ROOTMOTION_FINALIK_CCDIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1EEDBAB0)
#define ROOTMOTION_FINALIK_CCDIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1EEDBB00)
#define ROOTMOTION_FINALIK_CCDIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEDBA10)
#define ROOTMOTION_FINALIK_CCDIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1EEDB9C0)
#define ROOTMOTION_FINALIK_CCDIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1EEDBA60)
#define ROOTMOTION_FINALIK_CCDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDBB10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int CCDIK_TypeDefinitionIndex = 38801;

	class CCDIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverCCD* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CCDIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
