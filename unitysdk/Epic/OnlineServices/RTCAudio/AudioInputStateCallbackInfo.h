#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioInputStateCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioInputStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F24B40)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F24AC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F24AE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F24B00)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x8F24B20)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8F25170)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F24AD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F24AF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8F24B50)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F24B10)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x8F24B30)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F252A0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioInputStateCallbackInfo_TypeDefinitionIndex = 41439;

	class AudioInputStateCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
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
