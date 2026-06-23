#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE64320)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int GetAchievementDefinitionCountOptions_TypeDefinitionIndex = 36389;

	class GetAchievementDefinitionCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
