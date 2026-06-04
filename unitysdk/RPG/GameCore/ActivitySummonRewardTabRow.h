#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19407110)
#define RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19407360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonRewardTabRow_TypeDefinitionIndex = 11838;

	class ActivitySummonRewardTabRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::RPG::Client::TextID QuestName; // 0x18
		::RPG::Client::TextID OriginalQuestName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivitySummonRewardTabRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonRewardTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
