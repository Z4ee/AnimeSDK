#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class CopyUserTokenByUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x714D0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x714C0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x713E0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_QUERYID_OFFSET UNITYSDK_OFFSET(0x2AA0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x71320)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int CopyUserTokenByUserIdOptionsInternal_TypeDefinitionIndex = 45342;

	struct alignas(8) CopyUserTokenByUserIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::UInt32 m_QueryId; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void set_QueryId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_QUERYID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
