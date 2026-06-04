#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1968BA20)
#define RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1968BB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveQuestPoolRow_TypeDefinitionIndex = 12481;

	class DailyActiveQuestPoolRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 Type; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DailyActiveQuestPoolRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyActiveQuestPoolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
