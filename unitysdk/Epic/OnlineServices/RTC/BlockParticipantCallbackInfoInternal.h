#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x6BC60)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x60D0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x6B9C0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6BAD0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x6BBF0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6BB40)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int BlockParticipantCallbackInfoInternal_TypeDefinitionIndex = 42326;

	struct alignas(8) BlockParticipantCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_RoomName; // 0x28
		::System::IntPtr m_ParticipantId; // 0x30
		::System::Int32 m_Blocked; // 0x38

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Boolean get_Blocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTCALLBACKINFOINTERNAL_GET_BLOCKED_OFFSET))(this);
		}
	};
}
