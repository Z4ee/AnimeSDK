#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEPASSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A3F18B0)
#define RPG_GAMECORE_BATTLEPASSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F1DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassConfigRow_TypeDefinitionIndex = 12384;

	class BattlePassConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WeekOrder2; // 0x10
		::Il2CppArray<::System::UInt32>* WeekChainQuestList; // 0x18
		::Il2CppArray<::System::UInt32>* VersionQuestList; // 0x20
		::Il2CppArray<::System::UInt32>* BillboardShow; // 0x28
		::Il2CppArray<::System::UInt32>* WeekOrder1; // 0x30
		::Il2CppArray<::System::UInt32>* WeekQuestList; // 0x38
		::Il2CppArray<::System::UInt32>* LevelUpShow; // 0x40
		::Il2CppArray<::System::UInt32>* EquipmentShow; // 0x48
		::System::UInt32 GroupID; // 0x50
		::System::UInt32 RefreshBeginWeek; // 0x54
		::System::UInt32 ScheduleDataID; // 0x58
		::System::UInt32 Purchase68; // 0x5C
		::System::UInt32 NextID; // 0x60
		::System::UInt32 ID; // 0x64
		::System::UInt32 BattlePassWeekID; // 0x68
		::System::UInt32 Purchase128; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePassConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
