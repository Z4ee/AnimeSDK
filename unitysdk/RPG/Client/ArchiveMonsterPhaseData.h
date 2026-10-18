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

#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC6927B0)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC692670)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_GET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0xC692940)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA_SET_RESISTDATA_OFFSET UNITYSDK_OFFSET(0xC692950)
#define RPG_CLIENT_ARCHIVEMONSTERPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6927A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveMonsterPhaseData_TypeDefinitionIndex = 62416;

	class ArchiveMonsterPhaseData : public ::System::Object
	{
	public:
		::System::String* ManikinPrefabPath; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x18
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x20
		::System::String* ManikinConfigPath; // 0x28
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x30
		::RPG::Client::MonsterResistData* _ResistData_k__BackingField; // 0x38
		::System::Int32 PhaseID; // 0x40
		::System::UInt32 TemplateGroupID; // 0x44
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
