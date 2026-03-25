#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"

namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_03F8818C1383CCD8_OFFSET UNITYSDK_OFFSET(0x9734CD0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_36FA1B7E64E1E8B3_OFFSET UNITYSDK_OFFSET(0x9734820)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x97349C0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_A461AC4695F6A5F0_OFFSET UNITYSDK_OFFSET(0x9734D20)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_ABE5700EAEB5AE29_OFFSET UNITYSDK_OFFSET(0x9734AB0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x9734BC0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9734A10)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x9734C60)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9734950)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x97348F0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMappingBone_TypeDefinitionIndex = 60908;

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

		::System::Boolean Method_2_36FA1B7E64E1E8B3(::RPG::Client::FullBody::IKSolver* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_36FA1B7E64E1E8B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_2_ABE5700EAEB5AE29(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_ABE5700EAEB5AE29_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
		}

		::System::Void Method_2_C4FDF5DB46830B8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_C4FDF5DB46830B8A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_03F8818C1383CCD8(::RPG::Client::FullBody::IKSolver* P0, ::System::String*& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_03F8818C1383CCD8_OFFSET))(this, P0, P1);
		}

		::System::Void Method_2_A461AC4695F6A5F0(::RPG::Client::FullBody::IKSolverFullBody* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_METHOD_2_A461AC4695F6A5F0_OFFSET))(this, P0);
		}
	};
}
