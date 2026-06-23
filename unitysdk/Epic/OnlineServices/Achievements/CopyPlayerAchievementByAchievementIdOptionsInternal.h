#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class CopyPlayerAchievementByAchievementIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9392F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x939280)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x939100)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9391B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x939270)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x939040)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyPlayerAchievementByAchievementIdOptionsInternal_TypeDefinitionIndex = 36378;

	struct alignas(8) CopyPlayerAchievementByAchievementIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_AchievementId; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
