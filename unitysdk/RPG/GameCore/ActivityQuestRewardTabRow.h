#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F09F70)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0A570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardTabRow_TypeDefinitionIndex = 11233;

	class ActivityQuestRewardTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestTabList; // 0x10
		::System::UInt32 QuestTabGroupID; // 0x18
		::RPG::Client::TextID QuestTabGroupName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityQuestRewardTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityQuestRewardTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
