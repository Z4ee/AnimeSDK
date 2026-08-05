#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioBeforeRenderCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AudioBuffer; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1E5D8C10)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1E5D8BD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E5D8B70)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D8B90)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1E5D8BF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1E5D8BB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1E5D90B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1E5D8BE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1E5D8B80)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E5D8BA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1E5D8C20)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1E5D8C00)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1E5D8BC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D91F0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioBeforeRenderCallbackInfo_TypeDefinitionIndex = 35870;

	class AudioBeforeRenderCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::System::String* _RoomName_k__BackingField; // 0x28
		::Epic::OnlineServices::RTCAudio::AudioBuffer* _Buffer_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::AudioBuffer* get_Buffer()
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_BUFFER_OFFSET))(this);
		}

		::System::Void set_Buffer(::Epic::OnlineServices::RTCAudio::AudioBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBuffer*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_BUFFER_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
