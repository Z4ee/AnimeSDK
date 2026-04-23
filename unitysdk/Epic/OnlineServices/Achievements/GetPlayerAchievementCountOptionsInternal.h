#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Achievements { class GetPlayerAchievementCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5050)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4F20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4E50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x4D90)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int GetPlayerAchievementCountOptionsInternal_TypeDefinitionIndex = 42610;

	struct alignas(8) GetPlayerAchievementCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
