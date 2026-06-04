#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONS_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA0B05E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONS_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xA0B05F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B0600)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyAchievementDefinitionV2ByAchievementIdOptions_TypeDefinitionIndex = 43394;

	class CopyAchievementDefinitionV2ByAchievementIdOptions : public ::System::Object
	{
	public:
		::System::String* _AchievementId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONS_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONS_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}
	};
}
