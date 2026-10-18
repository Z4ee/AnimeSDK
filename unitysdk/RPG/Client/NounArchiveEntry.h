#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"

namespace RPG::Client { class NounArchiveData; }
namespace RPG::GameCore { class NounAtlasRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOUNARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD9CF120)
#define RPG_CLIENT_NOUNARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xD9CFCC0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GETLASTUNLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xD9CFB10)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_OWNERARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xD9CFAF0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xD9CFC60)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD9CFA70)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xD9CFDB0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_ISNEWUNLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xD9CFC00)
#define RPG_CLIENT_NOUNARCHIVEENTRY_SET_OWNERARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xD9CFB00)
#define RPG_CLIENT_NOUNARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xD9CF1B0)
#define RPG_CLIENT_NOUNARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CF6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int NounArchiveEntry_TypeDefinitionIndex = 62433;

	class NounArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::NounAtlasRow*>* _Rows; // 0x20
		::RPG::Client::NounArchiveData* _OwnerArchiveData_k__BackingField; // 0x28
		::System::Int32 _CurrentIndex; // 0x30

		::System::Void _ctor(::RPG::GameCore::NounAtlasRow* a1, ::RPG::Client::NounArchiveData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NounAtlasRow*, ::RPG::Client::NounArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::NounAtlasRow* get_Row()
		{
			return ((::RPG::GameCore::NounAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::NounArchiveData* get_OwnerArchiveData()
		{
			return ((::RPG::Client::NounArchiveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_OWNERARCHIVEDATA_OFFSET))(this);
		}

		::System::Void set_OwnerArchiveData(::RPG::Client::NounArchiveData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NounArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_SET_OWNERARCHIVEDATA_OFFSET))(this, a1);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsNewUnlockIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_ISNEWUNLOCKINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetLastUnlockIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GETLASTUNLOCKINDEX_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_UNLOCK_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_REDDOTKEY_OFFSET))(this);
		}
	};
}
