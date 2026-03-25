#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionByAchievementIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1B80)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1A00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1AB0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyAchievementDefinitionByAchievementIdOptionsInternal_TypeDefinitionIndex = 36762;

	struct alignas(8) CopyAchievementDefinitionByAchievementIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AchievementId; // 0x18

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
