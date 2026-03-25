#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterResistData; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterAtlasExtraPhasesRow; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System { class String; }

#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x90D71B0)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x90D7070)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_GET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0x90D7340)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_SET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0x90D7350)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90D71A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveMonsterPhaseData_TypeDefinitionIndex = 50707;

	class ArchiveMonsterPhaseData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x10
		::System::String* ManikinConfigPath; // 0x18
		::System::String* ManikinPrefabPath; // 0x20
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x28
		::RPG::Client::MonsterResistData* _ResistData_k__BackingField; // 0x30
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x38
		::RPG::Client::TextID MonsterIntroduction; // 0x40
		::System::UInt32 TemplateGroupID; // 0x50
		::System::Int32 PhaseID; // 0x54
		::RPG::Client::TextID MonsterName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ArchiveMonsterPhaseData* Create(::RPG::GameCore::MonsterTemplateRow* row)
		{
			return ((::RPG::Client::ArchiveMonsterPhaseData*(*)(::RPG::GameCore::MonsterTemplateRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_OFFSET))(row);
		}

		static ::RPG::Client::ArchiveMonsterPhaseData* Create_1(::RPG::GameCore::MonsterAtlasExtraPhasesRow* row, ::RPG::Client::ArchiveMonsterPhaseData* defaultPhase)
		{
			return ((::RPG::Client::ArchiveMonsterPhaseData*(*)(::RPG::GameCore::MonsterAtlasExtraPhasesRow*, ::RPG::Client::ArchiveMonsterPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_1_OFFSET))(row, defaultPhase);
		}

		::RPG::Client::MonsterResistData* get_ResistData()
		{
			return ((::RPG::Client::MonsterResistData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_GET_RESISTDATA_OFFSET))(this);
		}

		::System::Void set_ResistData(::RPG::Client::MonsterResistData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterResistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_SET_RESISTDATA_OFFSET))(this, value);
		}
	};
}
