#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"

class Class_1_766E1CF11E204F43_10;
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xDF85320)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDF85120)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_BELONGPILE_OFFSET UNITYSDK_OFFSET(0xDF85820)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDF857E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SETBELONGPILE_OFFSET UNITYSDK_OFFSET(0xDF85740)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNCLEVEL_OFFSET UNITYSDK_OFFSET(0xDF85790)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDF85580)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF85110)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData_TypeDefinitionIndex = 67727;

	class RogueTournPersonaGameRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		::RPG::Client::RogueTournPersonaRoomCardPile _BelongPile; // 0x30
		::System::UInt32 _UniqueID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameRoomCardData* Create(::Class_1_766E1CF11E204F43_10* a1)
		{
			return ((::RPG::Client::RogueTournPersonaGameRoomCardData*(*)(::Class_1_766E1CF11E204F43_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CREATE_OFFSET))(a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CLONE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_766E1CF11E204F43_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SetBelongPile(::RPG::Client::RogueTournPersonaRoomCardPile a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SETBELONGPILE_OFFSET))(this, a1);
		}

		::System::Void SyncLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNCLEVEL_OFFSET))(this, a1);
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
