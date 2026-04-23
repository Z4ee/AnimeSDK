#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioOutputStateCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioOutputStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F260A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F26020)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F26040)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F26060)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x8F26080)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8F266D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F26030)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F26050)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8F260B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F26070)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x8F26090)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F26800)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioOutputStateCallbackInfo_TypeDefinitionIndex = 41443;

	class AudioOutputStateCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _RoomName_k__BackingField; // 0x20
		::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus _Status_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus get_Status()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_STATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
