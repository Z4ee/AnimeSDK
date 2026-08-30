#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_GET_QUERYID_OFFSET UNITYSDK_OFFSET(0x1DE409D0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DE409B0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_SET_QUERYID_OFFSET UNITYSDK_OFFSET(0x1DE409E0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DE409C0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE409F0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int CopyUserTokenByUserIdOptions_TypeDefinitionIndex = 45341;

	class CopyUserTokenByUserIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::UInt32 _QueryId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_QueryId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_GET_QUERYID_OFFSET))(this);
		}

		::System::Void set_QueryId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYUSERIDOPTIONS_SET_QUERYID_OFFSET))(this, a1);
		}
	};
}
