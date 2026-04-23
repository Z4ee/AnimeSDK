#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/ParticipantUpdatedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F2B4F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x8F2B4D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F2B430)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F2B450)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x8F2B490)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F2B470)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_SPEAKING_OFFSET UNITYSDK_OFFSET(0x8F2B4B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8F2BE40)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x8F2B4E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F2B440)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F2B460)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8F2B500)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x8F2B4A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F2B480)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_SPEAKING_OFFSET UNITYSDK_OFFSET(0x8F2B4C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2BF70)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int ParticipantUpdatedCallbackInfo_TypeDefinitionIndex = 41469;

	class ParticipantUpdatedCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x20
		::System::String* _RoomName_k__BackingField; // 0x28
		::System::Boolean _Speaking_k__BackingField; // 0x30
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus _AudioStatus_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Boolean get_Speaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_SPEAKING_OFFSET))(this);
		}

		::System::Void set_Speaking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_SPEAKING_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_AUDIOSTATUS_OFFSET))(this);
		}

		::System::Void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_AUDIOSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
