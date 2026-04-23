#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1884DB30)
#define RPG_GAMECORE_DAILYQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1884DD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyQuestRow_TypeDefinitionIndex = 12397;

	class DailyQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 DailyID; // 0x18
		::System::UInt32 MinLevel; // 0x1C
		::System::Boolean IsDelete; // 0x20
		::System::UInt32 MaxLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DailyQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
