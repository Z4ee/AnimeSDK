#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERATLASEXTRAPHASESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1C1B20)
#define RPG_GAMECORE_MONSTERATLASEXTRAPHASESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C1F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterAtlasExtraPhasesRow_TypeDefinitionIndex = 13646;

	class MonsterAtlasExtraPhasesRow : public ::System::Object
	{
	public:
		::System::String* ManikinConfigPath; // 0x10
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x18
		::System::String* ManikinPrefabPath; // 0x20
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x30
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x38
		::RPG::Client::TextID MonsterIntroduction; // 0x40
		::RPG::Client::TextID MonsterName; // 0x50
		::System::Int32 PhaseID; // 0x60
		::System::UInt32 TemplateGroupID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERATLASEXTRAPHASESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERATLASEXTRAPHASESROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
