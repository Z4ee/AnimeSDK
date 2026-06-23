#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/UpdateSendingCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C8277E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1C8277C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C827760)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C827780)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C827740)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C8277A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C827B60)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1C8277D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C827770)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C827790)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C827800)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C827750)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C8277B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C827CA0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateSendingCallbackInfo_TypeDefinitionIndex = 35271;

	class UpdateSendingCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
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
