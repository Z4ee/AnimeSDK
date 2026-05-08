#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/UpdateSendingCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A4F20B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1A4F2090)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A4F2030)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A4F2050)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A4F2010)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1A4F2070)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1A4F2430)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1A4F20A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1A4F2040)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A4F2060)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1A4F20D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1A4F2020)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1A4F2080)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F2570)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateSendingCallbackInfo_TypeDefinitionIndex = 33708;

	class UpdateSendingCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _RoomName_k__BackingField; // 0x20
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus _AudioStatus_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_AUDIOSTATUS_OFFSET))(this);
		}

		::System::Void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_AUDIOSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
