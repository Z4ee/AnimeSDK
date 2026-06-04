#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"

namespace RPG::Client { class NounArchiveData; }
namespace RPG::GameCore { class NounAtlasRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOUNARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC2E8DD0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC2E9940)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GETLASTUNLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xC2E97D0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_OWNERARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xC2E97B0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xC2E9920)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC2E9730)
#define RPG_CLIENT_NOUNARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xC2E9A30)
#define RPG_CLIENT_NOUNARCHIVEENTRY_ISNEWUNLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xC2E98C0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_SET_OWNERARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xC2E97C0)
#define RPG_CLIENT_NOUNARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC2E8E60)
#define RPG_CLIENT_NOUNARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E9300)
#define RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC2E9A50)
#define RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC2E9AC0)
#define RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC2E9AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int NounArchiveEntry_TypeDefinitionIndex = 58415;

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

		::System::Boolean __iFixBaseProxy_CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, a1);
		}
	};
}
