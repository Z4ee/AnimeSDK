#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class GetAchievementDefinitionCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A564A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A39250)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int GetAchievementDefinitionCountOptionsInternal_TypeDefinitionIndex = 44272;

	struct alignas(4) GetAchievementDefinitionCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
