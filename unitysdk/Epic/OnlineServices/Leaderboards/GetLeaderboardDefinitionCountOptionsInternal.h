#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardDefinitionCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4B2E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EC0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardDefinitionCountOptionsInternal_TypeDefinitionIndex = 45865;

	struct alignas(4) GetLeaderboardDefinitionCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
