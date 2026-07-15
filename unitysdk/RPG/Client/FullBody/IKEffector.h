#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKEFFECTOR_GET_ISENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x16D3FE70)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_036297786760DCCD_OFFSET UNITYSDK_OFFSET(0x16D411E0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_03A1AC84763ACA7B_OFFSET UNITYSDK_OFFSET(0x16D3FE90)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_3E66374F7EBEF0C3_OFFSET UNITYSDK_OFFSET(0x16D40850)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_427DA2D5A5420560_OFFSET UNITYSDK_OFFSET(0x16D40A20)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_4D9D8D32416652E5_OFFSET UNITYSDK_OFFSET(0x16D413D0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_AC41839A69ACE562_OFFSET UNITYSDK_OFFSET(0x16D41780)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16D40970)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_B7420C119DD5CDA0_OFFSET UNITYSDK_OFFSET(0x16D40150)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D41190)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_E7EA3C355E8D3AFF_OFFSET UNITYSDK_OFFSET(0x16D3FDD0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_F488396416325F74_OFFSET UNITYSDK_OFFSET(0x16D405C0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_SET_ISENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x16D3FE80)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16D40080)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3FFC0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKEffector_TypeDefinitionIndex = 70849;

	class IKEffector : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::System::Single positionWeight; // 0x20
		::System::Single rotationWeight; // 0x24
		::UnityEngine::Vector3 position; // 0x28
		::UnityEngine::Quaternion rotation; // 0x34
		::UnityEngine::Vector3 positionOffset; // 0x44
		::System::Boolean _isEndEffector_k__BackingField; // 0x50
		::System::Boolean effectChildNodes; // 0x51
		::System::Single maintainRelativePositionWeight; // 0x54
		::Il2CppArray<::UnityEngine::Transform*>* childBones; // 0x58
		::UnityEngine::Transform* planeBone1; // 0x60
		::UnityEngine::Transform* planeBone2; // 0x68
		::UnityEngine::Transform* planeBone3; // 0x70
		::UnityEngine::Quaternion planeRotationOffset; // 0x78
		::System::Single posW; // 0x88
		::System::Single rotW; // 0x8C
		::Il2CppArray<::UnityEngine::Vector3>* localPositions; // 0x90
		::System::Boolean usePlaneNodes; // 0x98
		::UnityEngine::Quaternion animatedPlaneRotation; // 0x9C
		::UnityEngine::Vector3 animatedPosition; // 0xAC
		::System::Boolean firstUpdate; // 0xB8
		::System::Int32 chainIndex; // 0xBC
		::System::Int32 nodeIndex; // 0xC0
		::System::Int32 plane1ChainIndex; // 0xC4
		::System::Int32 plane1NodeIndex; // 0xC8
		::System::Int32 plane2ChainIndex; // 0xCC
		::System::Int32 plane2NodeIndex; // 0xD0
		::System::Int32 plane3ChainIndex; // 0xD4
		::System::Int32 plane3NodeIndex; // 0xD8
		::Il2CppArray<::System::Int32>* childChainIndexes; // 0xE0
		::Il2CppArray<::System::Int32>* childNodeIndexes; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FullBody::IKSolver_Node* Method_1_E7EA3C355E8D3AFF(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Node*(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_E7EA3C355E8D3AFF_OFFSET))(this, a1);
		}

		::System::Boolean get_isEndEffector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_GET_ISENDEFFECTOR_OFFSET))(this);
		}

		::System::Void set_isEndEffector(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_SET_ISENDEFFECTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_03A1AC84763ACA7B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_03A1AC84763ACA7B_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_B7420C119DD5CDA0(::RPG::Client::FullBody::IKSolver* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_B7420C119DD5CDA0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_F488396416325F74(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_F488396416325F74_OFFSET))(this, a1);
		}

		::System::Void Method_1_3E66374F7EBEF0C3(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_3E66374F7EBEF0C3_OFFSET))(this, a1);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_427DA2D5A5420560(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_427DA2D5A5420560_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_1_036297786760DCCD(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_036297786760DCCD_OFFSET))(this, a1);
		}

		::System::Void Method_1_4D9D8D32416652E5(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_4D9D8D32416652E5_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_AC41839A69ACE562(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_METHOD_1_AC41839A69ACE562_OFFSET))(this, a1, a2);
		}
	};
}
