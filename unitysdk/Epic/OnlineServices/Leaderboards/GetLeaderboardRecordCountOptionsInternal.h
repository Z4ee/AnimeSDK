#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardRecordCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x43EF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardRecordCountOptionsInternal_TypeDefinitionIndex = 36195;

	struct alignas(4) GetLeaderboardRecordCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
