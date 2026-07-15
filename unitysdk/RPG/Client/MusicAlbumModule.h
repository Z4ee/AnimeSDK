#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_AEF3B473274E6579;
namespace RPG::Client { class MusicAlbumGroupData; }
namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICALBUMMODULE_GETMUSICALBUMITEMDATA_OFFSET UNITYSDK_OFFSET(0x18E89A20)
#define RPG_CLIENT_MUSICALBUMMODULE_GETUNLOCKMUSICALBUMGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x18E89AC0)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_CURUSEMUSICID_OFFSET UNITYSDK_OFFSET(0x18E89E50)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_ONLINEPLAYROOMPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x18E89F00)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_PLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x18E89EE0)
#define RPG_CLIENT_MUSICALBUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x18E894C0)
#define RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x18E89670)
#define RPG_CLIENT_MUSICALBUMMODULE_SETONLINEPLAYROOMCURPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x18E897E0)
#define RPG_CLIENT_MUSICALBUMMODULE_SETTRIALMUSICID_OFFSET UNITYSDK_OFFSET(0x18E89840)
#define RPG_CLIENT_MUSICALBUMMODULE_SET_ONLINEPLAYROOMPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x18E89F10)
#define RPG_CLIENT_MUSICALBUMMODULE_SET_PLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x18E89EF0)
#define RPG_CLIENT_MUSICALBUMMODULE_UNLOCKBACKGROUNDMUSICCSREQ_OFFSET UNITYSDK_OFFSET(0x18E89990)
#define RPG_CLIENT_MUSICALBUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x190B1D00)
#define RPG_CLIENT_MUSICALBUMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E89F20)
#define RPG_CLIENT_MUSICALBUMMODULE__GETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x18E893C0)
#define RPG_CLIENT_MUSICALBUMMODULE__ONGETJUKEBOXDATASCRSP_OFFSET UNITYSDK_OFFSET(0x190B1FC0)
#define RPG_CLIENT_MUSICALBUMMODULE__ONPLAYBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0x190B2140)
#define RPG_CLIENT_MUSICALBUMMODULE__ONTRIALBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0x190B20E0)
#define RPG_CLIENT_MUSICALBUMMODULE__ONUNLOCKBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0x18E88E50)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumModule_TypeDefinitionIndex = 63415;

	class MusicAlbumModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PlayingMusicItemsInfo* _OnlinePlayRoomPlayingInfo_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicAlbumGroupData*>* _MusicAlbumGroupDict; // 0x18
		::RPG::Client::PlayingMusicItemsInfo* _PlayingInfo_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetJukeboxDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONGETJUKEBOXDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrialBackGroundMusicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONTRIALBACKGROUNDMUSICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayBackGroundMusicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONPLAYBACKGROUNDMUSICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnlockBackGroundMusicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONUNLOCKBACKGROUNDMUSICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetCurPlayingInfo(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFO_OFFSET))(this, a1);
		}

		::System::Void SetOnlinePlayRoomCurPlayingInfo(::Class_1_AEF3B473274E6579* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AEF3B473274E6579*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETONLINEPLAYROOMCURPLAYINGINFO_OFFSET))(this, a1);
		}

		::System::Void SetTrialMusicID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETTRIALMUSICID_OFFSET))(this, a1);
		}

		::System::Void UnlockBackGroundMusicCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_UNLOCKBACKGROUNDMUSICCSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::MusicAlbumItemData* GetMusicAlbumItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GETMUSICALBUMITEMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumGroupData*>* GetUnlockMusicAlbumGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GETUNLOCKMUSICALBUMGROUPDATAS_OFFSET))(this);
		}

		::RPG::Client::MusicAlbumGroupData* _GetGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicAlbumGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__GETGROUPDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurUseMusicID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_CURUSEMUSICID_OFFSET))(this);
		}

		::RPG::Client::PlayingMusicItemsInfo* get_PlayingInfo()
		{
			return ((::RPG::Client::PlayingMusicItemsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_PLAYINGINFO_OFFSET))(this);
		}

		::System::Void set_PlayingInfo(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SET_PLAYINGINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PlayingMusicItemsInfo* get_OnlinePlayRoomPlayingInfo()
		{
			return ((::RPG::Client::PlayingMusicItemsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_ONLINEPLAYROOMPLAYINGINFO_OFFSET))(this);
		}

		::System::Void set_OnlinePlayRoomPlayingInfo(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SET_ONLINEPLAYROOMPLAYINGINFO_OFFSET))(this, a1);
		}
	};
}
