#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class QueryPlayerAchievementsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA20880)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA20810)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA20740)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA20800)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA20680)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int QueryPlayerAchievementsOptionsInternal_TypeDefinitionIndex = 37081;

	struct alignas(8) QueryPlayerAchievementsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
