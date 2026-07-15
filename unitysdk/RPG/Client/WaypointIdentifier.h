#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WaypointIdentifierType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYENTITY_OFFSET UNITYSDK_OFFSET(0x17415E90)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYLITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x17416110)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYMAZEENTITY_OFFSET UNITYSDK_OFFSET(0x17416090)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYRUNTIMEENTITY_OFFSET UNITYSDK_OFFSET(0x17416030)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17416230)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x17416190)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174162C0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17416330)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17416390)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x174163F0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17416100)

namespace RPG::Client
{
	inline static constexpr unsigned int WaypointIdentifier_TypeDefinitionIndex = 65996;

	class WaypointIdentifier : public ::System::Object
	{
	public:
		static ::RPG::Client::WaypointIdentifier** StaticGet_Invalid()
		{
			return (::RPG::Client::WaypointIdentifier**)Il2CppClass::FromTypeDefinitionIndex(WaypointIdentifier_TypeDefinitionIndex)->GetStaticField(0x55960);
		}
		::System::UInt32 InstanceID; // 0x10
		::RPG::Client::WaypointIdentifierType Type; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 RuntimeID; // 0x1C
		::System::UInt32 LittleGameEntityID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::WaypointIdentifier* CreateByEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYENTITY_OFFSET))(a1);
		}

		static ::RPG::Client::WaypointIdentifier* CreateByMazeEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYMAZEENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::Client::WaypointIdentifier* CreateByLittleGameEntity(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYLITTLEGAMEENTITY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::WaypointIdentifier* CreateByRuntimeEntity(::System::UInt32 a1)
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_CREATEBYRUNTIMEENTITY_OFFSET))(a1);
		}

		::System::Boolean Equals(::RPG::Client::WaypointIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WaypointIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::WaypointIdentifier* a1, ::RPG::Client::WaypointIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::WaypointIdentifier*, ::RPG::Client::WaypointIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::WaypointIdentifier* a1, ::RPG::Client::WaypointIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::WaypointIdentifier*, ::RPG::Client::WaypointIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
