#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLESTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0C680)
#define RPG_GAMECORE_ILBATTLESTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0C9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleStageConfigRow_TypeDefinitionIndex = 13070;

	class ILBattleStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x10
		::System::String* JsonConfigPath; // 0x18
		::System::UInt32 CombatAdvantageGroup; // 0x20
		::System::UInt32 Level; // 0x24
		::System::UInt32 EliteGroup; // 0x28
		::System::UInt32 HardLevelGroup; // 0x2C
		::System::UInt64 CombatValue; // 0x30
		::System::UInt64 RecommendIdleCrystal; // 0x38
		::System::UInt16 RecommendDungeonFloor; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleStageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESTAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
