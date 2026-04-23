#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class CopyPlayerAchievementByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2840)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x27D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x2700)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x27C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x2630)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyPlayerAchievementByIndexOptionsInternal_TypeDefinitionIndex = 42598;

	struct alignas(8) CopyPlayerAchievementByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::UInt32 m_AchievementIndex; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_AchievementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_ACHIEVEMENTINDEX_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
