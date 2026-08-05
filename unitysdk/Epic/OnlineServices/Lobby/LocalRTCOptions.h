#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LocalRTCOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1E5D3260)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x1E5D32C0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x1E5D3280)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1E5D32A0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0x1E5D3650)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1E5D3270)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x1E5D32D0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0x1E5D32E0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x1E5D3290)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1E5D32B0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D3780)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LocalRTCOptions_TypeDefinitionIndex = 36385;

	class LocalRTCOptions : public ::System::Object
	{
	public:
		::System::UInt32 _Flags_k__BackingField; // 0x10
		::System::Boolean _UseManualAudioOutput_k__BackingField; // 0x14
		::System::Boolean _LocalAudioDeviceInputStartsMuted_k__BackingField; // 0x15
		::System::Boolean _UseManualAudioInput_k__BackingField; // 0x16

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Flags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Boolean get_UseManualAudioInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOINPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOINPUT_OFFSET))(this, value);
		}

		::System::Boolean get_UseManualAudioOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOOUTPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioOutput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOOUTPUT_OFFSET))(this, value);
		}

		::System::Boolean get_LocalAudioDeviceInputStartsMuted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this);
		}

		::System::Void set_LocalAudioDeviceInputStartsMuted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_1_OFFSET))(this, other);
		}
	};
}
