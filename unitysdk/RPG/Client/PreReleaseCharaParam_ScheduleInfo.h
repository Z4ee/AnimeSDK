#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PreAvatarType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class ScheduleData; }

#define RPG_CLIENT_PRERELEASECHARAPARAM_SCHEDULEINFO_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x39D2C40)

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseCharaParam_ScheduleInfo_TypeDefinitionIndex = 62720;

	struct alignas(4) PreReleaseCharaParam_ScheduleInfo
	{
		::RPG::GameCore::PreAvatarType ReleaseType; // 0x10
		::System::UInt32 ScheduleID; // 0x14

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASECHARAPARAM_SCHEDULEINFO_GET_SCHEDULEDATA_OFFSET))(this);
		}
	};
}
