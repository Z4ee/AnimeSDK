#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverTrigonometric; }

#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1B9A7EB0)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1B9A7F00)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B9A7E10)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1B9A7DC0)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1B9A7E60)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A7F10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int TrigonometricIK_TypeDefinitionIndex = 36589;

	class TrigonometricIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverTrigonometric* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
