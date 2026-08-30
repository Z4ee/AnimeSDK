#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"

class Class_1_766E1CF11E204F43_10;
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1C358D10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C358B10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_BELONGPILE_OFFSET UNITYSDK_OFFSET(0x1C359210)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C3591D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SETBELONGPILE_OFFSET UNITYSDK_OFFSET(0x1C359130)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNCLEVEL_OFFSET UNITYSDK_OFFSET(0x1C359180)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C358F70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C358B00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData_TypeDefinitionIndex = 67727;

	class RogueTournPersonaGameRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		::System::UInt32 _UniqueID; // 0x30
		::RPG::Client::RogueTournPersonaRoomCardPile _BelongPile; // 0x34

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
