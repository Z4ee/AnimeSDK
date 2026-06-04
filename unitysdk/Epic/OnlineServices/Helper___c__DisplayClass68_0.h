#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class Helper_DelegateHolder; }

#define EPIC_ONLINESERVICES_HELPER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CD8D0)
#define EPIC_ONLINESERVICES_HELPER___C__DISPLAYCLASS68_0__TRYREMOVECALLBACKBYNOTIFICATIONID_B__0_OFFSET UNITYSDK_OFFSET(0xA2CDAF0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper___c__DisplayClass68_0_TypeDefinitionIndex = 41874;

	class Helper___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::UInt64 notificationId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryRemoveCallbackByNotificationId_b__0(::System::Collections::Generic::KeyValuePair_2<::System::IntPtr, ::Epic::OnlineServices::Helper_DelegateHolder*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::IntPtr, ::Epic::OnlineServices::Helper_DelegateHolder*>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER___C__DISPLAYCLASS68_0__TRYREMOVECALLBACKBYNOTIFICATIONID_B__0_OFFSET))(this, a1);
		}
	};
}
