#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONS_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x836D350)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONS_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x836D360)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x836D370)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyAchievementDefinitionByAchievementIdOptions_TypeDefinitionIndex = 36761;

	class CopyAchievementDefinitionByAchievementIdOptions : public ::System::Object
	{
	public:
		::System::String* _AchievementId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONS_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONS_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}
	};
}
