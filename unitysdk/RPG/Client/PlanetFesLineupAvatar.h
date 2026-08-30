#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLANETFESLINEUPAVATAR_CREATE_OFFSET UNITYSDK_OFFSET(0xDB527C0)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xDB53780)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDB53700)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDB537A0)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xDB53790)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDB537B0)
#define RPG_CLIENT_PLANETFESLINEUPAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xDB536F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLineupAvatar_TypeDefinitionIndex = 66562;

	class PlanetFesLineupAvatar : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesLineupAvatar* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PlanetFesLineupAvatar*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_CREATE_OFFSET))(a1, a2);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPAVATAR_SET_LEVEL_OFFSET))(this, a1);
		}
	};
}
