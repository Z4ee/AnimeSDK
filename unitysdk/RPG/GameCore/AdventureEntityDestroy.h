#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA8413E0)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA841430)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xA841470)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_INIT_OFFSET UNITYSDK_OFFSET(0xA841390)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xA841480)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0xA841490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureEntityDestroy_TypeDefinitionIndex = 45503;

	class AdventureEntityDestroy : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureEntityDestroy* Init(::System::UInt32 eid)
		{
			return ((::RPG::GameCore::AdventureEntityDestroy*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_INIT_OFFSET))(this, eid);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_SET_ENTITYID_OFFSET))(this, value);
		}
	};
}
