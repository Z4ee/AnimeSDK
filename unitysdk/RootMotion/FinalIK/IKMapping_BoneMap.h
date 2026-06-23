#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace RootMotion::FinalIK { class IKSolver_Node; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_FIXTONODE_OFFSET UNITYSDK_OFFSET(0x1E476A00)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_FIXTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E475BC0)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GETPLANEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E476B30)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GETTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x1E476D10)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GET_ISNODEBONE_OFFSET UNITYSDK_OFFSET(0x1E475C20)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GET_LASTANIMATEDTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x1E4766A0)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GET_SWINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E4759D0)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_INITIATE_OFFSET UNITYSDK_OFFSET(0x1E475950)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_MAINTAINROTATION_OFFSET UNITYSDK_OFFSET(0x1E476980)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_POSITIONTOPLANE_OFFSET UNITYSDK_OFFSET(0x1E476EB0)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_ROTATETOEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1E477820)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_ROTATETOMAINTAIN_OFFSET UNITYSDK_OFFSET(0x1E477770)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_ROTATETOPLANE_OFFSET UNITYSDK_OFFSET(0x1E476F00)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1E476920)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E475C30)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLOCALSWINGAXIS_1_OFFSET UNITYSDK_OFFSET(0x1E475D40)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLOCALSWINGAXIS_OFFSET UNITYSDK_OFFSET(0x1E475D30)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLOCALTWISTAXIS_OFFSET UNITYSDK_OFFSET(0x1E475FE0)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETPLANE_OFFSET UNITYSDK_OFFSET(0x1E476170)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETTOIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1E4769C0)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1E475B30)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SWING_1_OFFSET UNITYSDK_OFFSET(0x1E477120)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SWING_OFFSET UNITYSDK_OFFSET(0x1E477090)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_TWIST_OFFSET UNITYSDK_OFFSET(0x1E477450)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_UPDATEPLANE_OFFSET UNITYSDK_OFFSET(0x1E476300)
#define ROOTMOTION_FINALIK_IKMAPPING_BONEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E477980)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMapping_BoneMap_TypeDefinitionIndex = 38194;

	class IKMapping_BoneMap : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Int32 chainIndex; // 0x18
		::System::Int32 nodeIndex; // 0x1C
		::UnityEngine::Vector3 defaultLocalPosition; // 0x20
		::UnityEngine::Quaternion defaultLocalRotation; // 0x2C
		::UnityEngine::Vector3 localSwingAxis; // 0x3C
		::UnityEngine::Vector3 localTwistAxis; // 0x48
		::UnityEngine::Vector3 planePosition; // 0x54
		::UnityEngine::Vector3 ikPosition; // 0x60
		::UnityEngine::Quaternion defaultLocalTargetRotation; // 0x6C
		::UnityEngine::Quaternion maintainRotation; // 0x7C
		::System::Single length; // 0x8C
		::UnityEngine::Quaternion animatedRotation; // 0x90
		::UnityEngine::Transform* planeBone1; // 0xA0
		::UnityEngine::Transform* planeBone2; // 0xA8
		::UnityEngine::Transform* planeBone3; // 0xB0
		::System::Int32 plane1ChainIndex; // 0xB8
		::System::Int32 plane1NodeIndex; // 0xBC
		::System::Int32 plane2ChainIndex; // 0xC0
		::System::Int32 plane2NodeIndex; // 0xC4
		::System::Int32 plane3ChainIndex; // 0xC8
		::System::Int32 plane3NodeIndex; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP__CTOR_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Transform* transform, ::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_INITIATE_OFFSET))(this, transform, solver);
		}

		::UnityEngine::Vector3 get_swingDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GET_SWINGDIRECTION_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransform(::System::Boolean position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_FIXTRANSFORM_OFFSET))(this, position);
		}

		::System::Boolean get_isNodeBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GET_ISNODEBONE_OFFSET))(this);
		}

		::System::Void SetLength(::RootMotion::FinalIK::IKMapping_BoneMap* nextBone)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLENGTH_OFFSET))(this, nextBone);
		}

		::System::Void SetLocalSwingAxis(::RootMotion::FinalIK::IKMapping_BoneMap* swingTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLOCALSWINGAXIS_OFFSET))(this, swingTarget);
		}

		::System::Void SetLocalSwingAxis_1(::RootMotion::FinalIK::IKMapping_BoneMap* bone1, ::RootMotion::FinalIK::IKMapping_BoneMap* bone2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKMapping_BoneMap*, ::RootMotion::FinalIK::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLOCALSWINGAXIS_1_OFFSET))(this, bone1, bone2);
		}

		::System::Void SetLocalTwistAxis(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETLOCALTWISTAXIS_OFFSET))(this, twistDirection, normalDirection);
		}

		::System::Void SetPlane(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Transform* planeBone1, ::UnityEngine::Transform* planeBone2, ::UnityEngine::Transform* planeBone3)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETPLANE_OFFSET))(this, solver, planeBone1, planeBone2, planeBone3);
		}

		::System::Void UpdatePlane(::System::Boolean rotation, ::System::Boolean position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_UPDATEPLANE_OFFSET))(this, rotation, position);
		}

		::System::Void SetIKPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETIKPOSITION_OFFSET))(this);
		}

		::System::Void MaintainRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_MAINTAINROTATION_OFFSET))(this);
		}

		::System::Void SetToIKPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SETTOIKPOSITION_OFFSET))(this);
		}

		::System::Void FixToNode(::RootMotion::FinalIK::IKSolverFullBody* solver, ::System::Single weight, ::RootMotion::FinalIK::IKSolver_Node* fixNode)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::System::Single, ::RootMotion::FinalIK::IKSolver_Node*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_FIXTONODE_OFFSET))(this, solver, weight, fixNode);
		}

		::UnityEngine::Vector3 GetPlanePosition(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GETPLANEPOSITION_OFFSET))(this, solver);
		}

		::System::Void PositionToPlane(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_POSITIONTOPLANE_OFFSET))(this, solver);
		}

		::System::Void RotateToPlane(::RootMotion::FinalIK::IKSolverFullBody* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_ROTATETOPLANE_OFFSET))(this, solver, weight);
		}

		::System::Void Swing(::UnityEngine::Vector3 swingTarget, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SWING_OFFSET))(this, swingTarget, weight);
		}

		::System::Void Swing_1(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_SWING_1_OFFSET))(this, pos1, pos2, weight);
		}

		::System::Void Twist(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_TWIST_OFFSET))(this, twistDirection, normalDirection, weight);
		}

		::System::Void RotateToMaintain(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_ROTATETOMAINTAIN_OFFSET))(this, weight);
		}

		::System::Void RotateToEffector(::RootMotion::FinalIK::IKSolverFullBody* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_ROTATETOEFFECTOR_OFFSET))(this, solver, weight);
		}

		::UnityEngine::Quaternion GetTargetRotation(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GETTARGETROTATION_OFFSET))(this, solver);
		}

		::UnityEngine::Quaternion get_lastAnimatedTargetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKMAPPING_BONEMAP_GET_LASTANIMATEDTARGETROTATION_OFFSET))(this);
		}
	};
}
