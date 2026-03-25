#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17088DA0)
#define RPG_GAMECORE_CHENLINGSOLDIERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17089340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierRow_TypeDefinitionIndex = 10349;

	class ChenLingSoldierRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AtkSkillIDList; // 0x10
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x18
		::System::String* SmallIconPath; // 0x20
		::System::String* SmallIconOutlinePath; // 0x28
		::Il2CppArray<::System::UInt32>* PromotionConditionList; // 0x30
		::System::String* ModelPath; // 0x38
		::System::Boolean IsOnlyForEnemy; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 InitialMaxLevel; // 0x58
		::RPG::GameCore::ChenLingBattleInitPosition Position; // 0x5C
		::System::UInt32 PromotionEffectID; // 0x60
		::RPG::Client::TextID SkillDesc; // 0x68
		::RPG::Client::TextID PromotionSkillDesc; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingSoldierRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSoldierRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
