#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_344B189486E659B4;
class Class_1_AEF3B473274E6579;
class Class_1_FCFCC4B97F2390FE;
namespace RPG::Client { class MusicAlbumItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ADDPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBB5650)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_CLEARALLPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBB5AC0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_COPYFROM_OFFSET UNITYSDK_OFFSET(0xDBB4A70)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGBGMMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xDBB5D90)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEDATA_OFFSET UNITYSDK_OFFSET(0xDBB55B0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEVOLUME_OFFSET UNITYSDK_OFFSET(0xDBB5050)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETWHITENOISEPLAYINGCOUNT_OFFSET UNITYSDK_OFFSET(0xDBB53E0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_BGMINFO_OFFSET UNITYSDK_OFFSET(0xDBB5DF0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_ISWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xDBB5E30)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_MAXPLAYINGWHITENOISECOUNT_OFFSET UNITYSDK_OFFSET(0xDBB5830)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_WHITENOISEINFOLIST_OFFSET UNITYSDK_OFFSET(0xDBB5E10)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMPAUSED_OFFSET UNITYSDK_OFFSET(0xDBB5380)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMSAME_OFFSET UNITYSDK_OFFSET(0xDBB4D00)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISEBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xDBB5430)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBB4FE0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISSAME_OFFSET UNITYSDK_OFFSET(0xDBB4C90)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISWHITENOISESAME_OFFSET UNITYSDK_OFFSET(0xDBB4DA0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_REMOVEPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBB5880)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETBGMPAUSED_OFFSET UNITYSDK_OFFSET(0xDBB52E0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETPLAYINGWHITENOISEVOLUME_OFFSET UNITYSDK_OFFSET(0xDBB5B60)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xDBB5330)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_BGMINFO_OFFSET UNITYSDK_OFFSET(0xDBB5E00)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_ISWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xDBB5E40)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_WHITENOISEINFOLIST_OFFSET UNITYSDK_OFFSET(0xDBB5E20)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SWITCHBGM_OFFSET UNITYSDK_OFFSET(0xDBB5270)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0xDBB4700)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDBB4680)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayingMusicItemsInfo_TypeDefinitionIndex = 66404;

	class PlayingMusicItemsInfo : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MaxPlayingWhiteNoiseCount = 0x5; // 0x0
		// static const ::System::Int32 _MaxPlayingWhiteNoiseVolume = 0x64; // 0x0
		::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>* _WhiteNoiseInfoList_k__BackingField; // 0x10
		::Class_1_344B189486E659B4* _BgmInfo_k__BackingField; // 0x18
		::System::Boolean _IsWhiteNoisePaused_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncServerData(::Class_1_AEF3B473274E6579* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AEF3B473274E6579*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SYNCSERVERDATA_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_COPYFROM_OFFSET))(this, a1);
		}

		::System::Boolean IsSame(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISSAME_OFFSET))(this, a1);
		}

		::System::Boolean IsBGMSame(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMSAME_OFFSET))(this, a1);
		}

		::System::Boolean IsWhiteNoiseSame(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISWHITENOISESAME_OFFSET))(this, a1);
		}

		::System::Void SwitchBGM(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SWITCHBGM_OFFSET))(this, a1);
		}

		::System::Void SetBGMPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETBGMPAUSED_OFFSET))(this, a1);
		}

		::System::Void SetWhiteNoisePaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETWHITENOISEPAUSED_OFFSET))(this, a1);
		}

		::System::Boolean IsBGMPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMPAUSED_OFFSET))(this);
		}

		::System::Int32 GetWhiteNoisePlayingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETWHITENOISEPLAYINGCOUNT_OFFSET))(this);
		}

		::System::Boolean IsPlayingWhiteNoiseByEventName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISEBYEVENTNAME_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISE_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlayingWhiteNoiseVolume(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEVOLUME_OFFSET))(this, a1);
		}

		::RPG::Client::MusicAlbumItemData* GetPlayingWhiteNoiseData(::System::Int32 a1)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEDATA_OFFSET))(this, a1);
		}

		::System::Void AddPlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ADDPLAYINGWHITENOISE_OFFSET))(this, a1);
		}

		::System::Void RemovePlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_REMOVEPLAYINGWHITENOISE_OFFSET))(this, a1);
		}

		::System::Void ClearAllPlayingWhiteNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_CLEARALLPLAYINGWHITENOISE_OFFSET))(this);
		}

		::System::Void SetPlayingWhiteNoiseVolume(::RPG::Client::MusicAlbumItemData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETPLAYINGWHITENOISEVOLUME_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MusicAlbumItemData* GetPlayingBGMMusicItemData()
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGBGMMUSICITEMDATA_OFFSET))(this);
		}

		::Class_1_344B189486E659B4* get_BgmInfo()
		{
			return ((::Class_1_344B189486E659B4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_BGMINFO_OFFSET))(this);
		}

		::System::Void set_BgmInfo(::Class_1_344B189486E659B4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_344B189486E659B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_BGMINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>* get_WhiteNoiseInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_WHITENOISEINFOLIST_OFFSET))(this);
		}

		::System::Void set_WhiteNoiseInfoList(::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_WHITENOISEINFOLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxPlayingWhiteNoiseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_MAXPLAYINGWHITENOISECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsWhiteNoisePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_ISWHITENOISEPAUSED_OFFSET))(this);
		}

		::System::Void set_IsWhiteNoisePaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_ISWHITENOISEPAUSED_OFFSET))(this, a1);
		}
	};
}
