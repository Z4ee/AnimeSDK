#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x5B00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x5C10)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int OnQueryPlayerAchievementsCompleteCallbackInfoInternal_TypeDefinitionIndex = 36802;

	struct alignas(8) OnQueryPlayerAchievementsCompleteCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_UserId; // 0x20

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_UserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINFOINTERNAL_GET_USERID_OFFSET))(this);
		}
	};
}
