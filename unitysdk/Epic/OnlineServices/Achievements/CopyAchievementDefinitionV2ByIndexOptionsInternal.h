#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionV2ByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA29880)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_SET_ACHIEVEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x960CE0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int CopyAchievementDefinitionV2ByIndexOptionsInternal_TypeDefinitionIndex = 37035;

	struct alignas(4) CopyAchievementDefinitionV2ByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_AchievementIndex; // 0x14

		::System::Void set_AchievementIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_SET_ACHIEVEMENTINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_COPYACHIEVEMENTDEFINITIONV2BYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
