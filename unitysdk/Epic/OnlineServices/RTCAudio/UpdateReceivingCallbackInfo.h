#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/UpdateReceivingCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x18CDF950)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0x18CDF930)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x18CDF8B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDF8D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x18CDF910)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x18CDF890)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x18CDF8F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x18CDFE60)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0x18CDF940)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x18CDF8C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDF8E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x18CDF970)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x18CDF920)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x18CDF8A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x18CDF900)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDFFB0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateReceivingCallbackInfo_TypeDefinitionIndex = 33704;

	class UpdateReceivingCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x30
		::System::Boolean _AudioEnabled_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Boolean get_AudioEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GET_AUDIOENABLED_OFFSET))(this);
		}

		::System::Void set_AudioEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_AUDIOENABLED_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
