#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LocalRTCOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x9721E0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x971F20)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x972080)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x972350)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x972290)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x972340)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x971FD0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x972130)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LocalRTCOptionsInternal_TypeDefinitionIndex = 36386;

	struct alignas(4) LocalRTCOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_Flags; // 0x14
		::System::Int32 m_UseManualAudioInput; // 0x18
		::System::Int32 m_UseManualAudioOutput; // 0x1C
		::System::Int32 m_LocalAudioDeviceInputStartsMuted; // 0x20

		::System::UInt32 get_Flags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Boolean get_UseManualAudioInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOINPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOINPUT_OFFSET))(this, value);
		}

		::System::Boolean get_UseManualAudioOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOOUTPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioOutput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOOUTPUT_OFFSET))(this, value);
		}

		::System::Boolean get_LocalAudioDeviceInputStartsMuted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this);
		}

		::System::Void set_LocalAudioDeviceInputStartsMuted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LocalRTCOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LocalRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
