#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/ParticipantStatusChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/RTC/RTCParticipantStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class ParticipantMetadata; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA33DB90)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA33DAD0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA33DAF0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA33DB30)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_PARTICIPANTMETADATA_OFFSET UNITYSDK_OFFSET(0xA33DB70)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_PARTICIPANTSTATUS_OFFSET UNITYSDK_OFFSET(0xA33DB50)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA33DB10)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA33E550)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA33DAE0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA33DB00)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA33DBA0)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA33DB40)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_PARTICIPANTMETADATA_OFFSET UNITYSDK_OFFSET(0xA33DB80)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_PARTICIPANTSTATUS_OFFSET UNITYSDK_OFFSET(0xA33DB60)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA33DB20)
#define EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33E690)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int ParticipantStatusChangedCallbackInfo_TypeDefinitionIndex = 42352;

	class ParticipantStatusChangedCallbackInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>* _ParticipantMetadata_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::System::Object* _ClientData_k__BackingField; // 0x30
		::Epic::OnlineServices::RTC::RTCParticipantStatus _ParticipantStatus_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::RTC::RTCParticipantStatus get_ParticipantStatus()
		{
			return ((::Epic::OnlineServices::RTC::RTCParticipantStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_PARTICIPANTSTATUS_OFFSET))(this);
		}

		::System::Void set_ParticipantStatus(::Epic::OnlineServices::RTC::RTCParticipantStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::RTCParticipantStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_PARTICIPANTSTATUS_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>* get_ParticipantMetadata()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GET_PARTICIPANTMETADATA_OFFSET))(this);
		}

		::System::Void set_ParticipantMetadata(::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::RTC::ParticipantMetadata*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_PARTICIPANTMETADATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_PARTICIPANTSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
