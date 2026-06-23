#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class CopyUnlockedAchievementByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x971C00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x971BF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x971B10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x971A50)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyUnlockedAchievementByIndexOptionsInternal_TypeDefinitionIndex = 36384;

	struct alignas(8) CopyUnlockedAchievementByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::UInt32 m_AchievementIndex; // 0x20

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void set_AchievementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_ACHIEVEMENTINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYUNLOCKEDACHIEVEMENTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
