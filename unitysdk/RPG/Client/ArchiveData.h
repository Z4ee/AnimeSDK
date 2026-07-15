#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveRedDotType.h"
#include "unitysdk/RPG/Client/ArchiveType.h"
#include "unitysdk/System/Object.h"

class Class_1_FF220487FAB45279;
namespace RPG::Client { class BaseArchiveEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ARCHIVEDATA_CLEARALLNEWSTATUS_OFFSET UNITYSDK_OFFSET(0x19B2B790)
#define RPG_CLIENT_ARCHIVEDATA_CLEARNEWSTATUSINENTRYLIST_OFFSET UNITYSDK_OFFSET(0x19B2B880)
#define RPG_CLIENT_ARCHIVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19B2B3A0)
#define RPG_CLIENT_ARCHIVEDATA_GETALLARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0x19B2B920)
#define RPG_CLIENT_ARCHIVEDATA_GETENTRYBYID_OFFSET UNITYSDK_OFFSET(0x19B2B700)
#define RPG_CLIENT_ARCHIVEDATA_GET_ALLENTRIESLIST_OFFSET UNITYSDK_OFFSET(0x19B2B990)
#define RPG_CLIENT_ARCHIVEDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x19B2BF90)
#define RPG_CLIENT_ARCHIVEDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x19B2BF70)
#define RPG_CLIENT_ARCHIVEDATA_ONENTRYCLICK_OFFSET UNITYSDK_OFFSET(0x19B2B6A0)
#define RPG_CLIENT_ARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x19B2B650)
#define RPG_CLIENT_ARCHIVEDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x19B2BFA0)
#define RPG_CLIENT_ARCHIVEDATA_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x19B2BF80)
#define RPG_CLIENT_ARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19B2B600)
#define RPG_CLIENT_ARCHIVEDATA__ADDENTRY_OFFSET UNITYSDK_OFFSET(0x19B2BEC0)
#define RPG_CLIENT_ARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2BFB0)
#define RPG_CLIENT_ARCHIVEDATA__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x19B2BCC0)
#define RPG_CLIENT_ARCHIVEDATA__RESETALLENTRIESSTATE_OFFSET UNITYSDK_OFFSET(0x19B2BB50)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveData_TypeDefinitionIndex = 59657;

	class ArchiveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseArchiveEntry*>* _AllEntries; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* _AllEntriesList; // 0x18
		::RPG::Client::ArchiveRedDotType _RedDotType; // 0x20
		::System::UInt32 _CurProgress_k__BackingField; // 0x24
		::System::UInt32 _TotalProgress_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ArchiveData* Create(::RPG::Client::ArchiveType a1)
		{
			return ((::RPG::Client::ArchiveData*(*)(::RPG::Client::ArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_FF220487FAB45279* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_FF220487FAB45279* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void OnEntryClick(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_ONENTRYCLICK_OFFSET))(this, a1);
		}

		::RPG::Client::BaseArchiveEntry* GetEntryByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::BaseArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GETENTRYBYID_OFFSET))(this, a1);
		}

		::System::Void ClearAllNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_CLEARALLNEWSTATUS_OFFSET))(this);
		}

		::System::Void ClearNewStatusInEntryList(::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_CLEARNEWSTATUSINENTRYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* GetAllArchiveEntries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GETALLARCHIVEENTRIES_OFFSET))(this);
		}

		::System::Void _ResetAllEntriesState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__RESETALLENTRIESSTATE_OFFSET))(this);
		}

		::System::Void _RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void _AddEntry(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__ADDENTRY_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_SET_TOTALPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* get_AllEntriesList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GET_ALLENTRIESLIST_OFFSET))(this);
		}
	};
}
