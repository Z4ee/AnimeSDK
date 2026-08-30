#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_AVATARROLETYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B17D90)
#define RPG_CLIENT_AVATARROLETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B17D40)
#define RPG_CLIENT_AVATARROLETYPE_GETAVATARIDINBOX_OFFSET UNITYSDK_OFFSET(0x3B17CA0)
#define RPG_CLIENT_AVATARROLETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B17DA0)
#define RPG_CLIENT_AVATARROLETYPE_GET_MARCH7TH_OFFSET UNITYSDK_OFFSET(0x19ECB990)
#define RPG_CLIENT_AVATARROLETYPE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x19ECB950)
#define RPG_CLIENT_AVATARROLETYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19ECBB20)
#define RPG_CLIENT_AVATARROLETYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19ECBBA0)
#define RPG_CLIENT_AVATARROLETYPE_TOBASEID_OFFSET UNITYSDK_OFFSET(0x3B17CF0)
#define RPG_CLIENT_AVATARROLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x3B17C80)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRoleType_TypeDefinitionIndex = 62557;

	struct alignas(4) AvatarRoleType
	{
		::System::UInt32 _RoleID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE__CTOR_OFFSET))(this, a1);
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

		::System::Boolean Equals(::RPG::Client::AvatarRoleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::AvatarRoleType a1, ::RPG::Client::AvatarRoleType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarRoleType, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::AvatarRoleType a1, ::RPG::Client::AvatarRoleType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarRoleType, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
