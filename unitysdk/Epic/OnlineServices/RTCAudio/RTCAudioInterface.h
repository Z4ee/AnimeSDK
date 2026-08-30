#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeRenderOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeSendOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioDevicesChangedOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioInputStateOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioOutputStateOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyParticipantUpdatedOptions; }
namespace Epic::OnlineServices::RTCAudio { class AudioInputDeviceInfo; }
namespace Epic::OnlineServices::RTCAudio { class AudioOutputDeviceInfo; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDeviceByIndexOptions; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDevicesCountOptions; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioOutputDeviceByIndexOptions; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioOutputDevicesCountOptions; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioBeforeRenderCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioBeforeSendCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioDevicesChangedCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioInputStateCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioOutputStateCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnParticipantUpdatedCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnUpdateReceivingCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnUpdateSendingCallback; }
namespace Epic::OnlineServices::RTCAudio { class RegisterPlatformAudioUserOptions; }
namespace Epic::OnlineServices::RTCAudio { class SendAudioOptions; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioInputSettingsOptions; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioOutputSettingsOptions; }
namespace Epic::OnlineServices::RTCAudio { class UnregisterPlatformAudioUserOptions; }
namespace Epic::OnlineServices::RTCAudio { class UpdateReceivingOptions; }
namespace Epic::OnlineServices::RTCAudio { class UpdateSendingOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORERENDER_OFFSET UNITYSDK_OFFSET(0xB3F0F50)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORESEND_OFFSET UNITYSDK_OFFSET(0xB3F1140)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIODEVICESCHANGED_OFFSET UNITYSDK_OFFSET(0xB3F1330)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOINPUTSTATE_OFFSET UNITYSDK_OFFSET(0xB3F15E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOOUTPUTSTATE_OFFSET UNITYSDK_OFFSET(0xB3F17D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYPARTICIPANTUPDATED_OFFSET UNITYSDK_OFFSET(0xB3F19C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB3F1BB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICESCOUNT_OFFSET UNITYSDK_OFFSET(0xB3F1D10)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB3F1F50)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICESCOUNT_OFFSET UNITYSDK_OFFSET(0xB3F20B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORERENDERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0A30)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORESENDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0AD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIODEVICESCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0B70)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOINPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0C10)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOOUTPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0CB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONPARTICIPANTUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0D50)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATERECEIVINGCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0DF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATESENDINGCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3F0E90)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REGISTERPLATFORMAUDIOUSER_OFFSET UNITYSDK_OFFSET(0xB3F22F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORERENDER_OFFSET UNITYSDK_OFFSET(0xB3F24F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORESEND_OFFSET UNITYSDK_OFFSET(0xB3F25D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIODEVICESCHANGED_OFFSET UNITYSDK_OFFSET(0xB3F26B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOINPUTSTATE_OFFSET UNITYSDK_OFFSET(0xB3F2790)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOOUTPUTSTATE_OFFSET UNITYSDK_OFFSET(0xB3F2870)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYPARTICIPANTUPDATED_OFFSET UNITYSDK_OFFSET(0xB3F2950)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SENDAUDIO_OFFSET UNITYSDK_OFFSET(0xB3F2A30)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOINPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0xB3F2B90)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOOUTPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0xB3F2CF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UNREGISTERPLATFORMAUDIOUSER_OFFSET UNITYSDK_OFFSET(0xB3F2E50)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATERECEIVING_OFFSET UNITYSDK_OFFSET(0xB3F3050)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATESENDING_OFFSET UNITYSDK_OFFSET(0xB3F3230)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3F0F40)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F0F30)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RTCAudioInterface_TypeDefinitionIndex = 45318;

	class RTCAudioInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyaudiobeforerenderApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudiobeforesendApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudiodeviceschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudioinputstateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudiooutputstateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyparticipantupdatedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AudiobufferApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AudioinputdeviceinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AudiooutputdeviceinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudioinputdevicebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudioinputdevicescountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudiooutputdevicebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudiooutputdevicescountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RegisterplatformaudiouserApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SendaudioApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetaudioinputsettingsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetaudiooutputsettingsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnregisterplatformaudiouserApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatereceivingApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatesendingApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyAudioBeforeRender(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORERENDER_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyAudioBeforeSend(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORESEND_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyAudioDevicesChanged(::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIODEVICESCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyAudioInputState(::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOINPUTSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyAudioOutputState(::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOOUTPUTSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyParticipantUpdated(::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYPARTICIPANTUPDATED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo* GetAudioInputDeviceByIndex(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions* a1)
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICEBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetAudioInputDevicesCount(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICESCOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo* GetAudioOutputDeviceByIndex(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions* a1)
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICEBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetAudioOutputDevicesCount(::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICESCOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result RegisterPlatformAudioUser(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REGISTERPLATFORMAUDIOUSER_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyAudioBeforeRender(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORERENDER_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyAudioBeforeSend(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORESEND_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyAudioDevicesChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIODEVICESCHANGED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyAudioInputState(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOINPUTSTATE_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyAudioOutputState(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOOUTPUTSTATE_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyParticipantUpdated(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYPARTICIPANTUPDATED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SendAudio(::Epic::OnlineServices::RTCAudio::SendAudioOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SendAudioOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SENDAUDIO_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetAudioInputSettings(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOINPUTSETTINGS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetAudioOutputSettings(::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOOUTPUTSETTINGS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result UnregisterPlatformAudioUser(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UNREGISTERPLATFORMAUDIOUSER_OFFSET))(this, a1);
		}

		::System::Void UpdateReceiving(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATERECEIVING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateSending(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATESENDING_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnAudioBeforeRenderCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORERENDERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnAudioBeforeSendCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORESENDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnAudioDevicesChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIODEVICESCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnAudioInputStateCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOINPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnAudioOutputStateCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOOUTPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnParticipantUpdatedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONPARTICIPANTUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUpdateReceivingCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATERECEIVINGCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUpdateSendingCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATESENDINGCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
