#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F672F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERID_OFFSET UNITYSDK_OFFSET(0x8F66F20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x8F66E30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETPLAYER_OFFSET UNITYSDK_OFFSET(0x8F66D90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GET__MANPLAYERID_OFFSET UNITYSDK_OFFSET(0x8F670D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GET__WOMANPLAYERID_OFFSET UNITYSDK_OFFSET(0x8F671E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x8F66BE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISME_OFFSET UNITYSDK_OFFSET(0x8F67010)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISSAMEPLAYER_OFFSET UNITYSDK_OFFSET(0x8F66D20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F67340)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePlayerManager_TypeDefinitionIndex = 61443;

	class MarblePlayerManager : public ::System::Object
	{
	public:
		::System::UInt32 _NewPlayerID; // 0x10
		::System::UInt32 _OldPlayerID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean IsSamePlayer(::System::UInt32 playerA, ::System::UInt32 playerB)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISSAMEPLAYER_OFFSET))(this, playerA, playerB);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* GetPlayer(::System::UInt32 playerID)
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETPLAYER_OFFSET))(this, playerID);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* GetMyPlayerInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERINFO_OFFSET))(this);
		}

		::System::Boolean IsMe(::RPG::Client::ActivityMarble::MarblePvePlayer* player)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePvePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISME_OFFSET))(this, player);
		}

		::System::UInt32 GetMyPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERID_OFFSET))(this);
		}

		::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* set)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(this, set);
		}

		::System::UInt32 get__ManPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GET__MANPLAYERID_OFFSET))(this);
		}

		::System::UInt32 get__WomanPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GET__WOMANPLAYERID_OFFSET))(this);
		}
	};
}
