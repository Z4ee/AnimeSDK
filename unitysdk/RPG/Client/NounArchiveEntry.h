#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"

namespace RPG::Client { class NounArchiveData; }
namespace RPG::GameCore { class NounAtlasRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOUNARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E8E0E0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9E8EC60)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GETLASTUNLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x9E8EAC0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_OWNERARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x9E8EAA0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x9E8EBF0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9E8EA30)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x9E8EE80)
#define RPG_CLIENT_NOUNARCHIVEENTRY_ISNEWUNLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x9E8EB90)
#define RPG_CLIENT_NOUNARCHIVEENTRY_SET_OWNERARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x9E8EAB0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9E8E170)
#define RPG_CLIENT_NOUNARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8E6A0)
#define RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E8EEF0)
#define RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9E8EF70)
#define RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9E8EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int NounArchiveEntry_TypeDefinitionIndex = 50724;

	class NounArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::NounAtlasRow*>* _Rows; // 0x20
		::RPG::Client::NounArchiveData* _OwnerArchiveData_k__BackingField; // 0x28
		::System::Int32 _CurrentIndex; // 0x30

		::System::Void _ctor(::RPG::GameCore::NounAtlasRow* nounArchiveData, ::RPG::Client::NounArchiveData* ownerArchiveData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NounAtlasRow*, ::RPG::Client::NounArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY__CTOR_OFFSET))(this, nounArchiveData, ownerArchiveData);
		}

		::RPG::GameCore::NounAtlasRow* get_Row()
		{
			return ((::RPG::GameCore::NounAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::NounArchiveData* get_OwnerArchiveData()
		{
			return ((::RPG::Client::NounArchiveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_OWNERARCHIVEDATA_OFFSET))(this);
		}

		::System::Void set_OwnerArchiveData(::RPG::Client::NounArchiveData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NounArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_SET_OWNERARCHIVEDATA_OFFSET))(this, value);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsNewUnlockIndex(::System::Int32 lastUnlockIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_ISNEWUNLOCKINDEX_OFFSET))(this, lastUnlockIndex);
		}

		::System::Int32 GetLastUnlockIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GETLASTUNLOCKINDEX_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_UNLOCK_OFFSET))(this, fromLogin);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Unlock(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, P0);
		}
	};
}
