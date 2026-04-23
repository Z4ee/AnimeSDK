#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYQUESTREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18629480)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18629A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardConfigRow_TypeDefinitionIndex = 11634;

	class ActivityQuestRewardConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestTabGroupList; // 0x10
		::System::UInt32 FinalRewardQuest; // 0x18
		::System::UInt32 ActivityRewardID; // 0x1C
		::System::UInt32 ActivityModule; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityQuestRewardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityQuestRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
