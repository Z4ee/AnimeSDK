#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAINMISSIONSCHEDULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCDA0E0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDA770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionScheduleRow_TypeDefinitionIndex = 13632;

	class MainMissionScheduleRow : public ::System::Object
	{
	public:
		::System::UInt32 ScheduleDataID; // 0x10
		::System::UInt32 ActivityModuleID; // 0x14
		::System::UInt32 MainMissionID; // 0x18
		::System::Boolean HideRemainTime; // 0x1C
		::System::Boolean IsNotDelete; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionScheduleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionScheduleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
