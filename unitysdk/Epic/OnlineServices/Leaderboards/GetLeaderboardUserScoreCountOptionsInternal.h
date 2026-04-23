#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardUserScoreCountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x44C00)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x44AE0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x44A10)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x44960)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardUserScoreCountOptionsInternal_TypeDefinitionIndex = 42023;

	struct alignas(8) GetLeaderboardUserScoreCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_StatName; // 0x18

		::System::Void set_StatName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_SET_STATNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
