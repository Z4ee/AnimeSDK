#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171454D0)
#define RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171455F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveQuestPoolRow_TypeDefinitionIndex = 11960;

	class DailyActiveQuestPoolRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 Type; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DailyActiveQuestPoolRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyActiveQuestPoolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
