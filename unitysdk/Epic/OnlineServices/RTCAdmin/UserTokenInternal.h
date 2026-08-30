#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class UserToken; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x72F50)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x72C30)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x72D60)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x72ED0)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x72EC0)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x72CA0)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x72E10)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int UserTokenInternal_TypeDefinitionIndex = 45363;

	struct alignas(8) UserTokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ProductUserId; // 0x18
		::System::IntPtr m_Token; // 0x20

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET))(this, a1);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_TOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::UserToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::UserToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
