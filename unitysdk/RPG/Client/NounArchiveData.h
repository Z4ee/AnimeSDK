#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/Client/NounArchiveType.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class NounArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOUNARCHIVEDATA_GETARCHIVEENTRYBYID_OFFSET UNITYSDK_OFFSET(0xC2E8B30)
#define RPG_CLIENT_NOUNARCHIVEDATA_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xC2E9620)
#define RPG_CLIENT_NOUNARCHIVEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC2E9500)
#define RPG_CLIENT_NOUNARCHIVEDATA_HASNEWENTRY_OFFSET UNITYSDK_OFFSET(0xC2E8D00)
#define RPG_CLIENT_NOUNARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xC2E8AD0)
#define RPG_CLIENT_NOUNARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC2E8940)
#define RPG_CLIENT_NOUNARCHIVEDATA__ADDTONOUNARCHIVEDATALIST_OFFSET UNITYSDK_OFFSET(0xC2E86E0)
#define RPG_CLIENT_NOUNARCHIVEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2E9630)
#define RPG_CLIENT_NOUNARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E8400)
#define RPG_CLIENT_NOUNARCHIVEDATA__INITALLNOUNENTRIES_OFFSET UNITYSDK_OFFSET(0xC2E8420)
#define RPG_CLIENT_NOUNARCHIVEDATA__INITTOCHANGENOUNATLASROWIDS_OFFSET UNITYSDK_OFFSET(0xC2E8FE0)
#define RPG_CLIENT_NOUNARCHIVEDATA__ISTOCHANGEROW_OFFSET UNITYSDK_OFFSET(0xC2E9270)
#define RPG_CLIENT_NOUNARCHIVEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0xC2E89A0)
#define RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0xC2E96D0)
#define RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xC2E9670)

namespace RPG::Client
{
	inline static constexpr unsigned int NounArchiveData_TypeDefinitionIndex = 58416;

	class NounArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__ToChangeNounAtlasRowIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NounArchiveData_TypeDefinitionIndex)->GetStaticField(0x683C0);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NounArchiveData*>** StaticGet__AllNounArchiveData()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NounArchiveData*>**)Il2CppClass::FromTypeDefinitionIndex(NounArchiveData_TypeDefinitionIndex)->GetStaticField(0x683C8);
		}
		::RPG::Client::NounArchiveType _NounType; // 0x30

		::System::Void _ctor(::RPG::Client::NounArchiveType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NounArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__CCTOR_OFFSET))();
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::RPG::Client::NounArchiveEntry* GetArchiveEntryByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::NounArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_GETARCHIVEENTRYBYID_OFFSET))(this, a1);
		}

		::System::Boolean HasNewEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_HASNEWENTRY_OFFSET))(this);
		}

		::System::Void _Refresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__REFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitAllNounEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__INITALLNOUNENTRIES_OFFSET))(this);
		}

		::System::Void _InitToChangeNounAtlasRowIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__INITTOCHANGENOUNATLASROWIDS_OFFSET))(this);
		}

		::System::Boolean _IsToChangeRow(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__ISTOCHANGEROW_OFFSET))(this, a1);
		}

		::System::Void _AddToNounArchiveDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__ADDTONOUNARCHIVEDATALIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_ReddotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, a1);
		}
	};
}
