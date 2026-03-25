#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLANETFESLINEUPAVATAR_CREATE_OFFSET UNITYSDK_OFFSET(0x9F9D800)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9F9E630)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9F9E5B0)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9F9E650)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9F9E640)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9F9E660)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9E5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLineupAvatar_TypeDefinitionIndex = 54124;

	class PlanetFesLineupAvatar : public ::System::Object
	{
	public:
		::System::UInt32 _AvatarID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesLineupAvatar* Create(::System::UInt32 avatarID, ::System::UInt32 level)
		{
			return ((::RPG::Client::PlanetFesLineupAvatar*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_CREATE_OFFSET))(avatarID, level);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_LEVEL_OFFSET))(this, value);
		}
	};
}
