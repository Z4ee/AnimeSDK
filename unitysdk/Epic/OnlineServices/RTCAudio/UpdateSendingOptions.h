#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1D1A0C20)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D1A0BE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1D1A0C00)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1D1A0C30)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D1A0BF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1D1A0C10)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A0C40)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateSendingOptions_TypeDefinitionIndex = 35273;

	class UpdateSendingOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus _AudioStatus_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_AUDIOSTATUS_OFFSET))(this);
		}

		::System::Void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_AUDIOSTATUS_OFFSET))(this, value);
		}
	};
}
