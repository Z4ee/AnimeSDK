#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver.h"

namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingBone; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace RPG::Client::FullBody { class IKMappingSpine; }
namespace RPG::Client::FullBody { class IKSolver_Class_3_039EC88CFCC653F3_1; }
namespace RPG::Client::FullBody { class IKSolver_Class_3_50D343C44D28BEFB_9; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_021031D9935F927E_OFFSET UNITYSDK_OFFSET(0x97217E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x973C860)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_16975C26AC475304_OFFSET UNITYSDK_OFFSET(0x97300E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x973BDA0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_370B283A2686728C_OFFSET UNITYSDK_OFFSET(0x972F380)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_388538BD99159606_OFFSET UNITYSDK_OFFSET(0x973B1B0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x973C7E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x973BBA0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_543F8938BA868A0C_OFFSET UNITYSDK_OFFSET(0x973BA50)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_5C5F7B9A709C2135_OFFSET UNITYSDK_OFFSET(0x973C300)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_7142D89B39D12AB7_OFFSET UNITYSDK_OFFSET(0x973B2F0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_79638E65BEE6EF1F_OFFSET UNITYSDK_OFFSET(0x972F010)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x973BFB0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_B3CBC181390C9CD1_OFFSET UNITYSDK_OFFSET(0x973B8C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_DAB65F30E4454DBE_OFFSET UNITYSDK_OFFSET(0x973B630)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_F3A1044BBFF26F51_OFFSET UNITYSDK_OFFSET(0x973B380)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x973CA10)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverFullBody_TypeDefinitionIndex = 60918;

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
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPreRead; // 0x90
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPreSolve; // 0x98
		::RPG::Client::FullBody::IKSolver_Class_3_039EC88CFCC653F3_1* OnPreIteration; // 0xA0
		::RPG::Client::FullBody::IKSolver_Class_3_039EC88CFCC653F3_1* OnPostIteration; // 0xA8
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPreBend; // 0xB0
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPostSolve; // 0xB8
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnStoreDefaultLocalState; // 0xC0
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnFixTransforms; // 0xC8

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

		::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>* Method_2_F3A1044BBFF26F51()
		{
			return ((::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_F3A1044BBFF26F51_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver_Point* Method_2_79638E65BEE6EF1F(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_79638E65BEE6EF1F_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_DAB65F30E4454DBE(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_DAB65F30E4454DBE_OFFSET))(this, a1);
		}

		::System::Void Method_2_B3CBC181390C9CD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_B3CBC181390C9CD1_OFFSET))(this);
		}

		::System::Void Method_2_543F8938BA868A0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_543F8938BA868A0C_OFFSET))(this);
		}

		::System::Void Method_2_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_4805283D59625FD9_OFFSET))(this);
		}

		::System::Void Method_2_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
		}

		::System::Void Method_2_A59F33F8CA7F3A80()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_A59F33F8CA7F3A80_OFFSET))(this);
		}

		::System::Void Method_2_5C5F7B9A709C2135()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_5C5F7B9A709C2135_OFFSET))(this);
		}

		::System::Void Method_2_40EBA7013E4CCDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
		}

		::System::Void Method_2_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
		}
	};
}
