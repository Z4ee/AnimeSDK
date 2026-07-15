#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x19A911B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERID_OFFSET UNITYSDK_OFFSET(0x19A81270)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x19A90DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETPLAYER_OFFSET UNITYSDK_OFFSET(0x19A811B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GET__MANPLAYERID_OFFSET UNITYSDK_OFFSET(0x19A90F90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GET__WOMANPLAYERID_OFFSET UNITYSDK_OFFSET(0x19A910A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x19A90C60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISME_OFFSET UNITYSDK_OFFSET(0x19A90E90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISSAMEPLAYER_OFFSET UNITYSDK_OFFSET(0x19A81590)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A91200)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePlayerManager_TypeDefinitionIndex = 71284;

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

		::System::Boolean IsSamePlayer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISSAMEPLAYER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* GetPlayer(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* GetMyPlayerInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERINFO_OFFSET))(this);
		}

		::System::Boolean IsMe(::RPG::Client::ActivityMarble::MarblePvePlayer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePvePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_ISME_OFFSET))(this, a1);
		}

		::System::UInt32 GetMyPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_GETMYPLAYERID_OFFSET))(this);
		}

		::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(this, a1);
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
