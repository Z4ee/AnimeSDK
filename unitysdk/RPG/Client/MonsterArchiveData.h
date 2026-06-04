#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class MonsterArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERARCHIVEDATA_CAMPCOMPARE_OFFSET UNITYSDK_OFFSET(0xC1983F0)
#define RPG_CLIENT_MONSTERARCHIVEDATA_GETALLMONSTERCAMPID_OFFSET UNITYSDK_OFFSET(0xC198270)
#define RPG_CLIENT_MONSTERARCHIVEDATA_GETMONSTERARCHIVEENTRIESBYCAMPID_OFFSET UNITYSDK_OFFSET(0xC197FE0)
#define RPG_CLIENT_MONSTERARCHIVEDATA_ISCAMPCONTAINUNLOCKMONSTER_OFFSET UNITYSDK_OFFSET(0xC198390)
#define RPG_CLIENT_MONSTERARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xC197D90)
#define RPG_CLIENT_MONSTERARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC197AE0)
#define RPG_CLIENT_MONSTERARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC197780)
#define RPG_CLIENT_MONSTERARCHIVEDATA__INITALLMONSTERENTRIES_OFFSET UNITYSDK_OFFSET(0xC1977E0)
#define RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0xC1985E0)
#define RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xC198580)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterArchiveData_TypeDefinitionIndex = 58413;

	class MonsterArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AllContainUnlockMonsterCampIDSet; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AllMonsterCampIDSet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA_REFRESH_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, a1);
		}
	};
}
