#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion { class Warning_Logger; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKMAPPING_BONEISVALID_OFFSET UNITYSDK_OFFSET(0x1EE3F7F0)
#define ROOTMOTION_FINALIK_IKMAPPING_INITIATE_OFFSET UNITYSDK_OFFSET(0x1EE3F7E0)
#define ROOTMOTION_FINALIK_IKMAPPING_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EE3F7D0)
#define ROOTMOTION_FINALIK_IKMAPPING_SOLVEFABRIKJOINT_OFFSET UNITYSDK_OFFSET(0x1EE3FF20)
#define ROOTMOTION_FINALIK_IKMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE3FFD0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMapping_TypeDefinitionIndex = 38830;

	class IKMapping : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::RootMotion::FinalIK::IKSolver* solver, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_ISVALID_OFFSET))(this, solver, message);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_INITIATE_OFFSET))(this, solver);
		}

		::System::Boolean BoneIsValid(::UnityEngine::Transform* bone, ::RootMotion::FinalIK::IKSolver* solver, ::System::String*& message, ::RootMotion::Warning_Logger* logger)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolver*, ::System::String*&, ::RootMotion::Warning_Logger*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEISVALID_OFFSET))(this, bone, solver, message, logger);
		}

		::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::System::Single length)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_SOLVEFABRIKJOINT_OFFSET))(this, pos1, pos2, length);
		}
	};
}
