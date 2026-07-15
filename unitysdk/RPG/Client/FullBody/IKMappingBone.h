#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"

namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_1053A0403E1C1BAA_OFFSET UNITYSDK_OFFSET(0x16D44590)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x16D446D0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x16D448A0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16D44720)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x16D44940)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_DB89C3F439E2B61F_OFFSET UNITYSDK_OFFSET(0x16D447C0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16D44680)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D44630)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMappingBone_TypeDefinitionIndex = 70852;

	class IKMappingBone : public ::RPG::Client::FullBody::IKMapping
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::System::Single maintainRotationWeight; // 0x18
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1053A0403E1C1BAA(::RPG::Client::FullBody::IKSolver* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_1053A0403E1C1BAA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_2_DB89C3F439E2B61F(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_DB89C3F439E2B61F_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
		}

		::System::Void Method_2_C4FDF5DB46830B8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_C4FDF5DB46830B8A_OFFSET))(this, a1);
		}
	};
}
