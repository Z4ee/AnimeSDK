#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContactRole.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CONTACTIDENTITY_CREATEPAM_OFFSET UNITYSDK_OFFSET(0x9424C80)
#define RPG_CLIENT_CONTACTIDENTITY_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x9424C20)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9424E20)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x9424E80)
#define RPG_CLIENT_CONTACTIDENTITY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9424D60)
#define RPG_CLIENT_CONTACTIDENTITY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9424F20)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x9424FC0)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISPAM_OFFSET UNITYSDK_OFFSET(0x9424FE0)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x9424FD0)
#define RPG_CLIENT_CONTACTIDENTITY_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x9424FB0)
#define RPG_CLIENT_CONTACTIDENTITY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9424CD0)
#define RPG_CLIENT_CONTACTIDENTITY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9424DC0)
#define RPG_CLIENT_CONTACTIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x9424C70)
#define RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9424FF0)
#define RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9425000)

namespace RPG::Client
{
	inline static constexpr unsigned int ContactIdentity_TypeDefinitionIndex = 51314;

	class ContactIdentity : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::Client::ContactRole _Role_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::ContactRole role, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ContactRole, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY__CTOR_OFFSET))(this, role, id);
		}

		static ::RPG::Client::ContactIdentity* CreatePlayer(::System::UInt32 id)
		{
			return ((::RPG::Client::ContactIdentity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_CREATEPLAYER_OFFSET))(id);
		}

		static ::RPG::Client::ContactIdentity* CreatePam()
		{
			return ((::RPG::Client::ContactIdentity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_CREATEPAM_OFFSET))();
		}

		static ::System::Boolean op_Equality(::RPG::Client::ContactIdentity* left, ::RPG::Client::ContactIdentity* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ContactIdentity*, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ContactIdentity* left, ::RPG::Client::ContactIdentity* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::ContactIdentity*, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::RPG::Client::ContactIdentity* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::ContactRole role, ::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ContactRole, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_EQUALS_1_OFFSET))(this, role, id);
		}

		::System::Boolean Equals_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY_EQUALS_2_OFFSET))(this, obj);
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

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTACTIDENTITY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
