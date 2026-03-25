#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F16B20)
#define RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F16D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonRewardTabRow_TypeDefinitionIndex = 11339;

	class ActivitySummonRewardTabRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OriginalQuestName; // 0x10
		::RPG::Client::TextID QuestName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 GroupID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivitySummonRewardTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonRewardTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
