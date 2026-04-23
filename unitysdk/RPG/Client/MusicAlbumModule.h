#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_C2DCB7BEBD8D0D3B;
namespace RPG::Client { class MusicAlbumGroupData; }
namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICALBUMMODULE_GETMUSICALBUMITEMDATA_OFFSET UNITYSDK_OFFSET(0xAB12820)
#define RPG_CLIENT_MUSICALBUMMODULE_GETUNLOCKMUSICALBUMGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xAB12960)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_CURUSEMUSICID_OFFSET UNITYSDK_OFFSET(0xAB11170)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_PLAYINGINFO_OFFSET UNITYSDK_OFFSET(0xAB12C10)
#define RPG_CLIENT_MUSICALBUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAB121E0)
#define RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFOEXPLICIT_OFFSET UNITYSDK_OFFSET(0xAB12510)
#define RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0xAB123A0)
#define RPG_CLIENT_MUSICALBUMMODULE_SETTRIALMUSICID_OFFSET UNITYSDK_OFFSET(0xAB12580)
#define RPG_CLIENT_MUSICALBUMMODULE_SET_PLAYINGINFO_OFFSET UNITYSDK_OFFSET(0xAB12C20)
#define RPG_CLIENT_MUSICALBUMMODULE_UNLOCKBACKGROUNDMUSICCSREQ_OFFSET UNITYSDK_OFFSET(0xAB12790)
#define RPG_CLIENT_MUSICALBUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB11750)
#define RPG_CLIENT_MUSICALBUMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB12C30)
#define RPG_CLIENT_MUSICALBUMMODULE__GETGROUPDATA_OFFSET UNITYSDK_OFFSET(0xAB11980)
#define RPG_CLIENT_MUSICALBUMMODULE__ONGETJUKEBOXDATASCRSP_OFFSET UNITYSDK_OFFSET(0xAB11870)
#define RPG_CLIENT_MUSICALBUMMODULE__ONPLAYBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0xAB11BD0)
#define RPG_CLIENT_MUSICALBUMMODULE__ONTRIALBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0xAB11B70)
#define RPG_CLIENT_MUSICALBUMMODULE__ONUNLOCKBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0xAB11CA0)
#define RPG_CLIENT_MUSICALBUMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAB12D60)
#define RPG_CLIENT_MUSICALBUMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB12D00)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumModule_TypeDefinitionIndex = 61126;

	class MusicAlbumModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicAlbumGroupData*>* _MusicAlbumGroupDict; // 0x10
		::RPG::Client::PlayingMusicItemsInfo* _PlayingInfo_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetJukeboxDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONGETJUKEBOXDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrialBackGroundMusicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONTRIALBACKGROUNDMUSICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayBackGroundMusicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONPLAYBACKGROUNDMUSICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUnlockBackGroundMusicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONUNLOCKBACKGROUNDMUSICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetCurPlayingInfo(::RPG::Client::PlayingMusicItemsInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFO_OFFSET))(this, info);
		}

		::System::Void SetCurPlayingInfoExplicit(::Class_1_C2DCB7BEBD8D0D3B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2DCB7BEBD8D0D3B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFOEXPLICIT_OFFSET))(this, info);
		}

		::System::Void SetTrialMusicID(::System::UInt32 musicID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETTRIALMUSICID_OFFSET))(this, musicID);
		}

		::System::Void UnlockBackGroundMusicCsReq(::System::Collections::Generic::List_1<::System::UInt32>* musicIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_UNLOCKBACKGROUNDMUSICCSREQ_OFFSET))(this, musicIDList);
		}

		::RPG::Client::MusicAlbumItemData* GetMusicAlbumItemData(::System::UInt32 musicID)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GETMUSICALBUMITEMDATA_OFFSET))(this, musicID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumGroupData*>* GetUnlockMusicAlbumGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GETUNLOCKMUSICALBUMGROUPDATAS_OFFSET))(this);
		}

		::RPG::Client::MusicAlbumGroupData* _GetGroupData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::MusicAlbumGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__GETGROUPDATA_OFFSET))(this, groupID);
		}

		::System::UInt32 get_CurUseMusicID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_CURUSEMUSICID_OFFSET))(this);
		}

		::RPG::Client::PlayingMusicItemsInfo* get_PlayingInfo()
		{
			return ((::RPG::Client::PlayingMusicItemsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_PLAYINGINFO_OFFSET))(this);
		}

		::System::Void set_PlayingInfo(::RPG::Client::PlayingMusicItemsInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SET_PLAYINGINFO_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
