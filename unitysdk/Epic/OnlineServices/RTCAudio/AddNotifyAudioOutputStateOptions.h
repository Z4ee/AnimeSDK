#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F21480)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F214A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F21490)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F214B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8F214C0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioOutputStateOptions_TypeDefinitionIndex = 41425;

	class AddNotifyAudioOutputStateOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIOOUTPUTSTATEOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}
	};
}
