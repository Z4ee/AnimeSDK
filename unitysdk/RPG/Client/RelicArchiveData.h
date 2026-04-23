#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class RelicArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0xAF89D00)
#define RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xAF8A2F0)
#define RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAF89FB0)
#define RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF89B30)
#define RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET UNITYSDK_OFFSET(0xAF89B40)
#define RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0xAF8A520)
#define RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xAF8A4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicArchiveData_TypeDefinitionIndex = 57606;

	class RelicArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicArchiveEntry*>* GetRelicArchiveEntries(::System::Boolean isPlanarSuit)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicArchiveEntry*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET))(this, isPlanarSuit);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::System::Void _InitAllRelicEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, P0);
		}
	};
}
