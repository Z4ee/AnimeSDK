#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_ISNODEBONE_OFFSET UNITYSDK_OFFSET(0x97325F0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_LASTANIMATEDTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x9733110)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_SWINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x97322E0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_036297786760DCCD_OFFSET UNITYSDK_OFFSET(0x97338D0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_1A473A8AF62E993A_OFFSET UNITYSDK_OFFSET(0x9733AB0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_2A3A99221D05589B_OFFSET UNITYSDK_OFFSET(0x9733520)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9733440)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x97334B0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x97333C0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4A5B3C87906AE918_OFFSET UNITYSDK_OFFSET(0x97327A0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_5422D32F23CD1298_OFFSET UNITYSDK_OFFSET(0x9734650)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_672E3DECEBB4A051_OFFSET UNITYSDK_OFFSET(0x9732DA0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_6A3DFC5A5BD896B1_OFFSET UNITYSDK_OFFSET(0x9732CB0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_7A012523248AE06A_OFFSET UNITYSDK_OFFSET(0x9733B40)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_871AC6DBEB0AF4F3_OFFSET UNITYSDK_OFFSET(0x9732AB0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_89CEA643C7DC0619_OFFSET UNITYSDK_OFFSET(0x9732260)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x9734560)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9732490)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_9C550482A5467161_OFFSET UNITYSDK_OFFSET(0x9732740)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0x9733D30)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_BF7FB88706E4AC65_OFFSET UNITYSDK_OFFSET(0x9733690)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_CFACABBC63158155_1_OFFSET UNITYSDK_OFFSET(0x97341C0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_CFACABBC63158155_OFFSET UNITYSDK_OFFSET(0x9733E20)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_F2FD171383AF1C78_OFFSET UNITYSDK_OFFSET(0x9732600)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x9732550)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x9734800)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMapping_BoneMap_TypeDefinitionIndex = 60907;

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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_89CEA643C7DC0619(::UnityEngine::Transform* a1, ::RPG::Client::FullBody::IKSolverFullBody* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_89CEA643C7DC0619_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_swingDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_SWINGDIRECTION_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
		}

		::System::Boolean get_isNodeBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_ISNODEBONE_OFFSET))(this);
		}

		::System::Void Method_1_F2FD171383AF1C78(::RPG::Client::FullBody::IKMapping_BoneMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_F2FD171383AF1C78_OFFSET))(this, a1);
		}

		::System::Void Method_1_9C550482A5467161(::RPG::Client::FullBody::IKMapping_BoneMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_9C550482A5467161_OFFSET))(this, a1);
		}

		::System::Void Method_1_4A5B3C87906AE918(::RPG::Client::FullBody::IKMapping_BoneMap* a1, ::RPG::Client::FullBody::IKMapping_BoneMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMapping_BoneMap*, ::RPG::Client::FullBody::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4A5B3C87906AE918_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_871AC6DBEB0AF4F3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_871AC6DBEB0AF4F3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_6A3DFC5A5BD896B1(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_6A3DFC5A5BD896B1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_672E3DECEBB4A051(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_672E3DECEBB4A051_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_1_2A3A99221D05589B(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Single a2, ::RPG::Client::FullBody::IKSolver_Node* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Single, ::RPG::Client::FullBody::IKSolver_Node*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_2A3A99221D05589B_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_1_BF7FB88706E4AC65(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_BF7FB88706E4AC65_OFFSET))(this, a1);
		}

		::System::Void Method_1_1A473A8AF62E993A(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_1A473A8AF62E993A_OFFSET))(this, a1);
		}

		::System::Void Method_1_7A012523248AE06A(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_7A012523248AE06A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_A03C765EBC5D1677(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CFACABBC63158155(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_CFACABBC63158155_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CFACABBC63158155_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_CFACABBC63158155_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
		}

		::System::Void Method_1_5422D32F23CD1298(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_5422D32F23CD1298_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion Method_1_036297786760DCCD(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_METHOD_1_036297786760DCCD_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_lastAnimatedTargetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_LASTANIMATEDTARGETROTATION_OFFSET))(this);
		}
	};
}
