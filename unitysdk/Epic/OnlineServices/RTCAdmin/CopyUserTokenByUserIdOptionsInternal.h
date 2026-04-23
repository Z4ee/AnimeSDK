#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class CopyUserTokenByUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x69310)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x69300)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x69220)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_QUERYID_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x69160)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int CopyUserTokenByUserIdOptionsInternal_TypeDefinitionIndex = 41496;

	struct alignas(8) CopyUserTokenByUserIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::UInt32 m_QueryId; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_QueryId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_QUERYID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
