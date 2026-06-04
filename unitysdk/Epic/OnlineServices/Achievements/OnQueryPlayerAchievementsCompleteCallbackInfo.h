#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/OnQueryPlayerAchievementsCompleteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0B9B50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0B9B10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0B9AF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GET_USERID_OFFSET UNITYSDK_OFFSET(0xA0B9B30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0B9F50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0B9B20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0B9B70)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0B9B00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_USERID_OFFSET UNITYSDK_OFFSET(0xA0B9B40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BA070)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnQueryPlayerAchievementsCompleteCallbackInfo_TypeDefinitionIndex = 43430;

	class OnQueryPlayerAchievementsCompleteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _UserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_USERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
