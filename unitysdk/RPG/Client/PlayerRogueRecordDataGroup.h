#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_884FF7AB0BB45750;
namespace RPG::Client { class PlayerChessRogueRecordData; }
namespace RPG::Client { class PlayerMagicRogueRecordData; }
namespace RPG::Client { class PlayerNousChessRogueRecordData; }
namespace RPG::Client { class PlayerRogueTournRecordData; }

#define RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xDBB3F20)
#define RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xDBB3C70)
#define RPG_CLIENT_PLAYERROGUERECORDDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDBB3F90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueRecordDataGroup_TypeDefinitionIndex = 64345;

	class PlayerRogueRecordDataGroup : public ::System::Object
	{
	public:
		::RPG::Client::PlayerMagicRogueRecordData* MagicRogueRecordData; // 0x10
		::RPG::Client::PlayerChessRogueRecordData* ChessRogueRecordData; // 0x18
		::RPG::Client::PlayerNousChessRogueRecordData* NousChessRogueRecordData; // 0x20
		::RPG::Client::PlayerRogueTournRecordData* TournRogueRecordData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATAGROUP__CTOR_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_884FF7AB0BB45750* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_884FF7AB0BB45750*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_SYNCDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::PlayerRogueRecordDataGroup* Create()
		{
			return ((::RPG::Client::PlayerRogueRecordDataGroup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_CREATE_OFFSET))();
		}
	};
}
