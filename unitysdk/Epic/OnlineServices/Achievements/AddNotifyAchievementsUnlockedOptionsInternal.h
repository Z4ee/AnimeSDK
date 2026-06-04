#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class AddNotifyAchievementsUnlockedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1EC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EB0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int AddNotifyAchievementsUnlockedOptionsInternal_TypeDefinitionIndex = 43387;

	struct alignas(4) AddNotifyAchievementsUnlockedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
