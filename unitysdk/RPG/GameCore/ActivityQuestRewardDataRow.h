#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F9CB0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193FA350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardDataRow_TypeDefinitionIndex = 11737;

	class ActivityQuestRewardDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID QuestTabName; // 0x18
		::System::UInt32 ActivityModuleID; // 0x28
		::System::UInt32 QuestTabID; // 0x2C
		::System::UInt32 UnlockQuest; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityQuestRewardDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityQuestRewardDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
