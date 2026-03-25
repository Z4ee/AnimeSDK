#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioInputStateCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioInputStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86F12C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86F1240)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86F1260)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86F1280)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x86F12A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86F18F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86F1250)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86F1270)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86F12D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86F1290)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x86F12B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86F1A20)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioInputStateCallbackInfo_TypeDefinitionIndex = 35613;

	class AudioInputStateCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus _Status_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus get_Status()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_STATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
