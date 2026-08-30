#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingSourceAttachTargetType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_CBD09AB0890B337E_GET_ATTACHTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x3B1B640)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_286061C41635FEEA_OFFSET UNITYSDK_OFFSET(0x3B1B7C0)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_449CD42737250D36_OFFSET UNITYSDK_OFFSET(0x3B1B860)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_5933A788AB67E515_OFFSET UNITYSDK_OFFSET(0x82D660)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x3B1B700)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_951D206034E2992C_OFFSET UNITYSDK_OFFSET(0x3B1B720)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x161E0)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_B53C7AD44404F1FF_OFFSET UNITYSDK_OFFSET(0x3B1B660)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_BCFC75DE0278F431_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_E44AA162FC91C1A4_OFFSET UNITYSDK_OFFSET(0x3B1B900)
#define STRUCT_2_CBD09AB0890B337E_METHOD_2_F3F1A00B2E67355E_OFFSET UNITYSDK_OFFSET(0x3B1B9A0)
#define STRUCT_2_CBD09AB0890B337E_SET_ATTACHTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x3B1B650)

inline static constexpr unsigned int Struct_2_CBD09AB0890B337E_TypeDefinitionIndex = 73835;

struct alignas(8) Struct_2_CBD09AB0890B337E
{
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x10
	::UnityEngine::Camera* IEMGKEFBPCG; // 0x18
	::UnityEngine::Transform* NOBIHPOEJIM; // 0x20
	::RPG::GameCore::AnchorInfo* LMGGEJEDEMD; // 0x28
	::UnityEngine::Vector3 MIFKHBDOGLN; // 0x30
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x3C
	::RPG::Client::OpenWorld::StreamingSourceAttachTargetType _AttachTargetType_k__BackingField; // 0x48

	::RPG::Client::OpenWorld::StreamingSourceAttachTargetType get_AttachTargetType()
	{
		return ((::RPG::Client::OpenWorld::StreamingSourceAttachTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_GET_ATTACHTARGETTYPE_OFFSET))(this);
	}

	::System::Void set_AttachTargetType(::RPG::Client::OpenWorld::StreamingSourceAttachTargetType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingSourceAttachTargetType))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_SET_ATTACHTARGETTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_2_BCFC75DE0278F431()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_BCFC75DE0278F431_OFFSET))(this);
	}

	::RPG::GameCore::AnchorInfo* Method_2_5933A788AB67E515()
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_5933A788AB67E515_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_B53C7AD44404F1FF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_B53C7AD44404F1FF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_951D206034E2992C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_951D206034E2992C_OFFSET))(this, a1);
	}

	::System::Void Method_2_286061C41635FEEA(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_286061C41635FEEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_449CD42737250D36(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_449CD42737250D36_OFFSET))(this, a1);
	}

	::System::Void Method_2_E44AA162FC91C1A4(::RPG::GameCore::AnchorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_E44AA162FC91C1A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3F1A00B2E67355E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_CBD09AB0890B337E_METHOD_2_F3F1A00B2E67355E_OFFSET))(this, a1);
	}
};
