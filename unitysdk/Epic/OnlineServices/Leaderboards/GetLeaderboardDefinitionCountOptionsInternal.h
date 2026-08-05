#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardDefinitionCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9864A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardDefinitionCountOptionsInternal_TypeDefinitionIndex = 36460;

	struct alignas(4) GetLeaderboardDefinitionCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
