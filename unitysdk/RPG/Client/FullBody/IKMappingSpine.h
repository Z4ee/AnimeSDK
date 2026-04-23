#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_03F8818C1383CCD8_OFFSET UNITYSDK_OFFSET(0xA3F95E0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0xA3F73B0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA3F7310)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA3F8160)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xA3F81C0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_2F0DC1CA1AADEABC_OFFSET UNITYSDK_OFFSET(0xA3F86E0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_3FBE0C585F4EF331_OFFSET UNITYSDK_OFFSET(0xA3F8F80)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_6821143A80BCED87_OFFSET UNITYSDK_OFFSET(0xA3F7280)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_6B0FB11F996F75D1_OFFSET UNITYSDK_OFFSET(0xA3F7460)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_8F59263A7D1D04F6_OFFSET UNITYSDK_OFFSET(0xA3F8DF0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_A461AC4695F6A5F0_OFFSET UNITYSDK_OFFSET(0xA3F9630)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_BB9DE9323DE5A4F5_OFFSET UNITYSDK_OFFSET(0xA3F6DA0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_FC1A6F0C23BBD83A_OFFSET UNITYSDK_OFFSET(0xA3F8C10)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA3F7110)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F7020)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMappingSpine_TypeDefinitionIndex = 68360;

	class IKMappingSpine : public ::RPG::Client::FullBody::IKMapping
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* spineBones; // 0x10
		::UnityEngine::Transform* leftUpperArmBone; // 0x18
		::UnityEngine::Transform* rightUpperArmBone; // 0x20
		::UnityEngine::Transform* leftThighBone; // 0x28
		::UnityEngine::Transform* rightThighBone; // 0x30
		::System::Int32 iterations; // 0x38
		::System::Single twistWeight; // 0x3C
		::System::Int32 rootNodeIndex; // 0x40
		::Il2CppArray<::RPG::Client::FullBody::IKMapping_BoneMap*>* spine; // 0x48
		::RPG::Client::FullBody::IKMapping_BoneMap* leftUpperArm; // 0x50
		::RPG::Client::FullBody::IKMapping_BoneMap* rightUpperArm; // 0x58
		::RPG::Client::FullBody::IKMapping_BoneMap* leftThigh; // 0x60
		::RPG::Client::FullBody::IKMapping_BoneMap* rightThigh; // 0x68
		::System::Boolean useFABRIK; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_2_BB9DE9323DE5A4F5(::RPG::Client::FullBody::IKSolver* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_BB9DE9323DE5A4F5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6821143A80BCED87(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_6821143A80BCED87_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_2_151E25A63D14DDB0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
		}

		::System::Void Method_2_6B0FB11F996F75D1(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_6B0FB11F996F75D1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_2_2157CED3CDDF8996()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
		}

		::System::Void Method_2_2F0DC1CA1AADEABC(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_2F0DC1CA1AADEABC_OFFSET))(this, a1);
		}

		::System::Void Method_2_FC1A6F0C23BBD83A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_FC1A6F0C23BBD83A_OFFSET))(this, a1);
		}

		::System::Void Method_2_8F59263A7D1D04F6(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_8F59263A7D1D04F6_OFFSET))(this, a1);
		}

		::System::Void Method_2_3FBE0C585F4EF331(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_3FBE0C585F4EF331_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_03F8818C1383CCD8(::RPG::Client::FullBody::IKSolver* P0, ::System::String*& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_03F8818C1383CCD8_OFFSET))(this, P0, P1);
		}

		::System::Void Method_2_A461AC4695F6A5F0(::RPG::Client::FullBody::IKSolverFullBody* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_METHOD_2_A461AC4695F6A5F0_OFFSET))(this, P0);
		}
	};
}
