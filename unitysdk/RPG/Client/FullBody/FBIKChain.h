#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FBIKChain_Smoothing.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class FBIKChain_ChildConstraint; }
namespace RPG::Client::FullBody { class IKConstraintBend; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_0F8F19F95968811E_OFFSET UNITYSDK_OFFSET(0xA3E1BD0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_11B44307560B914A_1_OFFSET UNITYSDK_OFFSET(0xA3DF400)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_11B44307560B914A_OFFSET UNITYSDK_OFFSET(0xA3DDBF0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_34F7947C923561B2_OFFSET UNITYSDK_OFFSET(0xA3DD850)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_48BB9C73BC77AAA5_OFFSET UNITYSDK_OFFSET(0xA3E17E0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_4E79B4E99E5C3D83_OFFSET UNITYSDK_OFFSET(0xA3E13B0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_7070204E61FA9553_OFFSET UNITYSDK_OFFSET(0xA3E19B0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_71844229BB8A53C3_OFFSET UNITYSDK_OFFSET(0xA3E0A70)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_78BD4A344A184282_OFFSET UNITYSDK_OFFSET(0xA3DD590)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_ACEEEF175975141F_OFFSET UNITYSDK_OFFSET(0xA3DFBA0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_ADE65C435D7ECF4B_OFFSET UNITYSDK_OFFSET(0xA3DD910)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B10F9C763249D5FB_OFFSET UNITYSDK_OFFSET(0xA3DD720)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B2270891467A6E08_OFFSET UNITYSDK_OFFSET(0xA3E0DF0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B38B48E6FC310048_OFFSET UNITYSDK_OFFSET(0xA3DEA10)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B7150905C6969EA6_OFFSET UNITYSDK_OFFSET(0xA3DF780)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0xA3E1640)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_CCE12794AD0BC1CF_OFFSET UNITYSDK_OFFSET(0xA3E1DB0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_D945CEAD343B5366_OFFSET UNITYSDK_OFFSET(0xA3E1590)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA3DD4B0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DD400)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int FBIKChain_TypeDefinitionIndex = 68333;

	class FBIKChain : public ::System::Object
	{
	public:
		// static const ::System::Single maxLimbLength; // 0x0
		::System::Single pin; // 0x10
		::System::Single pull; // 0x14
		::System::Single push; // 0x18
		::System::Single pushParent; // 0x1C
		::System::Single reach; // 0x20
		::RPG::Client::FullBody::FBIKChain_Smoothing reachSmoothing; // 0x24
		::RPG::Client::FullBody::FBIKChain_Smoothing pushSmoothing; // 0x28
		::Il2CppArray<::RPG::Client::FullBody::IKSolver_Node*>* nodes; // 0x30
		::Il2CppArray<::System::Int32>* children; // 0x38
		::Il2CppArray<::RPG::Client::FullBody::FBIKChain_ChildConstraint*>* childConstraints; // 0x40
		::RPG::Client::FullBody::IKConstraintBend* bendConstraint; // 0x48
		::System::Single rootLength; // 0x50
		::System::Boolean initiated; // 0x54
		::System::Single length; // 0x58
		::System::Single distance; // 0x5C
		::RPG::Client::FullBody::IKSolver_Point* p; // 0x60
		::System::Single reachForce; // 0x68
		::System::Single pullParentSum; // 0x6C
		::Il2CppArray<::System::Single>* crossFades; // 0x70
		::System::Single sqrMag1; // 0x78
		::System::Single sqrMag2; // 0x7C
		::System::Single sqrMagDif; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Transform*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_78BD4A344A184282(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_78BD4A344A184282_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_B10F9C763249D5FB(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B10F9C763249D5FB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_34F7947C923561B2(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_34F7947C923561B2_OFFSET))(this, a1);
		}

		::System::Void Method_1_ADE65C435D7ECF4B(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_ADE65C435D7ECF4B_OFFSET))(this, a1);
		}

		::System::Void Method_1_B38B48E6FC310048(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B38B48E6FC310048_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_11B44307560B914A(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_11B44307560B914A_OFFSET))(this, a1);
		}

		::System::Void Method_1_11B44307560B914A_1(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_11B44307560B914A_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_B7150905C6969EA6(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B7150905C6969EA6_OFFSET))(this, a1);
		}

		::System::Void Method_1_ACEEEF175975141F(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_ACEEEF175975141F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B2270891467A6E08(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_B2270891467A6E08_OFFSET))(this, a1);
		}

		::System::Void Method_1_48BB9C73BC77AAA5(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_48BB9C73BC77AAA5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0F8F19F95968811E(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_0F8F19F95968811E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_CA9AD3D703CC4954(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_CA9AD3D703CC4954_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_1_71844229BB8A53C3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_71844229BB8A53C3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_D945CEAD343B5366(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_D945CEAD343B5366_OFFSET))(this, a1);
		}

		::System::Void Method_1_CCE12794AD0BC1CF(::RPG::Client::FullBody::IKSolver_Node* a1, ::RPG::Client::FullBody::IKSolver_Node* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolver_Node*, ::RPG::Client::FullBody::IKSolver_Node*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_CCE12794AD0BC1CF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_4E79B4E99E5C3D83(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_4E79B4E99E5C3D83_OFFSET))(this, a1);
		}

		::System::Void Method_1_7070204E61FA9553(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_METHOD_1_7070204E61FA9553_OFFSET))(this, a1);
		}
	};
}
