#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKMapping.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKMapping_BoneMap; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_BACKWARDREACH_OFFSET UNITYSDK_OFFSET(0x1F296B10)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F2952F0)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_FORWARDREACH_OFFSET UNITYSDK_OFFSET(0x1F296950)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F295450)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F2948F0)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_MAPTOSOLVERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1F296C90)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_READPOSE_OFFSET UNITYSDK_OFFSET(0x1F295F30)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_SETBONES_OFFSET UNITYSDK_OFFSET(0x1F2951D0)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F2951F0)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_USEFABRIK_OFFSET UNITYSDK_OFFSET(0x1F295F00)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE_WRITEPOSE_OFFSET UNITYSDK_OFFSET(0x1F296450)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F295080)
#define ROOTMOTION_FINALIK_IKMAPPINGSPINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F294F70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMappingSpine_TypeDefinitionIndex = 39006;

	class IKMappingSpine : public ::RootMotion::FinalIK::IKMapping
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* spineBones; // 0x10
		::UnityEngine::Transform* leftUpperArmBone; // 0x18
		::UnityEngine::Transform* rightUpperArmBone; // 0x20
		::UnityEngine::Transform* leftThighBone; // 0x28
		::UnityEngine::Transform* rightThighBone; // 0x30
		::System::Int32 iterations; // 0x38
		::System::Single twistWeight; // 0x3C
		::System::Int32 rootNodeIndex; // 0x40
		::Il2CppArray<::RootMotion::FinalIK::IKMapping_BoneMap*>* spine; // 0x48
		::RootMotion::FinalIK::IKMapping_BoneMap* leftUpperArm; // 0x50
		::RootMotion::FinalIK::IKMapping_BoneMap* rightUpperArm; // 0x58
		::RootMotion::FinalIK::IKMapping_BoneMap* leftThigh; // 0x60
		::RootMotion::FinalIK::IKMapping_BoneMap* rightThigh; // 0x68
		::System::Boolean useFABRIK; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Transform*>* spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone, ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE__CTOR_1_OFFSET))(this, spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone);
		}

		::System::Boolean IsValid(::RootMotion::FinalIK::IKSolver* solver, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_ISVALID_OFFSET))(this, solver, message);
		}

		::System::Void SetBones(::Il2CppArray<::UnityEngine::Transform*>* spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone, ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_SETBONES_OFFSET))(this, spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_INITIATE_OFFSET))(this, solver);
		}

		::System::Boolean UseFABRIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_USEFABRIK_OFFSET))(this);
		}

		::System::Void ReadPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_READPOSE_OFFSET))(this);
		}

		::System::Void WritePose(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_WRITEPOSE_OFFSET))(this, solver);
		}

		::System::Void ForwardReach(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_FORWARDREACH_OFFSET))(this, position);
		}

		::System::Void BackwardReach(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_BACKWARDREACH_OFFSET))(this, position);
		}

		::System::Void MapToSolverPositions(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPINGSPINE_MAPTOSOLVERPOSITIONS_OFFSET))(this, solver);
		}
	};
}
