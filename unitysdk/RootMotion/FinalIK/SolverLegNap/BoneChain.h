#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/SolverLegNap/BoneChain_Node.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_APPENDENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3D7B20)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x1F3D7910)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETLASTBONEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3D8220)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETNODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3D7D70)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3D81B0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3D7DC0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F3D7210)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_MULUNIONSCALE_OFFSET UNITYSDK_OFFSET(0x1F3D7A70)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_NODEFROMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F3D7970)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_POSITIONAPPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1F3D8850)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_RESOLVEBONES_OFFSET UNITYSDK_OFFSET(0x1F3D7EA0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_RESOLVEDIRTY_OFFSET UNITYSDK_OFFSET(0x1F3D8840)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SCALEAPPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1F3D8890)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETFIRSTDIRTY_OFFSET UNITYSDK_OFFSET(0x1F3D7E30)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3D7BA0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETUPBONECHAINRETURNTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F3D7220)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETUPBONECHAIN_OFFSET UNITYSDK_OFFSET(0x1F3D7AE0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_WRITETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F3D82A0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D88B0)

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int BoneChain_TypeDefinitionIndex = 38846;

	class BoneChain : public ::System::Object
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::BoneChain_Node>* _nodes; // 0x10
		::System::Int32 _nodeCount; // 0x18
		::RootMotion::FinalIK::SolverLegNap::BoneChain_Node rootNode; // 0x1C
		::System::Int32 _firstDirty; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* SetupBoneChainReturnTransforms(::UnityEngine::Transform* from, ::UnityEngine::Transform* to, ::System::Int32 reservedAddNode)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETUPBONECHAINRETURNTRANSFORMS_OFFSET))(this, from, to, reservedAddNode);
		}

		::System::Void SetupBoneChain(::UnityEngine::Transform* from, ::UnityEngine::Transform* to)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETUPBONECHAIN_OFFSET))(this, from, to);
		}

		::System::Void AppendEndPosition(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 localPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_APPENDENDPOSITION_OFFSET))(this, position, localPosition);
		}

		::System::Void SetRotation(::System::Int32 idx, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETROTATION_OFFSET))(this, idx, rotation);
		}

		::UnityEngine::Quaternion GetRotation(::System::Int32 idx)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETROTATION_OFFSET))(this, idx);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 idx)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETPOSITION_OFFSET))(this, idx);
		}

		::UnityEngine::Vector3 GetLastBonePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETLASTBONEPOSITION_OFFSET))(this);
		}

		::System::Void WriteTransform(::UnityEngine::Transform* from, ::UnityEngine::Transform* to)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_WRITETRANSFORM_OFFSET))(this, from, to);
		}

		::System::Void ResolveDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_RESOLVEDIRTY_OFFSET))(this);
		}

		::System::Void ResolveBones(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_RESOLVEBONES_OFFSET))(this, idx);
		}

		::System::Void SetFirstDirty(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SETFIRSTDIRTY_OFFSET))(this, idx);
		}

		::System::Void EnsureSize(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_ENSURESIZE_OFFSET))(this, size);
		}

		::RootMotion::FinalIK::SolverLegNap::BoneChain_Node& GetNodeInternal(::System::Int32 idx)
		{
			return ((::RootMotion::FinalIK::SolverLegNap::BoneChain_Node&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_GETNODEINTERNAL_OFFSET))(this, idx);
		}

		static ::System::Boolean PositionApproximately(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_POSITIONAPPROXIMATELY_OFFSET))(p0, p1, epsilon);
		}

		static ::System::Boolean ScaleApproximately(::System::Single s0, ::System::Single s1, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_SCALEAPPROXIMATELY_OFFSET))(s0, s1, epsilon);
		}

		static ::System::Boolean MulUnionScale(::UnityEngine::Vector3 scale3D, ::System::Single& inOutScale)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_MULUNIONSCALE_OFFSET))(scale3D, inOutScale);
		}

		static ::System::Void NodeFromTransform(::RootMotion::FinalIK::SolverLegNap::BoneChain_Node& node, ::UnityEngine::Transform* transform, ::System::Single scale)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::SolverLegNap::BoneChain_Node&, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_NODEFROMTRANSFORM_OFFSET))(node, transform, scale);
		}
	};
}
