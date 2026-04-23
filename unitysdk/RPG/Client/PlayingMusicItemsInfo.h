#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_344B189486E659B4;
class Class_1_C2DCB7BEBD8D0D3B;
class Class_1_FCFCC4B97F2390FE;
namespace RPG::Client { class MusicAlbumItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ADDPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xAD6AE90)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_CLEARALLPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xAD6B120)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_COPYFROM_OFFSET UNITYSDK_OFFSET(0xAD6A430)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGBGMMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xAD6B300)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEDATA_OFFSET UNITYSDK_OFFSET(0xAD6AE10)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEVOLUME_OFFSET UNITYSDK_OFFSET(0xAD6A9A0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETWHITENOISEPLAYINGCOUNT_OFFSET UNITYSDK_OFFSET(0xAD6AC70)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_BGMINFO_OFFSET UNITYSDK_OFFSET(0xAD6B360)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_ISWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xAD6B3A0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_MAXPLAYINGWHITENOISECOUNT_OFFSET UNITYSDK_OFFSET(0xAD6AFB0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_WHITENOISEINFOLIST_OFFSET UNITYSDK_OFFSET(0xAD6B380)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMPAUSED_OFFSET UNITYSDK_OFFSET(0xAD6AC10)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMSAME_OFFSET UNITYSDK_OFFSET(0xAD6A6A0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISEBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xAD6ACC0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xAD6A930)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISSAME_OFFSET UNITYSDK_OFFSET(0xAD6A630)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISWHITENOISESAME_OFFSET UNITYSDK_OFFSET(0xAD6A740)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_REMOVEPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xAD6AFC0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETBGMPAUSED_OFFSET UNITYSDK_OFFSET(0xAD6AB70)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETPLAYINGWHITENOISEVOLUME_OFFSET UNITYSDK_OFFSET(0xAD6B190)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xAD6ABC0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_BGMINFO_OFFSET UNITYSDK_OFFSET(0xAD6B370)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_ISWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xAD6B3B0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_WHITENOISEINFOLIST_OFFSET UNITYSDK_OFFSET(0xAD6B390)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SWITCHBGM_OFFSET UNITYSDK_OFFSET(0xAD6AB00)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0xAD6A180)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAD6A100)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayingMusicItemsInfo_TypeDefinitionIndex = 61130;

	class PlayingMusicItemsInfo : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MaxPlayingWhiteNoiseCount = 0x5; // 0x0
		// static const ::System::Int32 _MaxPlayingWhiteNoiseVolume = 0x64; // 0x0
		::Class_1_344B189486E659B4* _BgmInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>* _WhiteNoiseInfoList_k__BackingField; // 0x18
		::System::Boolean _IsWhiteNoisePaused_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncServerData(::Class_1_C2DCB7BEBD8D0D3B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2DCB7BEBD8D0D3B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SYNCSERVERDATA_OFFSET))(this, info);
		}

		::System::Void CopyFrom(::RPG::Client::PlayingMusicItemsInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_COPYFROM_OFFSET))(this, other);
		}

		::System::Boolean IsSame(::RPG::Client::PlayingMusicItemsInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISSAME_OFFSET))(this, other);
		}

		::System::Boolean IsBGMSame(::RPG::Client::PlayingMusicItemsInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMSAME_OFFSET))(this, other);
		}

		::System::Boolean IsWhiteNoiseSame(::RPG::Client::PlayingMusicItemsInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISWHITENOISESAME_OFFSET))(this, other);
		}

		::System::Void SwitchBGM(::RPG::Client::MusicAlbumItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SWITCHBGM_OFFSET))(this, data);
		}

		::System::Void SetBGMPaused(::System::Boolean isPaused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETBGMPAUSED_OFFSET))(this, isPaused);
		}

		::System::Void SetWhiteNoisePaused(::System::Boolean isPaused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETWHITENOISEPAUSED_OFFSET))(this, isPaused);
		}

		::System::Boolean IsBGMPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMPAUSED_OFFSET))(this);
		}

		::System::Int32 GetWhiteNoisePlayingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETWHITENOISEPLAYINGCOUNT_OFFSET))(this);
		}

		::System::Boolean IsPlayingWhiteNoiseByEventName(::System::String* eventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISEBYEVENTNAME_OFFSET))(this, eventName);
		}

		::System::Boolean IsPlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISE_OFFSET))(this, data);
		}

		::System::UInt32 GetPlayingWhiteNoiseVolume(::RPG::Client::MusicAlbumItemData* data)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEVOLUME_OFFSET))(this, data);
		}

		::RPG::Client::MusicAlbumItemData* GetPlayingWhiteNoiseData(::System::Int32 index)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEDATA_OFFSET))(this, index);
		}

		::System::Void AddPlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ADDPLAYINGWHITENOISE_OFFSET))(this, data);
		}

		::System::Void RemovePlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_REMOVEPLAYINGWHITENOISE_OFFSET))(this, data);
		}

		::System::Void ClearAllPlayingWhiteNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_CLEARALLPLAYINGWHITENOISE_OFFSET))(this);
		}

		::System::Void SetPlayingWhiteNoiseVolume(::RPG::Client::MusicAlbumItemData* data, ::System::UInt32 volume)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETPLAYINGWHITENOISEVOLUME_OFFSET))(this, data, volume);
		}

		::RPG::Client::MusicAlbumItemData* GetPlayingBGMMusicItemData()
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGBGMMUSICITEMDATA_OFFSET))(this);
		}

		::Class_1_344B189486E659B4* get_BgmInfo()
		{
			return ((::Class_1_344B189486E659B4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_BGMINFO_OFFSET))(this);
		}

		::System::Void set_BgmInfo(::Class_1_344B189486E659B4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_344B189486E659B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_BGMINFO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>* get_WhiteNoiseInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_WHITENOISEINFOLIST_OFFSET))(this);
		}

		::System::Void set_WhiteNoiseInfoList(::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FCFCC4B97F2390FE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_WHITENOISEINFOLIST_OFFSET))(this, value);
		}

		::System::Int32 get_MaxPlayingWhiteNoiseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_MAXPLAYINGWHITENOISECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsWhiteNoisePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_ISWHITENOISEPAUSED_OFFSET))(this);
		}

		::System::Void set_IsWhiteNoisePaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_ISWHITENOISEPAUSED_OFFSET))(this, value);
		}
	};
}
