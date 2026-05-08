#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class UserToken; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B4730)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x8B4420)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x8B4550)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B46C0)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B46B0)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x8B4490)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x8B4600)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int UserTokenInternal_TypeDefinitionIndex = 33736;

	struct alignas(8) UserTokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ProductUserId; // 0x18
		::System::IntPtr m_Token; // 0x20

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_PRODUCTUSERID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_TOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::UserToken* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::UserToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
