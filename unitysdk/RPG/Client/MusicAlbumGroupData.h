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

#define RPG_CLIENT_MUSICALBUMGROUPDATA_ADDMUSICALBUM_OFFSET UNITYSDK_OFFSET(0x1B714610)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUMLIST_OFFSET UNITYSDK_OFFSET(0x1B714D20)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUM_OFFSET UNITYSDK_OFFSET(0x1B714C90)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPICON_OFFSET UNITYSDK_OFFSET(0x1B715110)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B7151D0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1B715160)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B714FD0)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B714810)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_ISALLMUSICALBUMPLAYED_OFFSET UNITYSDK_OFFSET(0x1B714E80)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_RESETSTATUS_OFFSET UNITYSDK_OFFSET(0x1B714960)
#define RPG_CLIENT_MUSICALBUMGROUPDATA_SYNCMUSICALBUM_OFFSET UNITYSDK_OFFSET(0x1B714B30)
#define RPG_CLIENT_MUSICALBUMGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B714570)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumGroupData_TypeDefinitionIndex = 66398;

	class MusicAlbumGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::BackGroundMusicGroupConfigRow* _GroupRow; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicAlbumItemData*>* _MusicAlbumDict; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddMusicAlbum(::RPG::GameCore::BackGroundMusicConfigRow* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BackGroundMusicConfigRow*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_ADDMUSICALBUM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_RESETSTATUS_OFFSET))(this);
		}

		::System::Void SyncMusicAlbum(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_SYNCMUSICALBUM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MusicAlbumItemData* GetMusicAlbum(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMGROUPDATA_GETMUSICALBUM_OFFSET))(this, a1);
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
