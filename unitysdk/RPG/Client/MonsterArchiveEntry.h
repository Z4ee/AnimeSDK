#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"

namespace RPG::Client { class ArchiveMonsterPhaseData; }
namespace RPG::Client { class MonsterArchiveData; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xD8B9EA0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_GET_MONSTERPHASES_OFFSET UNITYSDK_OFFSET(0xD8BA520)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD8B95C0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xD8BA470)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0xD8B9E20)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_SETDISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xD8B9DD0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xD8B9D90)
#define RPG_CLIENT_MONSTERARCHIVEENTRY__INITPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD8BA190)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterArchiveEntry_TypeDefinitionIndex = 62513;

	class MonsterArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ArchiveMonsterPhaseData*>* _MonsterPhases; // 0x20
		::RPG::GameCore::MonsterTemplateRow* _Row; // 0x28
		::RPG::Client::MonsterArchiveData* OwnerArchiveData; // 0x30
		::System::UInt32 _RealMonsterID; // 0x38
		::System::UInt32 KillCount; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_RESET_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void SetDisplayMonsterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_SETDISPLAYMONSTERID_OFFSET))(this, a1);
		}

		::System::Void _InitPhaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY__INITPHASEDATA_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get_Row()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ArchiveMonsterPhaseData*>* get_MonsterPhases()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ArchiveMonsterPhaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_GET_MONSTERPHASES_OFFSET))(this);
		}
	};
}
