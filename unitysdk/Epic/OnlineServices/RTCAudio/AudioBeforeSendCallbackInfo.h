#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioBeforeSendCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AudioBuffer; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86EF130)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x86EF110)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86EF0B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86EF0D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86EF0F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86EF840)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_BUFFER_OFFSET UNITYSDK_OFFSET(0x86EF120)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86EF0C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86EF0E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86EF140)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86EF100)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86EF970)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioBeforeSendCallbackInfo_TypeDefinitionIndex = 35605;

	class AudioBeforeSendCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::RTCAudio::AudioBuffer* _Buffer_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::AudioBuffer* get_Buffer()
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GET_BUFFER_OFFSET))(this);
		}

		::System::Void set_Buffer(::Epic::OnlineServices::RTCAudio::AudioBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBuffer*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_BUFFER_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORESENDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
