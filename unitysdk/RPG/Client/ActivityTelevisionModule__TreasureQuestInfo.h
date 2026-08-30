#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__TREASUREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule__TreasureQuestInfo_TypeDefinitionIndex = 62083;

	struct alignas(4) ActivityTelevisionModule__TreasureQuestInfo
	{
		::System::UInt32 _TreasureQuestID; // 0x10
		::System::UInt32 _TreasureQuestStageID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__TREASUREQUESTINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
