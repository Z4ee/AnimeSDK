#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardRecordByUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x431E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x430B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x42FE0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x42F20)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int CopyLeaderboardRecordByUserIdOptionsInternal_TypeDefinitionIndex = 36185;

	struct alignas(8) CopyLeaderboardRecordByUserIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
