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

#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9D38E20)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D38CE0)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_GET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0x9D38FB0)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_SET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0x9D38FC0)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D38E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveMonsterPhaseData_TypeDefinitionIndex = 57586;

	class ArchiveMonsterPhaseData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x10
		::RPG::Client::MonsterResistData* _ResistData_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x20
		::System::String* ManikinPrefabPath; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x30
		::System::String* ManikinConfigPath; // 0x38
		::RPG::Client::TextID MonsterName; // 0x40
		::RPG::Client::TextID MonsterIntroduction; // 0x50
		::System::UInt32 TemplateGroupID; // 0x60
		::System::Int32 PhaseID; // 0x64

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
