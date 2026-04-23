#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BackGroundMusicGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::GameCore { class BackGroundMusicConfigRow; }
namespace RPG::GameCore { class BackGroundMusicGroupConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICALBUMGROUPDATA_ADDMUSICALBUM_OFFSET UNITYSDK_OFFSET(0xAB10550)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUMLIST_OFFSET UNITYSDK_OFFSET(0xAB10BF0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUM_OFFSET UNITYSDK_OFFSET(0xAB10B30)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPICON_OFFSET UNITYSDK_OFFSET(0xAB10F60)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xAB10FB0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0xAB10F80)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB10E10)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAB106D0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_ISALLMUSICALBUMPLAYED_OFFSET UNITYSDK_OFFSET(0xAB10CB0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_RESETSTATUS_OFFSET UNITYSDK_OFFSET(0xAB107C0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_SYNCMUSICALBUM_OFFSET UNITYSDK_OFFSET(0xAB10990)
#define RPG_CLIENT_MUSICALBUMGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB104B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumGroupData_TypeDefinitionIndex = 61124;

	class MusicAlbumGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicAlbumItemData*>* _MusicAlbumDict; // 0x10
		::RPG::GameCore::BackGroundMusicGroupConfigRow* _GroupRow; // 0x18

		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA__CTOR_OFFSET))(this, groupID);
		}

		::System::Void AddMusicAlbum(::RPG::GameCore::BackGroundMusicConfigRow* row, ::System::Boolean isUnlock, ::System::Boolean isPlayed)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BackGroundMusicConfigRow*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_ADDMUSICALBUM_OFFSET))(this, row, isUnlock, isPlayed);
		}

		::System::Void ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_RESETSTATUS_OFFSET))(this);
		}

		::System::Void SyncMusicAlbum(::System::UInt32 musicAlbumID, ::System::Boolean isUnlock, ::System::Boolean isPlayed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_SYNCMUSICALBUM_OFFSET))(this, musicAlbumID, isUnlock, isPlayed);
		}

		::RPG::Client::MusicAlbumItemData* GetMusicAlbum(::System::UInt32 musicAlbumID)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUM_OFFSET))(this, musicAlbumID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumItemData*>* GetMusicAlbumList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUMLIST_OFFSET))(this);
		}

		::System::Boolean IsAllMusicAlbumPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_ISALLMUSICALBUMPLAYED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::BackGroundMusicGroupType get_Type()
		{
			return ((::RPG::GameCore::BackGroundMusicGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_GroupIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPNAME_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPID_OFFSET))(this);
		}
	};
}
