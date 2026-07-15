#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceSortedItem; }

#define RPG_CLIENT_MISSIONUTILS_MAINMISSIONPERFORMANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18060940)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_MainMissionPerformanceInfo_TypeDefinitionIndex = 63246;

	class MissionUtils_MainMissionPerformanceInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::PerformanceSortedItem* performanceSortedItem; // 0x10
		::System::UInt32 subMissionID; // 0x18
		::System::UInt32 mainMissionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_MAINMISSIONPERFORMANCEINFO__CTOR_OFFSET))(this);
		}
	};
}
