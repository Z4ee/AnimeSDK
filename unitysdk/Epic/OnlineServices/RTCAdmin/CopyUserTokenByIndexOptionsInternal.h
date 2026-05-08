#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAdmin { class CopyUserTokenByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E29E0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E29C0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_QUERYID_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_USERTOKENINDEX_OFFSET UNITYSDK_OFFSET(0x5B6810)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int CopyUserTokenByIndexOptionsInternal_TypeDefinitionIndex = 33713;

	struct alignas(4) CopyUserTokenByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_UserTokenIndex; // 0x14
		::System::UInt32 m_QueryId; // 0x18

		::System::Void set_UserTokenIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_USERTOKENINDEX_OFFSET))(this, value);
		}

		::System::Void set_QueryId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_QUERYID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_COPYUSERTOKENBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
