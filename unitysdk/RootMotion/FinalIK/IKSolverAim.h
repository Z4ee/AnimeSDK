#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverHeuristic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_Bone; }
namespace RootMotion::FinalIK { class IKSolver_IterationDelegate; }
namespace RootMotion::FinalIK { class RotationLimit; }
namespace RootMotion::FinalIK { class VirtualBone; }
namespace RootMotion::FinalIK { class VirtualChainBoneHierarchy; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERAIM_GETANGLE_OFFSET UNITYSDK_OFFSET(0x1BB34740)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_GETCLAMPEDIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BB36200)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_GET_ALLOWCOMMONPARENT_OFFSET UNITYSDK_OFFSET(0x1BB34730)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_GET_LOCALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1BB36A10)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_GET_MINBONES_OFFSET UNITYSDK_OFFSET(0x1BB36F40)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_GET_TRANSFORMAXIS_OFFSET UNITYSDK_OFFSET(0x1BB349D0)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_GET_TRANSFORMPOLEAXIS_OFFSET UNITYSDK_OFFSET(0x1BB34B40)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1BB34CB0)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB35520)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_ROTATETOTARGETVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1BB37D20)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_ROTATETOTARGET_OFFSET UNITYSDK_OFFSET(0x1BB36F50)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_SOLVEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1BB36C30)
#define ROOTMOTION_FINALIK_IKSOLVERAIM_SOLVE_OFFSET UNITYSDK_OFFSET(0x1BB36E30)
#define ROOTMOTION_FINALIK_IKSOLVERAIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB38840)
#define ROOTMOTION_FINALIK_IKSOLVERAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB38720)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverAim_TypeDefinitionIndex = 36613;

	class IKSolverAim : public ::RootMotion::FinalIK::IKSolverHeuristic
	{
	public:
		static ::System::String** StaticGet_DEFAULT_ID_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IKSolverAim_TypeDefinitionIndex)->GetStaticField(0x272A0);
		}
		::System::String* id; // 0x90
		::UnityEngine::Transform* transform; // 0x98
		::UnityEngine::Vector3 axis; // 0xA0
		::UnityEngine::Vector3 poleAxis; // 0xAC
		::UnityEngine::Vector3 polePosition; // 0xB8
		::System::Single poleWeight; // 0xC4
		::UnityEngine::Transform* poleTarget; // 0xC8
		::System::Single clampWeight; // 0xD0
		::System::Int32 clampSmoothing; // 0xD4
		::System::Boolean useVirtualBones; // 0xD8
		::Il2CppArray<::RootMotion::FinalIK::VirtualBone*>* virtualBones; // 0xE0
		::RootMotion::FinalIK::VirtualChainBoneHierarchy* virtualChainBoneHierarchy; // 0xE8
		::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration; // 0xF0
		::System::Single step; // 0xF8
		::UnityEngine::Vector3 clampedIKPosition; // 0xFC
		::RootMotion::FinalIK::RotationLimit* transformLimit; // 0x108
		::UnityEngine::Transform* lastTransform; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM__CCTOR_OFFSET))();
		}

		::System::Boolean get_allowCommonParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GET_ALLOWCOMMONPARENT_OFFSET))(this);
		}

		::System::Single GetAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GETANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_transformAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GET_TRANSFORMAXIS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_transformPoleAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GET_TRANSFORMPOLEAXIS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_ONUPDATE_OFFSET))(this);
		}

		::System::Int32 get_minBones()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GET_MINBONES_OFFSET))(this);
		}

		::System::Void Solve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_SOLVE_OFFSET))(this);
		}

		::System::Void SolveVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_SOLVEVIRTUAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetClampedIKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GETCLAMPEDIKPOSITION_OFFSET))(this);
		}

		::System::Void RotateToTarget(::UnityEngine::Vector3 targetPosition, ::RootMotion::FinalIK::IKSolver_Bone* bone, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RootMotion::FinalIK::IKSolver_Bone*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_ROTATETOTARGET_OFFSET))(this, targetPosition, bone, weight);
		}

		::System::Void RotateToTargetVirtual(::UnityEngine::Vector3 targetPosition, ::RootMotion::FinalIK::VirtualBone* bone, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RootMotion::FinalIK::VirtualBone*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_ROTATETOTARGETVIRTUAL_OFFSET))(this, targetPosition, bone, weight);
		}

		::UnityEngine::Vector3 get_localDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERAIM_GET_LOCALDIRECTION_OFFSET))(this);
		}
	};
}
