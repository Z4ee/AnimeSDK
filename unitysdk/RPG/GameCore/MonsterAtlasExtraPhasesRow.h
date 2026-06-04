#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERATLASEXTRAPHASESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199A57F0)
#define RPG_GAMECORE_MONSTERATLASEXTRAPHASESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199A5C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterAtlasExtraPhasesRow_TypeDefinitionIndex = 13498;

	class MonsterAtlasExtraPhasesRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x18
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x20
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x28
		::System::String* ManikinPrefabPath; // 0x30
		::System::String* ManikinConfigPath; // 0x38
		::System::UInt32 TemplateGroupID; // 0x40
		::System::Int32 PhaseID; // 0x44
		::RPG::Client::TextID MonsterName; // 0x48
		::RPG::Client::TextID MonsterIntroduction; // 0x58

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
