#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionUtils_SubMissionSortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SubMissionInfoConfig; }

#define RPG_CLIENT_MISSIONUTILS_SUBMISSIONSORTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD71DAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_SubMissionSortItem_TypeDefinitionIndex = 66230;

	class MissionUtils_SubMissionSortItem : public ::System::Object
	{
	public:
		::RPG::GameCore::SubMissionInfoConfig* subMissionConfig; // 0x10
		::System::Boolean canReachFinish; // 0x18
		::System::Boolean isBranchEnd; // 0x19
		::System::Boolean isBranchStart; // 0x1A
		::System::Int32 indent; // 0x1C
		::RPG::Client::MissionUtils_SubMissionSortType subMissionType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_SUBMISSIONSORTITEM__CTOR_OFFSET))(this);
		}
	};
}
