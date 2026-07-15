#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLESTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6911D0)
#define RPG_GAMECORE_ILBATTLESTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B691520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleStageConfigRow_TypeDefinitionIndex = 13299;

	class ILBattleStageConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonConfigPath; // 0x10
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x18
		::System::UInt32 CombatAdvantageGroup; // 0x20
		::System::UInt16 RecommendDungeonFloor; // 0x24
		::System::UInt32 Level; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 HardLevelGroup; // 0x30
		::System::UInt32 EliteGroup; // 0x34
		::System::UInt64 CombatValue; // 0x38
		::System::UInt64 RecommendIdleCrystal; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleStageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
