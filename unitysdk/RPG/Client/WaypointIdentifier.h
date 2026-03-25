#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WaypointIdentifierType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYENTITY_OFFSET UNITYSDK_OFFSET(0xA783E10)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYLITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xA784090)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYMAZEENTITY_OFFSET UNITYSDK_OFFSET(0xA784010)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYRUNTIMEENTITY_OFFSET UNITYSDK_OFFSET(0xA783FB0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA7841B0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA784110)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA784240)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA7842B0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA784310)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA784370)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA784080)
#define RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA7843B0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA7843C0)

namespace RPG::Client
{
	inline static constexpr unsigned int WaypointIdentifier_TypeDefinitionIndex = 56431;

	class WaypointIdentifier : public ::System::Object
	{
	public:
		static ::RPG::Client::WaypointIdentifier** StaticGet_Invalid()
		{
			return (::RPG::Client::WaypointIdentifier**)Il2CppClass::FromTypeDefinitionIndex(WaypointIdentifier_TypeDefinitionIndex)->GetStaticField(0x37A30);
		}
		::RPG::Client::WaypointIdentifierType Type; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 RuntimeID; // 0x18
		::System::UInt32 LittleGameEntityID; // 0x1C
		::System::UInt32 InstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::WaypointIdentifier* CreateByEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYENTITY_OFFSET))(entity);
		}

		static ::RPG::Client::WaypointIdentifier* CreateByMazeEntity(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYMAZEENTITY_OFFSET))(groupID, instanceID);
		}

		static ::RPG::Client::WaypointIdentifier* CreateByLittleGameEntity(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYLITTLEGAMEENTITY_OFFSET))(groupID, instanceID, littleGameEntityID);
		}

		static ::RPG::Client::WaypointIdentifier* CreateByRuntimeEntity(::System::UInt32 runtimeID)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYRUNTIMEENTITY_OFFSET))(runtimeID);
		}

		::System::Boolean Equals(::RPG::Client::WaypointIdentifier* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WaypointIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::WaypointIdentifier* left, ::RPG::Client::WaypointIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::WaypointIdentifier*, ::RPG::Client::WaypointIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::WaypointIdentifier* left, ::RPG::Client::WaypointIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::WaypointIdentifier*, ::RPG::Client::WaypointIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
