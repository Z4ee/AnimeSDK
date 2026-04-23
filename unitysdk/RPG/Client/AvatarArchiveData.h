#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_0_16E4307DCC419505_658;
class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class AvatarArchiveEntry; }
namespace RPG::GameCore { class AvatarAtlasRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARARCHIVEDATA_GETAVATARARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0x9D68160)
#define RPG_CLIENT_AVATARARCHIVEDATA_GETENTRYBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9D68000)
#define RPG_CLIENT_AVATARARCHIVEDATA_LOCALREFRESH_OFFSET UNITYSDK_OFFSET(0x9D67FA0)
#define RPG_CLIENT_AVATARARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D67C00)
#define RPG_CLIENT_AVATARARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9D675E0)
#define RPG_CLIENT_AVATARARCHIVEDATA__CONSTRUCTENTRY_OFFSET UNITYSDK_OFFSET(0x9D68DC0)
#define RPG_CLIENT_AVATARARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D68EA0)
#define RPG_CLIENT_AVATARARCHIVEDATA__INITALLAVATARENTRIES_OFFSET UNITYSDK_OFFSET(0x9D67660)
#define RPG_CLIENT_AVATARARCHIVEDATA__INITCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x9D67A00)
#define RPG_CLIENT_AVATARARCHIVEDATA__ISAVATARSHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0x9D68A40)
#define RPG_CLIENT_AVATARARCHIVEDATA__REFRESHAVATARENTRIES_OFFSET UNITYSDK_OFFSET(0x9D67C80)
#define RPG_CLIENT_AVATARARCHIVEDATA__REFRESHCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x9D67ED0)
#define RPG_CLIENT_AVATARARCHIVEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0x9D67840)
#define RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D68F20)
#define RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9D68EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarArchiveData_TypeDefinitionIndex = 57588;

	class AvatarArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::RPG::Client::AvatarArchiveEntry* _HeroEntry; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_658*>* _ChangeInfoHandlers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::System::Void LocalRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_LOCALREFRESH_OFFSET))(this);
		}

		::RPG::Client::AvatarArchiveEntry* GetEntryByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_GETENTRYBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>* GetAvatarArchiveEntries(::RPG::GameCore::AvatarBaseType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_GETAVATARARCHIVEENTRIES_OFFSET))(this, type);
		}

		::System::Void _Refresh(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__REFRESH_OFFSET))(this, fromLogin);
		}

		::System::Void _InitAllAvatarEntries(::System::Collections::Generic::IList_1<::System::UInt32>* ignoreAvatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__INITALLAVATARENTRIES_OFFSET))(this, ignoreAvatarIDList);
		}

		::System::Void _RefreshAvatarEntries(::System::Collections::Generic::IList_1<::System::UInt32>* ignoreAvatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__REFRESHAVATARENTRIES_OFFSET))(this, ignoreAvatarIDList);
		}

		::System::Boolean _IsAvatarShouldDisplay(::RPG::GameCore::AvatarAtlasRow* row, ::System::Collections::Generic::IList_1<::System::UInt32>* ignoreAvatarIDList)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarAtlasRow*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__ISAVATARSHOULDDISPLAY_OFFSET))(this, row, ignoreAvatarIDList);
		}

		::System::Void _ConstructEntry(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__CONSTRUCTENTRY_OFFSET))(this, avatarID);
		}

		::System::Void _InitChangeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__INITCHANGEINFO_OFFSET))(this);
		}

		::System::Void _RefreshChangeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__REFRESHCHANGEINFO_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, P0);
		}
	};
}
