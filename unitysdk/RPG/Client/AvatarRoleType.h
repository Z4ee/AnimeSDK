#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_AVATARROLETYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xD40E0)
#define RPG_CLIENT_AVATARROLETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0xD4090)
#define RPG_CLIENT_AVATARROLETYPE_GETAVATARIDINBOX_OFFSET UNITYSDK_OFFSET(0xD3FB0)
#define RPG_CLIENT_AVATARROLETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD40F0)
#define RPG_CLIENT_AVATARROLETYPE_GET_MARCH7TH_OFFSET UNITYSDK_OFFSET(0x9DB91C0)
#define RPG_CLIENT_AVATARROLETYPE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x9DB9130)
#define RPG_CLIENT_AVATARROLETYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9DB93A0)
#define RPG_CLIENT_AVATARROLETYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9DB9420)
#define RPG_CLIENT_AVATARROLETYPE_TOBASEID_OFFSET UNITYSDK_OFFSET(0xD4040)
#define RPG_CLIENT_AVATARROLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F20)
#define RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xD4140)
#define RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD41A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRoleType_TypeDefinitionIndex = 57646;

	struct alignas(4) AvatarRoleType
	{
		::System::UInt32 _RoleID; // 0x10

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE__CTOR_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetAvatarIDInBox()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GETAVATARIDINBOX_OFFSET))(this);
		}

		::System::UInt32 ToBaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_TOBASEID_OFFSET))(this);
		}

		static ::RPG::Client::AvatarRoleType get_Player()
		{
			return ((::RPG::Client::AvatarRoleType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GET_PLAYER_OFFSET))();
		}

		static ::RPG::Client::AvatarRoleType get_March7th()
		{
			return ((::RPG::Client::AvatarRoleType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GET_MARCH7TH_OFFSET))();
		}

		::System::Boolean Equals(::RPG::Client::AvatarRoleType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::AvatarRoleType left, ::RPG::Client::AvatarRoleType right)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarRoleType, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::AvatarRoleType left, ::RPG::Client::AvatarRoleType right)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarRoleType, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
