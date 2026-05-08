#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverArm; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_ARMIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1B9A0CF0)
#define ROOTMOTION_FINALIK_ARMIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1B9A0D40)
#define ROOTMOTION_FINALIK_ARMIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B9A0DA0)
#define ROOTMOTION_FINALIK_ARMIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B9A0C50)
#define ROOTMOTION_FINALIK_ARMIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1B9A0C00)
#define ROOTMOTION_FINALIK_ARMIK_SETTARGETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B9A0D50)
#define ROOTMOTION_FINALIK_ARMIK_START_OFFSET UNITYSDK_OFFSET(0x1B9A0D60)
#define ROOTMOTION_FINALIK_ARMIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1B9A0CA0)
#define ROOTMOTION_FINALIK_ARMIK_UPDATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B9A1060)
#define ROOTMOTION_FINALIK_ARMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A1210)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int ArmIK_TypeDefinitionIndex = 36578;

	class ArmIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverArm* solver; // 0x48
		::System::Single weightSmoothTime; // 0x50
		::System::Single _weightVelocity; // 0x54
		::System::Single _targetWeight; // 0x58
		::System::Single _currentWeight; // 0x5C
		::System::String* tag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_GETIKSOLVER_OFFSET))(this);
		}

		::System::Void SetTargetWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_SETTARGETWEIGHT_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateWeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ARMIK_UPDATEWEIGHT_OFFSET))(this);
		}
	};
}
