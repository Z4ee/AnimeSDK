#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_0_16E4307DCC419505_681;
class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class AvatarArchiveEntry; }
namespace RPG::GameCore { class AvatarAtlasRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARARCHIVEDATA_GETAVATARARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0xB3589E0)
#define RPG_CLIENT_AVATARARCHIVEDATA_GETENTRYBYAVATARID_OFFSET UNITYSDK_OFFSET(0xB358850)
#define RPG_CLIENT_AVATARARCHIVEDATA_LOCALREFRESH_OFFSET UNITYSDK_OFFSET(0xB3587F0)
#define RPG_CLIENT_AVATARARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xB358470)
#define RPG_CLIENT_AVATARARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB357D40)
#define RPG_CLIENT_AVATARARCHIVEDATA__CONSTRUCTENTRY_OFFSET UNITYSDK_OFFSET(0xB359560)
#define RPG_CLIENT_AVATARARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3596F0)
#define RPG_CLIENT_AVATARARCHIVEDATA__INITALLAVATARENTRIES_OFFSET UNITYSDK_OFFSET(0xB357DC0)
#define RPG_CLIENT_AVATARARCHIVEDATA__INITCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xB3581C0)
#define RPG_CLIENT_AVATARARCHIVEDATA__ISAVATARSHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0xB3592B0)
#define RPG_CLIENT_AVATARARCHIVEDATA__REFRESHAVATARENTRIES_OFFSET UNITYSDK_OFFSET(0xB3584F0)
#define RPG_CLIENT_AVATARARCHIVEDATA__REFRESHCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xB358700)
#define RPG_CLIENT_AVATARARCHIVEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0xB357FE0)
#define RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0xB359760)
#define RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xB359700)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarArchiveData_TypeDefinitionIndex = 58400;

	class AvatarArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::RPG::Client::AvatarArchiveEntry* _HeroEntry; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_681*>* _ChangeInfoHandlers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void LocalRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_LOCALREFRESH_OFFSET))(this);
		}

		::RPG::Client::AvatarArchiveEntry* GetEntryByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_GETENTRYBYAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>* GetAvatarArchiveEntries(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA_GETAVATARARCHIVEENTRIES_OFFSET))(this, a1);
		}

		::System::Void _Refresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__REFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitAllAvatarEntries(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__INITALLAVATARENTRIES_OFFSET))(this, a1);
		}

		::System::Void _RefreshAvatarEntries(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__REFRESHAVATARENTRIES_OFFSET))(this, a1);
		}

		::System::Boolean _IsAvatarShouldDisplay(::RPG::GameCore::AvatarAtlasRow* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarAtlasRow*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__ISAVATARSHOULDDISPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void _ConstructEntry(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__CONSTRUCTENTRY_OFFSET))(this, a1);
		}

		::System::Void _InitChangeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__INITCHANGEINFO_OFFSET))(this);
		}

		::System::Void _RefreshChangeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA__REFRESHCHANGEINFO_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, a1);
		}
	};
}
