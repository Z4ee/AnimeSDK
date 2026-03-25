#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Leaderboards/OnQueryLeaderboardRanksCompleteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x866C3C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x866C3A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x866C380)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x866C660)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x866C3B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x866C3E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x866C390)
#define EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x866C770)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int OnQueryLeaderboardRanksCompleteCallbackInfo_TypeDefinitionIndex = 36210;

	class OnQueryLeaderboardRanksCompleteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
