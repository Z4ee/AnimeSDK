#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CYCLEQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D00F8F0)
#define RPG_GAMECORE_CYCLEQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D010710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleQuestRow_TypeDefinitionIndex = 14409;

	class CycleQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WeekDayList; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 ScheduleDataID; // 0x20
		::System::UInt32 MaxLevel; // 0x24
		::System::Boolean IsNonPeriodic; // 0x28
		::System::UInt32 CycleID; // 0x2C
		::System::UInt32 MinLevel; // 0x30
		::System::UInt32 FinishedTimes; // 0x34
		::System::UInt32 ActivityModuleID; // 0x38
		::System::UInt32 Cycledays; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CycleQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CycleQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
