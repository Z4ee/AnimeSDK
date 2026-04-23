#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"

namespace RPG::Client { class ArchiveMonsterPhaseData; }
namespace RPG::Client { class MonsterArchiveData; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xAAC85F0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_GET_MONSTERPHASES_OFFSET UNITYSDK_OFFSET(0xAAC8B60)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAAC7CB0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xAAC8AE0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0xAAC8570)
#define RPG_CLIENT_MONSTERARCHIVEENTRY_SETDISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xAAC8440)
#define RPG_CLIENT_MONSTERARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC8400)
#define RPG_CLIENT_MONSTERARCHIVEENTRY__INITPHASEDATA_OFFSET UNITYSDK_OFFSET(0xAAC88D0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xAAC8BE0)
#define RPG_CLIENT_MONSTERARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xAAC8B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterArchiveEntry_TypeDefinitionIndex = 57600;

	class MonsterArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::Client::MonsterArchiveData* OwnerArchiveData; // 0x20
		::RPG::GameCore::MonsterTemplateRow* _Row; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ArchiveMonsterPhaseData*>* _MonsterPhases; // 0x30
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

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_COMPARETO_OFFSET))(this, obj);
		}

		::System::Void SetDisplayMonsterID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY_SETDISPLAYMONSTERID_OFFSET))(this, id);
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

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, P0);
		}
	};
}
