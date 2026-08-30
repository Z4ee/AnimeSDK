#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_E14A0A1A8B1F847C_3;
namespace RPG::Client { class RelicArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0xDE1CBD0)
#define RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xDE1D260)
#define RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDE1CED0)
#define RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE1C9C0)
#define RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET UNITYSDK_OFFSET(0xDE1C9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicArchiveData_TypeDefinitionIndex = 62519;

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

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_E14A0A1A8B1F847C_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitAllRelicEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET))(this);
		}
	};
}
