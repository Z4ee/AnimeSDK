#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F20F60)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F20F80)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F20F70)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F20F90)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8F20FA0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioInputStateOptions_TypeDefinitionIndex = 41423;

	class AddNotifyAudioInputStateOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOINPUTSTATEOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}
	};
}
