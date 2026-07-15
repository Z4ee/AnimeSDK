#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/RTCParticipantStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class ParticipantMetadata; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x3A7FAD0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A7FBE0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x3A7FD00)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PARTICIPANTMETADATA_OFFSET UNITYSDK_OFFSET(0x3A7FD70)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PARTICIPANTSTATUS_OFFSET UNITYSDK_OFFSET(0x7A7FD0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x3A7FC50)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int ParticipantStatusChangedCallbackInfoInternal_TypeDefinitionIndex = 43214;

	struct alignas(8) ParticipantStatusChangedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_ParticipantId; // 0x28
		::Epic::OnlineServices::RTC::RTCParticipantStatus m_ParticipantStatus; // 0x30
		::System::UInt32 m_ParticipantMetadataCount; // 0x34
		::System::IntPtr m_ParticipantMetadata; // 0x38

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET))(this);
		}

		::Epic::OnlineServices::RTC::RTCParticipantStatus get_ParticipantStatus()
		{
			return ((::Epic::OnlineServices::RTC::RTCParticipantStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PARTICIPANTSTATUS_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>* get_ParticipantMetadata()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PARTICIPANTMETADATA_OFFSET))(this);
		}
	};
}
