#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIPLEDROPUSEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F9640)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropUsedData_TypeDefinitionIndex = 66356;

	class MultipleDropUsedData : public ::System::Object
	{
	public:
		::System::UInt32 MultipleActivityID; // 0x10
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x14
		::System::UInt32 Multiplier; // 0x18
		::RPG::Client::MultipleDropTimesData TimesData; // 0x1C
		::System::UInt32 UsedTimes; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUSEDDATA__CTOR_OFFSET))(this);
		}
	};
}
