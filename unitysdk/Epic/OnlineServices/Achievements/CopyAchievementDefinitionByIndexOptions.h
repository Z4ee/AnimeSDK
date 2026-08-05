#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYINDEXOPTIONS_GET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1C2ADDF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYINDEXOPTIONS_SET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1C2ADE00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2ADE10)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyAchievementDefinitionByIndexOptions_TypeDefinitionIndex = 37030;

	class CopyAchievementDefinitionByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _AchievementIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AchievementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYINDEXOPTIONS_GET_ACHIEVEMENTINDEX_OFFSET))(this);
		}

		::System::Void set_AchievementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYINDEXOPTIONS_SET_ACHIEVEMENTINDEX_OFFSET))(this, value);
		}
	};
}
