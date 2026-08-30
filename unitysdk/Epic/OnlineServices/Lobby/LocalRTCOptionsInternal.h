#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LocalRTCOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1E120)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x57D20)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x57A60)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x57BC0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x57E90)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET UNITYSDK_OFFSET(0x57DD0)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x57E80)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOINPUT_OFFSET UNITYSDK_OFFSET(0x57B10)
#define EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x57C70)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LocalRTCOptionsInternal_TypeDefinitionIndex = 45791;

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

		::System::Void set_Flags(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::Boolean get_UseManualAudioInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOINPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOINPUT_OFFSET))(this, a1);
		}

		::System::Boolean get_UseManualAudioOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_USEMANUALAUDIOOUTPUT_OFFSET))(this);
		}

		::System::Void set_UseManualAudioOutput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_USEMANUALAUDIOOUTPUT_OFFSET))(this, a1);
		}

		::System::Boolean get_LocalAudioDeviceInputStartsMuted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_GET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this);
		}

		::System::Void set_LocalAudioDeviceInputStartsMuted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_LOCALAUDIODEVICEINPUTSTARTSMUTED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LocalRTCOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LocalRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOCALRTCOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
