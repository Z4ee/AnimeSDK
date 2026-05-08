#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioDevicesChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1ADEDA20)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADEDA00)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1ADEDAB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1ADEDA10)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1ADEDA30)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEDC00)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioDevicesChangedCallbackInfo_TypeDefinitionIndex = 33654;

	class AudioDevicesChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
