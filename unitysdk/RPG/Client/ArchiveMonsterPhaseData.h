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

#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B32B890)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B32B750)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_GET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0x1B32BA20)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_SET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0x1B32BA30)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32B880)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveMonsterPhaseData_TypeDefinitionIndex = 62499;

	class ArchiveMonsterPhaseData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x10
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x18
		::System::String* ManikinConfigPath; // 0x20
		::RPG::Client::MonsterResistData* _ResistData_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x30
		::System::String* ManikinPrefabPath; // 0x38
		::System::UInt32 TemplateGroupID; // 0x40
		::System::Int32 PhaseID; // 0x44
		::RPG::Client::TextID MonsterName; // 0x48
		::RPG::Client::TextID MonsterIntroduction; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ArchiveMonsterPhaseData* Create(::RPG::GameCore::MonsterTemplateRow* a1)
		{
			return ((::RPG::Client::ArchiveMonsterPhaseData*(*)(::RPG::GameCore::MonsterTemplateRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ArchiveMonsterPhaseData* Create_1(::RPG::GameCore::MonsterAtlasExtraPhasesRow* a1, ::RPG::Client::ArchiveMonsterPhaseData* a2)
		{
			return ((::RPG::Client::ArchiveMonsterPhaseData*(*)(::RPG::GameCore::MonsterAtlasExtraPhasesRow*, ::RPG::Client::ArchiveMonsterPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::RPG::Client::MonsterResistData* get_ResistData()
		{
			return ((::RPG::Client::MonsterResistData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_GET_RESISTDATA_OFFSET))(this);
		}

		::System::Void set_ResistData(::RPG::Client::MonsterResistData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterResistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_SET_RESISTDATA_OFFSET))(this, a1);
		}
	};
}
