#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver.h"

namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingBone; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace RPG::Client::FullBody { class IKMappingSpine; }
namespace RPG::Client::FullBody { class IKSolver_Class_3_039EC88CFCC653F3_1; }
namespace RPG::Client::FullBody { class IKSolver_Class_3_50D343C44D28BEFB_11; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_021031D9935F927E_OFFSET UNITYSDK_OFFSET(0x16D33630)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_0507EB8022711947_OFFSET UNITYSDK_OFFSET(0x16D4A970)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x16D4BB40)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_16975C26AC475304_OFFSET UNITYSDK_OFFSET(0x16D3FD30)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_26F5E793BB51FC71_OFFSET UNITYSDK_OFFSET(0x16D4A6E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_370B283A2686728C_OFFSET UNITYSDK_OFFSET(0x16D3EFD0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_388538BD99159606_OFFSET UNITYSDK_OFFSET(0x16D4A550)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x16D4B020)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x16D4AE50)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_7142D89B39D12AB7_OFFSET UNITYSDK_OFFSET(0x16D4A660)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_79638E65BEE6EF1F_OFFSET UNITYSDK_OFFSET(0x16D3EC90)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x16D4AD10)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x16D4AB90)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_9E610EF313D0CC32_OFFSET UNITYSDK_OFFSET(0x16D4B630)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x16D4B350)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x16D4BAD0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4BCE0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverFullBody_TypeDefinitionIndex = 70862;

	class IKSolverFullBody : public ::RPG::Client::FullBody::IKSolver
	{
	public:
		::System::Int32 iterations; // 0x58
		::Il2CppArray<::RPG::Client::FullBody::FBIKChain*>* chain; // 0x60
		::Il2CppArray<::RPG::Client::FullBody::IKEffector*>* effectors; // 0x68
		::RPG::Client::FullBody::IKMappingSpine* spineMapping; // 0x70
		::Il2CppArray<::RPG::Client::FullBody::IKMappingBone*>* boneMappings; // 0x78
		::Il2CppArray<::RPG::Client::FullBody::IKMappingLimb*>* limbMappings; // 0x80
		::System::Boolean FABRIKPass; // 0x88
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_11* OnPreRead; // 0x90
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_11* OnPreSolve; // 0x98
		::RPG::Client::FullBody::IKSolver_Class_3_039EC88CFCC653F3_1* OnPreIteration; // 0xA0
		::RPG::Client::FullBody::IKSolver_Class_3_039EC88CFCC653F3_1* OnPostIteration; // 0xA8
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_11* OnPreBend; // 0xB0
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_11* OnPostSolve; // 0xB8
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_11* OnStoreDefaultLocalState; // 0xC0
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_11* OnFixTransforms; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY__CTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* Method_2_388538BD99159606(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_388538BD99159606_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::FBIKChain* Method_2_7142D89B39D12AB7(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_7142D89B39D12AB7_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_021031D9935F927E(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_021031D9935F927E_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKSolver_Node* Method_2_16975C26AC475304(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::FullBody::IKSolver_Node*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_16975C26AC475304_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_370B283A2686728C(::UnityEngine::Transform* a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_370B283A2686728C_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>* Method_2_26F5E793BB51FC71()
		{
			return ((::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_26F5E793BB51FC71_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver_Point* Method_2_79638E65BEE6EF1F(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_79638E65BEE6EF1F_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0507EB8022711947(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_0507EB8022711947_OFFSET))(this, a1);
		}

		::System::Void Method_2_921C3C3E09D59CD4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
		}

		::System::Void Method_2_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_2_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_4805283D59625FD9_OFFSET))(this);
		}

		::System::Void Method_2_3BFE3B9EF8374F61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
		}

		::System::Void Method_2_A59F33F8CA7F3A80()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_A59F33F8CA7F3A80_OFFSET))(this);
		}

		::System::Void Method_2_9E610EF313D0CC32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_9E610EF313D0CC32_OFFSET))(this);
		}

		::System::Void Method_2_D1305BC17A89C222()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_D1305BC17A89C222_OFFSET))(this);
		}

		::System::Void Method_2_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
		}
	};
}
