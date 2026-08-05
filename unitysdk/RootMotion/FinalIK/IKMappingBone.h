#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKMapping.h"

namespace RootMotion::FinalIK { class IKMapping_BoneMap; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKMAPPINGBONE_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F429170)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F4291B0)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F428ED0)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE_READPOSE_OFFSET UNITYSDK_OFFSET(0x1F429230)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F4290E0)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE_WRITEPOSE_OFFSET UNITYSDK_OFFSET(0x1F429280)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F429070)
#define ROOTMOTION_FINALIK_IKMAPPINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F429010)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMappingBone_TypeDefinitionIndex = 38863;

	class IKMappingBone : public ::RootMotion::FinalIK::IKMapping
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::System::Single maintainRotationWeight; // 0x18
		::RootMotion::FinalIK::IKMapping_BoneMap* boneMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* bone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE__CTOR_1_OFFSET))(this, bone);
		}

		::System::Boolean IsValid(::RootMotion::FinalIK::IKSolver* solver, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE_ISVALID_OFFSET))(this, solver, message);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE_INITIATE_OFFSET))(this, solver);
		}

		::System::Void ReadPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE_READPOSE_OFFSET))(this);
		}

		::System::Void WritePose(::System::Single solverWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGBONE_WRITEPOSE_OFFSET))(this, solverWeight);
		}
	};
}
