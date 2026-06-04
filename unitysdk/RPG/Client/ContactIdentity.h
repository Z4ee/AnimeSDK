#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactPam_Mode.h"
#include "unitysdk/RPG/Client/ContactRole.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CONTACTIDENTITY_CREATENONE_OFFSET UNITYSDK_OFFSET(0xB712210)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xB712310)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEPAM_OFFSET UNITYSDK_OFFSET(0xB7122C0)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xB712270)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB7124B0)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xB712510)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB7123F0)
#define RPG_CLIENT_CONTACTIDENTITY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB7125C0)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0xB712660)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xB712690)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISPAM_OFFSET UNITYSDK_OFFSET(0xB712680)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xB712670)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xB712650)
#define RPG_CLIENT_CONTACTIDENTITY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB712360)
#define RPG_CLIENT_CONTACTIDENTITY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB712450)
#define RPG_CLIENT_CONTACTIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB712260)
#define RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB7126A0)
#define RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB7126B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ContactIdentity_TypeDefinitionIndex = 59170;

	class ContactIdentity : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::Client::ContactRole _Role_k__BackingField; // 0x14

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

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
