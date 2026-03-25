#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F09010)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F09690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardDataRow_TypeDefinitionIndex = 11235;

	class ActivityQuestRewardDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 QuestTabID; // 0x18
		::RPG::Client::TextID QuestTabName; // 0x20
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 UnlockQuest; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityQuestRewardDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityQuestRewardDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
