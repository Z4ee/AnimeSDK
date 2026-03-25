#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_CELLID_OFFSET UNITYSDK_OFFSET(0x9D78100)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x9D78120)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_CELLID_OFFSET UNITYSDK_OFFSET(0x9D78110)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x9D78130)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D78140)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyTeleportInfo_TypeDefinitionIndex = 53856;

	class MonopolyTeleportInfo : public ::System::Object
	{
	public:
		::System::UInt32 _CellID_k__BackingField; // 0x10
		::System::UInt32 _MapID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 cellID, ::System::UInt32 mapID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO__CTOR_OFFSET))(this, cellID, mapID);
		}

		::System::UInt32 get_CellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_CELLID_OFFSET))(this);
		}

		::System::Void set_CellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_CELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_MAPID_OFFSET))(this, value);
		}
	};
}
