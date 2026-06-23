#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_GET_QUERYID_OFFSET UNITYSDK_OFFSET(0x1BF04470)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_GET_USERTOKENINDEX_OFFSET UNITYSDK_OFFSET(0x1BF04450)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_SET_QUERYID_OFFSET UNITYSDK_OFFSET(0x1BF04480)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_SET_USERTOKENINDEX_OFFSET UNITYSDK_OFFSET(0x1BF04460)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF04490)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int CopyUserTokenByIndexOptions_TypeDefinitionIndex = 35275;

	class CopyUserTokenByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _UserTokenIndex_k__BackingField; // 0x10
		::System::UInt32 _QueryId_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UserTokenIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_GET_USERTOKENINDEX_OFFSET))(this);
		}

		::System::Void set_UserTokenIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_SET_USERTOKENINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_QueryId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_GET_QUERYID_OFFSET))(this);
		}

		::System::Void set_QueryId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONS_SET_QUERYID_OFFSET))(this, value);
		}
	};
}
