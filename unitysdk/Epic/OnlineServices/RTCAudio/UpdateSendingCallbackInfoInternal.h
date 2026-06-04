#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x1D280)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x60D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x76180)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x76290)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x76300)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateSendingCallbackInfoInternal_TypeDefinitionIndex = 42293;

	struct alignas(8) UpdateSendingCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_RoomName; // 0x28
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus m_AudioStatus; // 0x30

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGCALLBACKINFOINTERNAL_GET_AUDIOSTATUS_OFFSET))(this);
		}
	};
}
