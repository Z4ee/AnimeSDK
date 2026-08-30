#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LocalRTCOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1DCE2270)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x1DCE22D0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x1DCE2290)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DCE22B0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0x1DCE2870)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1DCE2280)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x1DCE22E0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0x1DCE22F0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x1DCE22A0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DCE22C0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE2990)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LocalRTCOptions_TypeDefinitionIndex = 45790;

	class LocalRTCOptions : public ::System::Object
	{
	public:
		::System::Boolean _UseManualAudioOutput_k__BackingField; // 0x10
		::System::Boolean _UseManualAudioInput_k__BackingField; // 0x11
		::System::Boolean _LocalAudioDeviceInputStartsMuted_k__BackingField; // 0x12
		::System::UInt32 _Flags_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Flags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::Boolean get_UseManualAudioInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOINPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOINPUT_OFFSET))(this, a1);
		}

		::System::Boolean get_UseManualAudioOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_USEMANUALAUDIOOUTPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioOutput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_USEMANUALAUDIOOUTPUT_OFFSET))(this, a1);
		}

		::System::Boolean get_LocalAudioDeviceInputStartsMuted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this);
		}

		::System::Void set_LocalAudioDeviceInputStartsMuted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONS_SET_1_OFFSET))(this, a1);
		}
	};
}
