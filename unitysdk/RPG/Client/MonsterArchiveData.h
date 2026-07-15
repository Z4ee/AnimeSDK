#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_FF220487FAB45279;
namespace RPG::Client { class MonsterArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERARCHIVEDATA_CAMPCOMPARE_OFFSET UNITYSDK_OFFSET(0x195570A0)
#define RPG_CLIENT_MONSTERARCHIVEDATA_GETALLMONSTERCAMPID_OFFSET UNITYSDK_OFFSET(0x19556F20)
#define RPG_CLIENT_MONSTERARCHIVEDATA_GETMONSTERARCHIVEENTRIESBYCAMPID_OFFSET UNITYSDK_OFFSET(0x19556C90)
#define RPG_CLIENT_MONSTERARCHIVEDATA_ISCAMPCONTAINUNLOCKMONSTER_OFFSET UNITYSDK_OFFSET(0x19557040)
#define RPG_CLIENT_MONSTERARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x19556A40)
#define RPG_CLIENT_MONSTERARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19556790)
#define RPG_CLIENT_MONSTERARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19556430)
#define RPG_CLIENT_MONSTERARCHIVEDATA__INITALLMONSTERENTRIES_OFFSET UNITYSDK_OFFSET(0x19556490)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterArchiveData_TypeDefinitionIndex = 59675;

	class MonsterArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AllMonsterCampIDSet; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AllContainUnlockMonsterCampIDSet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FF220487FAB45279* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_FF220487FAB45279* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterArchiveEntry*>* GetMonsterArchiveEntriesByCampID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterArchiveEntry*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_GETMONSTERARCHIVEENTRIESBYCAMPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllMonsterCampID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_GETALLMONSTERCAMPID_OFFSET))(this);
		}

		::System::Boolean IsCampContainUnlockMonster(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_ISCAMPCONTAINUNLOCKMONSTER_OFFSET))(this, a1);
		}

		::System::Int32 CampCompare(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_CAMPCOMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitAllMonsterEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA__INITALLMONSTERENTRIES_OFFSET))(this);
		}
	};
}
