#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_POSER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1DB06550)
#define ROOTMOTION_FINALIK_POSER_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1DB06520)
#define ROOTMOTION_FINALIK_POSER_UPDATEMANUAL_OFFSET UNITYSDK_OFFSET(0x1DB064D0)
#define ROOTMOTION_FINALIK_POSER_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1DB064E0)
#define ROOTMOTION_FINALIK_POSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB06570)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Poser_TypeDefinitionIndex = 38307;

	class Poser : public ::RootMotion::SolverManager
	{
	public:
		::UnityEngine::Transform* poseRoot; // 0x48
		::System::Single weight; // 0x50
		::System::Single localRotationWeight; // 0x54
		::System::Single localPositionWeight; // 0x58
		::System::Boolean initiated; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_UPDATEMANUAL_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
