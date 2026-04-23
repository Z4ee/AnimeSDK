#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingSourceAttachTargetType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_4FE4B094FAA68E6D_GET_ATTACHTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x29910)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_286061C41635FEEA_OFFSET UNITYSDK_OFFSET(0x48E880)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_449CD42737250D36_OFFSET UNITYSDK_OFFSET(0x48E920)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_5933A788AB67E515_OFFSET UNITYSDK_OFFSET(0x296E0)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x48E7C0)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_951D206034E2992C_OFFSET UNITYSDK_OFFSET(0x48E7E0)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_B53C7AD44404F1FF_OFFSET UNITYSDK_OFFSET(0x48E710)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_BCFC75DE0278F431_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_E44AA162FC91C1A4_OFFSET UNITYSDK_OFFSET(0x48E9C0)
#define STRUCT_2_4FE4B094FAA68E6D_METHOD_2_F3F1A00B2E67355E_OFFSET UNITYSDK_OFFSET(0x48EA60)
#define STRUCT_2_4FE4B094FAA68E6D_SET_ATTACHTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x29920)

inline static constexpr unsigned int Struct_2_4FE4B094FAA68E6D_TypeDefinitionIndex = 68059;

struct alignas(8) Struct_2_4FE4B094FAA68E6D
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::UnityEngine::Camera* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::RPG::GameCore::AnchorInfo* Field_2_3; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x30
	::UnityEngine::Vector3 Field_2_5; // 0x3C
	::RPG::Client::OpenWorld::StreamingSourceAttachTargetType _AttachTargetType_k__BackingField; // 0x48

	::RPG::Client::OpenWorld::StreamingSourceAttachTargetType get_AttachTargetType()
	{
		return ((::RPG::Client::OpenWorld::StreamingSourceAttachTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_GET_ATTACHTARGETTYPE_OFFSET))(this);
	}

	::System::Void set_AttachTargetType(::RPG::Client::OpenWorld::StreamingSourceAttachTargetType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingSourceAttachTargetType))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_SET_ATTACHTARGETTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_2_BCFC75DE0278F431()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_BCFC75DE0278F431_OFFSET))(this);
	}

	::RPG::GameCore::AnchorInfo* Method_2_5933A788AB67E515()
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_5933A788AB67E515_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_B53C7AD44404F1FF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_B53C7AD44404F1FF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_951D206034E2992C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_951D206034E2992C_OFFSET))(this, a1);
	}

	::System::Void Method_2_286061C41635FEEA(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_286061C41635FEEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_449CD42737250D36(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_449CD42737250D36_OFFSET))(this, a1);
	}

	::System::Void Method_2_E44AA162FC91C1A4(::RPG::GameCore::AnchorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_E44AA162FC91C1A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3F1A00B2E67355E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_4FE4B094FAA68E6D_METHOD_2_F3F1A00B2E67355E_OFFSET))(this, a1);
	}
};
