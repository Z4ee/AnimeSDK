#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class MonsterArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERARCHIVEDATA_CAMPCOMPARE_OFFSET UNITYSDK_OFFSET(0x9D83130)
#define RPG_CLIENT_MONSTERARCHIVEDATA_GETALLMONSTERCAMPID_OFFSET UNITYSDK_OFFSET(0x9D82FC0)
#define RPG_CLIENT_MONSTERARCHIVEDATA_GETMONSTERARCHIVEENTRIESBYCAMPID_OFFSET UNITYSDK_OFFSET(0x9D82D80)
#define RPG_CLIENT_MONSTERARCHIVEDATA_ISCAMPCONTAINUNLOCKMONSTER_OFFSET UNITYSDK_OFFSET(0x9D830D0)
#define RPG_CLIENT_MONSTERARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D82B50)
#define RPG_CLIENT_MONSTERARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9D828B0)
#define RPG_CLIENT_MONSTERARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D82570)
#define RPG_CLIENT_MONSTERARCHIVEDATA__INITALLMONSTERENTRIES_OFFSET UNITYSDK_OFFSET(0x9D825D0)
#define RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D83330)
#define RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9D832C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterArchiveData_TypeDefinitionIndex = 50722;

	class MonsterArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AllMonsterCampIDSet; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AllContainUnlockMonsterCampIDSet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterArchiveEntry*>* GetMonsterArchiveEntriesByCampID(::System::UInt32 campID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterArchiveEntry*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_GETMONSTERARCHIVEENTRIESBYCAMPID_OFFSET))(this, campID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllMonsterCampID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_GETALLMONSTERCAMPID_OFFSET))(this);
		}

		::System::Boolean IsCampContainUnlockMonster(::System::UInt32 campID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_ISCAMPCONTAINUNLOCKMONSTER_OFFSET))(this, campID);
		}

		::System::Int32 CampCompare(::System::UInt32 a, ::System::UInt32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_CAMPCOMPARE_OFFSET))(this, a, b);
		}

		::System::Void _InitAllMonsterEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA__INITALLMONSTERENTRIES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, P0);
		}
	};
}
