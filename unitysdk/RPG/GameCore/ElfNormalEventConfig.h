#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfNormalEventChanceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFNORMALEVENTCONFIG_METHOD_2_5DDA3302AAC40571_OFFSET UNITYSDK_OFFSET(0x196DB770)
#define RPG_GAMECORE_ELFNORMALEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196DBC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfNormalEventConfig_TypeDefinitionIndex = 17568;

	class ElfNormalEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CleanTableEventIconPath; // 0x10
		::System::String* CleanObstacleEventIconPath; // 0x18
		::System::String* CollectCoinEventIconPath; // 0x20
		::System::String* SelectEventIconPath; // 0x28
		::System::String* EscapeFromBillEventIconPath; // 0x30
		::System::Single EscapeFromBillEventLeaveDelay; // 0x38
		::System::String* HelpEventIconPath; // 0x40
		::System::String* ComplaintEventIconPath; // 0x48
		::System::String* ThankEventIconPath; // 0x50
		::System::Single SleepDelayMin; // 0x58
		::System::Single SleepDelayMax; // 0x5C
		::System::UInt32 SleepProcessBonus; // 0x60
		::RPG::GameCore::ElfNormalEventChanceConfig* TableDebrisEventConfig; // 0x68
		::RPG::GameCore::ElfNormalEventChanceConfig* ObstacleEventConfig; // 0x70
		::RPG::GameCore::ElfNormalEventChanceConfig* EscapeFromBillEventConfig; // 0x78
		::RPG::GameCore::ElfNormalEventChanceConfig* HelpEventConfig; // 0x80
		::RPG::GameCore::ElfNormalEventChanceConfig* ComplaintEventConfig; // 0x88
		::RPG::GameCore::ElfNormalEventChanceConfig* ThankEventConfig; // 0x90
		::RPG::GameCore::ElfNormalEventChanceConfig* DrinkEventConfig; // 0x98
		::RPG::GameCore::ElfNormalEventChanceConfig* SleepEventConfig; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFNORMALEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5DDA3302AAC40571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfNormalEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfNormalEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFNORMALEVENTCONFIG_METHOD_2_5DDA3302AAC40571_OFFSET))(a1, a2);
		}
	};
}
