#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PerformanceStartSnapshot; }
namespace RPG::GameCore { class PerformanceBackupConfig; }

#define RPG_CLIENT_ADVENTUREMODULE_PERFORMANCEREPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x182AC280)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule_PerformanceReplayInfo_TypeDefinitionIndex = 59259;

	class AdventureModule_PerformanceReplayInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::PerformanceBackupConfig* BackupConfig; // 0x10
		::Proto::PerformanceStartSnapshot* PerformanceSnapshot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE_PERFORMANCEREPLAYINFO__CTOR_OFFSET))(this);
		}
	};
}
