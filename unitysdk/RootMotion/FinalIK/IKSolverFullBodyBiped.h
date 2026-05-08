#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedChain.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverFullBody.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion { class BipedLimbOrientations; }
namespace RootMotion { class BipedLimbOrientations_LimbOrientation; }
namespace RootMotion { class BipedReferences; }
namespace RootMotion::FinalIK { class FBIKChain; }
namespace RootMotion::FinalIK { class IKConstraintBend; }
namespace RootMotion::FinalIK { class IKEffector; }
namespace RootMotion::FinalIK { class IKMappingBone; }
namespace RootMotion::FinalIK { class IKMappingLimb; }
namespace RootMotion::FinalIK { class IKMappingSpine; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_APPLYBENDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1BC93C30)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BC93120)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_DETECTROOTNODEBONE_OFFSET UNITYSDK_OFFSET(0x1BC92600)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETBENDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1BC90150)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETBODYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BC93800)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETCHAIN_1_OFFSET UNITYSDK_OFFSET(0x1BC8FB00)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETCHAIN_OFFSET UNITYSDK_OFFSET(0x1BC8F960)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F280)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8FD10)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETHANDBODYPULL_OFFSET UNITYSDK_OFFSET(0x1BC93A40)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETHEADMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC90110)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETLEFTCLAVICLE_OFFSET UNITYSDK_OFFSET(0x1BC92B80)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETLIMBMAPPING_1_OFFSET UNITYSDK_OFFSET(0x1BC8FF20)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETLIMBMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC8FE10)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETRIGHTCLAVICLE_OFFSET UNITYSDK_OFFSET(0x1BC92D00)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETSPINEMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC90100)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_BODYEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F240)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_HEADMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC8F8C0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTARMCHAIN_OFFSET UNITYSDK_OFFSET(0x1BC8F6C0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTARMMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC8F7C0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTFOOTEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F640)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTHANDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F5C0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTLEGCHAIN_OFFSET UNITYSDK_OFFSET(0x1BC8F740)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTLEGMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC8F840)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTSHOULDEREFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F4C0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTTHIGHEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F540)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_PULLBODYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BC930E0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTARMCHAIN_OFFSET UNITYSDK_OFFSET(0x1BC8F700)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTARMMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC8F800)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTFOOTEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F680)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTHANDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F600)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGCHAIN_OFFSET UNITYSDK_OFFSET(0x1BC8F780)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGMAPPING_OFFSET UNITYSDK_OFFSET(0x1BC8F880)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTSHOULDEREFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F500)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTTHIGHEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC8F580)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BC90260)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_PULLBODY_OFFSET UNITYSDK_OFFSET(0x1BC93310)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_READPOSE_OFFSET UNITYSDK_OFFSET(0x1BC931D0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETCHAINWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1BC8F900)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETEFFECTORWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1BC8FA60)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETLIMBORIENTATIONS_OFFSET UNITYSDK_OFFSET(0x1BC92E80)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETLIMBORIENTATION_OFFSET UNITYSDK_OFFSET(0x1BC92EE0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETTOREFERENCES_OFFSET UNITYSDK_OFFSET(0x1BC90560)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SET_PULLBODYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BC93100)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_WRITEPOSE_OFFSET UNITYSDK_OFFSET(0x1BC94220)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC942F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverFullBodyBiped_TypeDefinitionIndex = 36621;

	class IKSolverFullBodyBiped : public ::RootMotion::FinalIK::IKSolverFullBody
	{
	public:
		::UnityEngine::Transform* rootNode; // 0xD8
		::System::Single spineStiffness; // 0xE0
		::System::Single pullBodyVertical; // 0xE4
		::System::Single pullBodyHorizontal; // 0xE8
		::UnityEngine::Vector3 _pullBodyOffset_k__BackingField; // 0xEC
		::UnityEngine::Vector3 offset; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_bodyEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_BODYEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_leftShoulderEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTSHOULDEREFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_rightShoulderEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTSHOULDEREFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_leftThighEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTTHIGHEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_rightThighEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTTHIGHEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_leftHandEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTHANDEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_rightHandEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTHANDEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_leftFootEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTFOOTEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_rightFootEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTFOOTEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::FBIKChain* get_leftArmChain()
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTARMCHAIN_OFFSET))(this);
		}

		::RootMotion::FinalIK::FBIKChain* get_rightArmChain()
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTARMCHAIN_OFFSET))(this);
		}

		::RootMotion::FinalIK::FBIKChain* get_leftLegChain()
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTLEGCHAIN_OFFSET))(this);
		}

		::RootMotion::FinalIK::FBIKChain* get_rightLegChain()
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGCHAIN_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKMappingLimb* get_leftArmMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTARMMAPPING_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKMappingLimb* get_rightArmMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTARMMAPPING_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKMappingLimb* get_leftLegMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_LEFTLEGMAPPING_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKMappingLimb* get_rightLegMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGMAPPING_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKMappingBone* get_headMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_HEADMAPPING_OFFSET))(this);
		}

		::System::Void SetChainWeights(::RootMotion::FinalIK::FullBodyBipedChain c, ::System::Single pull, ::System::Single reach)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETCHAINWEIGHTS_OFFSET))(this, c, pull, reach);
		}

		::System::Void SetEffectorWeights(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::System::Single positionWeight, ::System::Single rotationWeight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETEFFECTORWEIGHTS_OFFSET))(this, effector, positionWeight, rotationWeight);
		}

		::RootMotion::FinalIK::FBIKChain* GetChain(::RootMotion::FinalIK::FullBodyBipedChain c)
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETCHAIN_OFFSET))(this, c);
		}

		::RootMotion::FinalIK::FBIKChain* GetChain_1(::RootMotion::FinalIK::FullBodyBipedEffector effector)
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETCHAIN_1_OFFSET))(this, effector);
		}

		::RootMotion::FinalIK::IKEffector* GetEffector(::RootMotion::FinalIK::FullBodyBipedEffector effector)
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETEFFECTOR_OFFSET))(this, effector);
		}

		::RootMotion::FinalIK::IKEffector* GetEndEffector(::RootMotion::FinalIK::FullBodyBipedChain c)
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETENDEFFECTOR_OFFSET))(this, c);
		}

		::RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(::RootMotion::FinalIK::FullBodyBipedChain chain)
		{
			return ((::RootMotion::FinalIK::IKMappingLimb*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETLIMBMAPPING_OFFSET))(this, chain);
		}

		::RootMotion::FinalIK::IKMappingLimb* GetLimbMapping_1(::RootMotion::FinalIK::FullBodyBipedEffector effector)
		{
			return ((::RootMotion::FinalIK::IKMappingLimb*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETLIMBMAPPING_1_OFFSET))(this, effector);
		}

		::RootMotion::FinalIK::IKMappingSpine* GetSpineMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingSpine*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETSPINEMAPPING_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKMappingBone* GetHeadMapping()
		{
			return ((::RootMotion::FinalIK::IKMappingBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETHEADMAPPING_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKConstraintBend* GetBendConstraint(::RootMotion::FinalIK::FullBodyBipedChain limb)
		{
			return ((::RootMotion::FinalIK::IKConstraintBend*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETBENDCONSTRAINT_OFFSET))(this, limb);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_ISVALID_OFFSET))(this, message);
		}

		::System::Void SetToReferences(::RootMotion::BipedReferences* references, ::UnityEngine::Transform* rootNode)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedReferences*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETTOREFERENCES_OFFSET))(this, references, rootNode);
		}

		static ::UnityEngine::Transform* DetectRootNodeBone(::RootMotion::BipedReferences* references)
		{
			return ((::UnityEngine::Transform*(*)(::RootMotion::BipedReferences*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_DETECTROOTNODEBONE_OFFSET))(references);
		}

		::System::Void SetLimbOrientations(::RootMotion::BipedLimbOrientations* o)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedLimbOrientations*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETLIMBORIENTATIONS_OFFSET))(this, o);
		}

		::UnityEngine::Vector3 get_pullBodyOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GET_PULLBODYOFFSET_OFFSET))(this);
		}

		::System::Void set_pullBodyOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SET_PULLBODYOFFSET_OFFSET))(this, value);
		}

		::System::Void SetLimbOrientation(::RootMotion::FinalIK::FullBodyBipedChain chain, ::RootMotion::BipedLimbOrientations_LimbOrientation* limbOrientation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain, ::RootMotion::BipedLimbOrientations_LimbOrientation*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_SETLIMBORIENTATION_OFFSET))(this, chain, limbOrientation);
		}

		static ::UnityEngine::Transform* GetLeftClavicle(::RootMotion::BipedReferences* references)
		{
			return ((::UnityEngine::Transform*(*)(::RootMotion::BipedReferences*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETLEFTCLAVICLE_OFFSET))(references);
		}

		static ::UnityEngine::Transform* GetRightClavicle(::RootMotion::BipedReferences* references)
		{
			return ((::UnityEngine::Transform*(*)(::RootMotion::BipedReferences*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETRIGHTCLAVICLE_OFFSET))(references);
		}

		static ::System::Boolean Contains(::Il2CppArray<::UnityEngine::Transform*>* array, ::UnityEngine::Transform* transform)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_CONTAINS_OFFSET))(array, transform);
		}

		::System::Void ReadPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_READPOSE_OFFSET))(this);
		}

		::System::Void PullBody()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_PULLBODY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBodyOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETBODYOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetHandBodyPull(::RootMotion::FinalIK::IKEffector* effector, ::RootMotion::FinalIK::FBIKChain* arm, ::UnityEngine::Vector3 offset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKEffector*, ::RootMotion::FinalIK::FBIKChain*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_GETHANDBODYPULL_OFFSET))(this, effector, arm, offset);
		}

		::System::Void ApplyBendConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_APPLYBENDCONSTRAINTS_OFFSET))(this);
		}

		::System::Void WritePose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODYBIPED_WRITEPOSE_OFFSET))(this);
		}
	};
}
