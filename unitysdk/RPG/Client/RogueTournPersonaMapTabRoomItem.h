#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaMapTabProgressItemType.h"
#include "unitysdk/RPG/Client/RogueTournPersonaMapTabRoomStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaGameLevelRoom; }

#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7A0190)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C7A0100)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_GET_ROOMDATA_OFFSET UNITYSDK_OFFSET(0x1C7A0150)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7A0170)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_SET_ROOMDATA_OFFSET UNITYSDK_OFFSET(0x1C7A0160)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7A0180)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A0220)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaMapTabRoomItem_TypeDefinitionIndex = 72826;

	class RogueTournPersonaMapTabRoomItem : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaGameLevelRoom* _RoomData_k__BackingField; // 0x10
		::RPG::Client::RogueTournPersonaMapTabRoomStatus _RoomStatus_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaMapTabProgressItemType get_ItemType()
		{
			return ((::RPG::Client::RogueTournPersonaMapTabProgressItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_GET_ITEMTYPE_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* get_RoomData()
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_GET_ROOMDATA_OFFSET))(this);
		}

		::System::Void set_RoomData(::RPG::Client::IRogueTournPersonaGameLevelRoom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_SET_ROOMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaMapTabRoomStatus get_RoomStatus()
		{
			return ((::RPG::Client::RogueTournPersonaMapTabRoomStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::RPG::Client::RogueTournPersonaMapTabRoomStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaMapTabRoomStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_SET_ROOMSTATUS_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaMapTabRoomItem* Create(::RPG::Client::IRogueTournPersonaGameLevelRoom* a1, ::RPG::Client::RogueTournPersonaMapTabRoomStatus a2)
		{
			return ((::RPG::Client::RogueTournPersonaMapTabRoomItem*(*)(::RPG::Client::IRogueTournPersonaGameLevelRoom*, ::RPG::Client::RogueTournPersonaMapTabRoomStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABROOMITEM_CREATE_OFFSET))(a1, a2);
		}
	};
}
