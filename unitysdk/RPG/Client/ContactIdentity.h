#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactPam_Mode.h"
#include "unitysdk/RPG/Client/ContactRole.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CONTACTIDENTITY_CREATENONE_OFFSET UNITYSDK_OFFSET(0xCC72750)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCC72850)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEPAM_OFFSET UNITYSDK_OFFSET(0xCC72800)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xCC727B0)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCC729F0)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xCC72A50)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_OFFSET UNITYSDK_OFFSET(0xCC72930)
#define RPG_CLIENT_CONTACTIDENTITY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCC72B00)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0xCC72BA0)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCC72C50)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISPAM_OFFSET UNITYSDK_OFFSET(0xCC72C00)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xCC72BB0)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xCC72B90)
#define RPG_CLIENT_CONTACTIDENTITY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCC728A0)
#define RPG_CLIENT_CONTACTIDENTITY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCC72990)
#define RPG_CLIENT_CONTACTIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xCC727A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ContactIdentity_TypeDefinitionIndex = 63294;

	class ContactIdentity : public ::System::Object
	{
	public:
		::RPG::Client::ContactRole _Role_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::ContactRole a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ContactRole, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ContactIdentity* CreateNone()
		{
			return ((::RPG::Client::ContactIdentity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_CREATENONE_OFFSET))();
		}

		static ::RPG::Client::ContactIdentity* CreatePlayer(::System::UInt32 a1)
		{
			return ((::RPG::Client::ContactIdentity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_CREATEPLAYER_OFFSET))(a1);
		}

		static ::RPG::Client::ContactIdentity* CreatePam(::RPG::Client::ChatContactPam_Mode a1)
		{
			return ((::RPG::Client::ContactIdentity*(*)(::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_CREATEPAM_OFFSET))(a1);
		}

		static ::RPG::Client::ContactIdentity* CreateOnlinePlayRoom()
		{
			return ((::RPG::Client::ContactIdentity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_CREATEONLINEPLAYROOM_OFFSET))();
		}

		static ::System::Boolean op_Equality(::RPG::Client::ContactIdentity* a1, ::RPG::Client::ContactIdentity* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ContactIdentity*, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ContactIdentity* a1, ::RPG::Client::ContactIdentity* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ContactIdentity*, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::Client::ContactIdentity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::ContactRole a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ContactRole, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_EQUALS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_GETHASHCODE_OFFSET))(this);
		}

		::RPG::Client::ContactRole get_Role()
		{
			return ((::RPG::Client::ContactRole(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_GET_ROLE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsPam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_GET_ISPAM_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}
	};
}
