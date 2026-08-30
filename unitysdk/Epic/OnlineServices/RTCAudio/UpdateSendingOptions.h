#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1DE53740)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DE53700)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1DE53720)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1DE53750)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DE53710)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1DE53730)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE53760)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateSendingOptions_TypeDefinitionIndex = 45337;

	class UpdateSendingOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus _AudioStatus_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_GET_AUDIOSTATUS_OFFSET))(this);
		}

		::System::Void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONS_SET_AUDIOSTATUS_OFFSET))(this, a1);
		}
	};
}
