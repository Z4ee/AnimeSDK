#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/ParticipantUpdatedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA34C960)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0xA34C940)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA34C8A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA34C8C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA34C900)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA34C8E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_SPEAKING_OFFSET UNITYSDK_OFFSET(0xA34C920)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA34D2B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0xA34C950)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA34C8B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA34C8D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA34C970)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA34C910)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA34C8F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_SPEAKING_OFFSET UNITYSDK_OFFSET(0xA34C930)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA34D3E0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int ParticipantUpdatedCallbackInfo_TypeDefinitionIndex = 42272;

	class ParticipantUpdatedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _RoomName_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x28
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

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::System::Boolean get_Speaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_SPEAKING_OFFSET))(this);
		}

		::System::Void set_Speaking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_SPEAKING_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GET_AUDIOSTATUS_OFFSET))(this);
		}

		::System::Void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_AUDIOSTATUS_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
