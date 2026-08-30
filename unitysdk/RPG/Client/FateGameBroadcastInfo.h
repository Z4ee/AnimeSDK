#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_129E8AF30182E162;
class Class_1_3E3E8891404D8201;
class Class_1_C7CA2190EE47EB08;
namespace RPG::Client { class FateGameData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEBROADCASTINFO_GET_AUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x1C17DE40)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_GET_BROADCASTCONTENT_OFFSET UNITYSDK_OFFSET(0x1C17DD00)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_GET_BROADCASTID_OFFSET UNITYSDK_OFFSET(0x1C17DCC0)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_GET__BATTLEZONEROW_OFFSET UNITYSDK_OFFSET(0x1C17D8A0)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C17DDE0)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C17D410)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_ONAFTERROUNDSETTLESYNC_OFFSET UNITYSDK_OFFSET(0x1C17DA80)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_ONBEFOREROUNDSETTLESYNC_OFFSET UNITYSDK_OFFSET(0x1C17D990)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1C17DB70)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO_REFRESHCURBROADCAST_OFFSET UNITYSDK_OFFSET(0x1C17D640)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17D3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBroadcastInfo_TypeDefinitionIndex = 64051;

	class FateGameBroadcastInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_129E8AF30182E162*>* _EmergentBroadcasts; // 0x10
		::RPG::Client::FateGameData* _OwnerRef; // 0x18
		::System::UInt32 _BroadcastID; // 0x20

		::System::Void _ctor(::RPG::Client::FateGameData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_INIT_OFFSET))(this);
		}

		::System::Void RefreshCurBroadcast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_REFRESHCURBROADCAST_OFFSET))(this);
		}

		::System::Void OnBeforeRoundSettleSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_ONBEFOREROUNDSETTLESYNC_OFFSET))(this);
		}

		::System::Void OnAfterRoundSettleSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_ONAFTERROUNDSETTLESYNC_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_ONRECONNECT_OFFSET))(this);
		}

		::System::UInt32 get_BroadcastID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_GET_BROADCASTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BroadcastContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_GET_BROADCASTCONTENT_OFFSET))(this);
		}

		::System::String* get_AudioEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_GET_AUDIOEVENT_OFFSET))(this);
		}

		::Class_1_3E3E8891404D8201* get__BattleZoneRow()
		{
			return ((::Class_1_3E3E8891404D8201*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_GET__BATTLEZONEROW_OFFSET))(this);
		}

		::Class_1_C7CA2190EE47EB08* get__Row()
		{
			return ((::Class_1_C7CA2190EE47EB08*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO_GET__ROW_OFFSET))(this);
		}
	};
}
