#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

namespace RootMotion::FinalIK { class IKSolver; }

#define ROOTMOTION_FINALIK_IK_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA26CF40)
#define ROOTMOTION_FINALIK_IK_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0xA26CCF0)
#define ROOTMOTION_FINALIK_IK_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xA26D010)
#define ROOTMOTION_FINALIK_IK_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0xA26CB30)
#define ROOTMOTION_FINALIK_IK__CTOR_OFFSET UNITYSDK_OFFSET(0xA26D040)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IK_TypeDefinitionIndex = 41829;

	class IK : public ::RootMotion::SolverManager
	{
	public:
		::System::Boolean lockIKPosition; // 0x38
		::System::Boolean lockIKPhysics; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK__CTOR_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
