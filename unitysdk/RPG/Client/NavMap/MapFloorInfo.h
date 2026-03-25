#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_NAVMAP_MAPFLOORINFO_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9E18620)
#define RPG_CLIENT_NAVMAP_MAPFLOORINFO_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9E18640)
#define RPG_CLIENT_NAVMAP_MAPFLOORINFO_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9E18600)
#define RPG_CLIENT_NAVMAP_MAPFLOORINFO_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9E18630)
#define RPG_CLIENT_NAVMAP_MAPFLOORINFO_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9E18650)
#define RPG_CLIENT_NAVMAP_MAPFLOORINFO_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9E18610)
#define RPG_CLIENT_NAVMAP_MAPFLOORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E15230)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapFloorInfo_TypeDefinitionIndex = 61291;

	class MapFloorInfo : public ::System::Object
	{
	public:
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::UInt32 _ContentID_k__BackingField; // 0x14
		::System::UInt32 _StoryLineID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPFLOORINFO_SET_FLOORID_OFFSET))(this, value);
		}
	};
}
