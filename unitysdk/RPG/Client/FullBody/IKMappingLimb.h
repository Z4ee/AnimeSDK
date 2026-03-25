#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"
#include "unitysdk/RPG/Client/FullBody/IKMappingLimb_BoneMapType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_03F8818C1383CCD8_OFFSET UNITYSDK_OFFSET(0x97362D0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x9735880)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_0B2BD75AED41F026_OFFSET UNITYSDK_OFFSET(0x9734E40)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_48E0E9D29DE90B49_OFFSET UNITYSDK_OFFSET(0x9735800)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x9736030)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_A461AC4695F6A5F0_OFFSET UNITYSDK_OFFSET(0x9736320)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x9735920)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_BA6EB7BC01785CBA_OFFSET UNITYSDK_OFFSET(0x9735B80)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_C2453B35E4DF9C3B_OFFSET UNITYSDK_OFFSET(0x9734D70)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_C2496B2D8317AC26_OFFSET UNITYSDK_OFFSET(0x9736130)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_F9AF6F889DC1CC07_OFFSET UNITYSDK_OFFSET(0x9734EB0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x97356A0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x97355A0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMappingLimb_TypeDefinitionIndex = 60909;

	class IKMappingLimb : public ::RPG::Client::FullBody::IKMapping
	{
	public:
		::UnityEngine::Transform* parentBone; // 0x10
		::UnityEngine::Transform* bone1; // 0x18
		::UnityEngine::Transform* bone2; // 0x20
		::UnityEngine::Transform* bone3; // 0x28
		::System::Single maintainRotationWeight; // 0x30
		::System::Single weight; // 0x34
		::System::Boolean updatePlaneRotations; // 0x38
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMapParent; // 0x40
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap1; // 0x48
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap2; // 0x50
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap3; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_2_C2453B35E4DF9C3B(::RPG::Client::FullBody::IKSolver* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_C2453B35E4DF9C3B_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FullBody::IKMapping_BoneMap* Method_2_0B2BD75AED41F026(::RPG::Client::FullBody::IKMappingLimb_BoneMapType a1)
		{
			return ((::RPG::Client::FullBody::IKMapping_BoneMap*(*)(::PVOID, ::RPG::Client::FullBody::IKMappingLimb_BoneMapType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_0B2BD75AED41F026_OFFSET))(this, a1);
		}

		::System::Void Method_2_F9AF6F889DC1CC07(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_F9AF6F889DC1CC07_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_48E0E9D29DE90B49(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_48E0E9D29DE90B49_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_2_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_2_BA6EB7BC01785CBA(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_BA6EB7BC01785CBA_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_2_C2496B2D8317AC26(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_C2496B2D8317AC26_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_03F8818C1383CCD8(::RPG::Client::FullBody::IKSolver* P0, ::System::String*& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_03F8818C1383CCD8_OFFSET))(this, P0, P1);
		}

		::System::Void Method_2_A461AC4695F6A5F0(::RPG::Client::FullBody::IKSolverFullBody* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_METHOD_2_A461AC4695F6A5F0_OFFSET))(this, P0);
		}
	};
}
