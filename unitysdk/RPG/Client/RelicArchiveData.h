#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class RelicArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0xC6D09B0)
#define RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xC6D1040)
#define RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC6D0CB0)
#define RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D07A0)
#define RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET UNITYSDK_OFFSET(0xC6D07B0)
#define RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0xC6D1270)
#define RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xC6D1210)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicArchiveData_TypeDefinitionIndex = 58418;

	class RelicArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicArchiveEntry*>* GetRelicArchiveEntries(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicArchiveEntry*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitAllRelicEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, a1);
		}
	};
}
