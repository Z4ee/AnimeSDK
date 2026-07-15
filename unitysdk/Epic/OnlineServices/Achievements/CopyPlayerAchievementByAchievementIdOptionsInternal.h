#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class CopyPlayerAchievementByAchievementIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A53BD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A53B50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x3A539D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A53A80)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A53B40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x3A53910)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyPlayerAchievementByAchievementIdOptionsInternal_TypeDefinitionIndex = 44260;

	struct alignas(8) CopyPlayerAchievementByAchievementIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_AchievementId; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void set_AchievementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
