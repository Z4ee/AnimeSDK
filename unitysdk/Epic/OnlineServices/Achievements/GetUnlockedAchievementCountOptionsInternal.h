#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class GetUnlockedAchievementCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5570)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5560)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x5490)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x53D0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int GetUnlockedAchievementCountOptionsInternal_TypeDefinitionIndex = 46458;

	struct alignas(8) GetUnlockedAchievementCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_USERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETUNLOCKEDACHIEVEMENTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
