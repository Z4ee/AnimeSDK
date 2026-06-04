#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionV2ByAchievementIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2420)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2410)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x2290)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2340)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyAchievementDefinitionV2ByAchievementIdOptionsInternal_TypeDefinitionIndex = 43395;

	struct alignas(8) CopyAchievementDefinitionV2ByAchievementIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AchievementId; // 0x18

		::System::Void set_AchievementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
