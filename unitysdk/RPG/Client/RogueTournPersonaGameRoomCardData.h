#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"

class Class_1_766E1CF11E204F43_7;
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB0EED70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0EEB10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_BELONGPILE_OFFSET UNITYSDK_OFFSET(0xB0EF360)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB0EF350)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SETBELONGPILE_OFFSET UNITYSDK_OFFSET(0xB0EF2B0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNCLEVEL_OFFSET UNITYSDK_OFFSET(0xB0EF300)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB0EF0B0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0EEAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData_TypeDefinitionIndex = 62423;

	class RogueTournPersonaGameRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		::System::UInt32 _UniqueID; // 0x30
		::RPG::Client::RogueTournPersonaRoomCardPile _BelongPile; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameRoomCardData* Create(::Class_1_766E1CF11E204F43_7* proto)
		{
			return ((::RPG::Client::RogueTournPersonaGameRoomCardData*(*)(::Class_1_766E1CF11E204F43_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CREATE_OFFSET))(proto);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CLONE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_766E1CF11E204F43_7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void SetBelongPile(::RPG::Client::RogueTournPersonaRoomCardPile pile)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SETBELONGPILE_OFFSET))(this, pile);
		}

		::System::Void SyncLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNCLEVEL_OFFSET))(this, level);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardPile get_BelongPile()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPile(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_BELONGPILE_OFFSET))(this);
		}
	};
}
