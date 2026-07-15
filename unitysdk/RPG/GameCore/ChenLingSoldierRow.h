#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C38A1C0)
#define RPG_GAMECORE_CHENLINGSOLDIERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierRow_TypeDefinitionIndex = 10662;

	class ChenLingSoldierRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x10
		::System::String* ModelPath; // 0x18
		::System::String* SmallIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* PromotionConditionList; // 0x28
		::System::String* SmallIconOutlinePath; // 0x30
		::Il2CppArray<::System::UInt32>* AtkSkillIDList; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 InitialMaxLevel; // 0x50
		::RPG::GameCore::ChenLingBattleInitPosition Position; // 0x54
		::System::UInt32 PromotionEffectID; // 0x58
		::RPG::Client::TextID SkillDesc; // 0x60
		::System::UInt32 ID; // 0x70
		::System::Boolean IsOnlyForEnemy; // 0x74
		::RPG::Client::TextID PromotionSkillDesc; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingSoldierRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSoldierRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
