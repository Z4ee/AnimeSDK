#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKMapping.h"
#include "unitysdk/RootMotion/FinalIK/IKMappingLimb_BoneMapType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKMapping_BoneMap; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F3CD4B0)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_GETBONEMAP_OFFSET UNITYSDK_OFFSET(0x1F3CC6A0)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F3CD6F0)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F3CC620)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_READPOSE_OFFSET UNITYSDK_OFFSET(0x1F3CDB60)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_SETBONES_OFFSET UNITYSDK_OFFSET(0x1F3CD130)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_SETLIMBORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F3CC870)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F3CD150)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB_WRITEPOSE_OFFSET UNITYSDK_OFFSET(0x1F3CDC10)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3CD000)
#define ROOTMOTION_FINALIK_IKMAPPINGLIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CCF00)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMappingLimb_TypeDefinitionIndex = 38804;

	class IKMappingLimb : public ::RootMotion::FinalIK::IKMapping
	{
	public:
		::UnityEngine::Transform* parentBone; // 0x10
		::UnityEngine::Transform* bone1; // 0x18
		::UnityEngine::Transform* bone2; // 0x20
		::UnityEngine::Transform* bone3; // 0x28
		::System::Single maintainRotationWeight; // 0x30
		::System::Single weight; // 0x34
		::System::Boolean updatePlaneRotations; // 0x38
		::RootMotion::FinalIK::IKMapping_BoneMap* boneMapParent; // 0x40
		::RootMotion::FinalIK::IKMapping_BoneMap* boneMap1; // 0x48
		::RootMotion::FinalIK::IKMapping_BoneMap* boneMap2; // 0x50
		::RootMotion::FinalIK::IKMapping_BoneMap* boneMap3; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* parentBone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB__CTOR_1_OFFSET))(this, bone1, bone2, bone3, parentBone);
		}

		::System::Boolean IsValid(::RootMotion::FinalIK::IKSolver* solver, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_ISVALID_OFFSET))(this, solver, message);
		}

		::RootMotion::FinalIK::IKMapping_BoneMap* GetBoneMap(::RootMotion::FinalIK::IKMappingLimb_BoneMapType boneMap)
		{
			return ((::RootMotion::FinalIK::IKMapping_BoneMap*(*)(::PVOID, ::RootMotion::FinalIK::IKMappingLimb_BoneMapType))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_GETBONEMAP_OFFSET))(this, boneMap);
		}

		::System::Void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_SETLIMBORIENTATION_OFFSET))(this, upper, lower);
		}

		::System::Void SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* parentBone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_SETBONES_OFFSET))(this, bone1, bone2, bone3, parentBone);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_INITIATE_OFFSET))(this, solver);
		}

		::System::Void ReadPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_READPOSE_OFFSET))(this);
		}

		::System::Void WritePose(::RootMotion::FinalIK::IKSolverFullBody* solver, ::System::Boolean fullBody)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGLIMB_WRITEPOSE_OFFSET))(this, solver, fullBody);
		}
	};
}
