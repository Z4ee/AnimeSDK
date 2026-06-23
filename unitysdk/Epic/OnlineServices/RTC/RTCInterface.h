#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::RTC { class AddNotifyDisconnectedOptions; }
namespace Epic::OnlineServices::RTC { class AddNotifyParticipantStatusChangedOptions; }
namespace Epic::OnlineServices::RTC { class BlockParticipantOptions; }
namespace Epic::OnlineServices::RTC { class JoinRoomOptions; }
namespace Epic::OnlineServices::RTC { class LeaveRoomOptions; }
namespace Epic::OnlineServices::RTC { class OnBlockParticipantCallback; }
namespace Epic::OnlineServices::RTC { class OnDisconnectedCallback; }
namespace Epic::OnlineServices::RTC { class OnJoinRoomCallback; }
namespace Epic::OnlineServices::RTC { class OnLeaveRoomCallback; }
namespace Epic::OnlineServices::RTC { class OnParticipantStatusChangedCallback; }
namespace Epic::OnlineServices::RTC { class SetRoomSettingOptions; }
namespace Epic::OnlineServices::RTC { class SetSettingOptions; }
namespace Epic::OnlineServices::RTCAudio { class RTCAudioInterface; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1D19D9D0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYPARTICIPANTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D19DBB0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_BLOCKPARTICIPANT_OFFSET UNITYSDK_OFFSET(0x1D19DD90)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_GETAUDIOINTERFACE_OFFSET UNITYSDK_OFFSET(0x1D19DF50)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_JOINROOM_OFFSET UNITYSDK_OFFSET(0x1D19E030)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_LEAVEROOM_OFFSET UNITYSDK_OFFSET(0x1D19E1F0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONBLOCKPARTICIPANTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D19D6E0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONDISCONNECTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D19D770)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONJOINROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D19D800)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONLEAVEROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D19D890)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONPARTICIPANTSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D19D920)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1D19E3B0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYPARTICIPANTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D19E490)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETROOMSETTING_OFFSET UNITYSDK_OFFSET(0x1D19E570)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETSETTING_OFFSET UNITYSDK_OFFSET(0x1D19E6D0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D19D9C0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19D9B0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int RTCInterface_TypeDefinitionIndex = 35333;

	class RTCInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifydisconnectedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyparticipantstatuschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 BlockparticipantApiLatest = 0x1; // 0x0
		// static const ::System::Int32 JoinroomApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LeaveroomApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ParticipantmetadataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ParticipantmetadataKeyMaxcharcount = 0x100; // 0x0
		// static const ::System::Int32 ParticipantmetadataValueMaxcharcount = 0x100; // 0x0
		// static const ::System::Int32 SetroomsettingApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetsettingApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyDisconnected(::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTC::OnDisconnectedCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnDisconnectedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYDISCONNECTED_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyParticipantStatusChanged(::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYPARTICIPANTSTATUSCHANGED_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void BlockParticipant(::Epic::OnlineServices::RTC::BlockParticipantOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_BLOCKPARTICIPANT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioInterface* GetAudioInterface()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_GETAUDIOINTERFACE_OFFSET))(this);
		}

		::System::Void JoinRoom(::Epic::OnlineServices::RTC::JoinRoomOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTC::OnJoinRoomCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnJoinRoomCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_JOINROOM_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void LeaveRoom(::Epic::OnlineServices::RTC::LeaveRoomOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_LEAVEROOM_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyDisconnected(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYDISCONNECTED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyParticipantStatusChanged(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYPARTICIPANTSTATUSCHANGED_OFFSET))(this, notificationId);
		}

		::Epic::OnlineServices::Result SetRoomSetting(::Epic::OnlineServices::RTC::SetRoomSettingOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTC::SetRoomSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETROOMSETTING_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetSetting(::Epic::OnlineServices::RTC::SetSettingOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTC::SetSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETSETTING_OFFSET))(this, options);
		}

		static ::System::Void OnBlockParticipantCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONBLOCKPARTICIPANTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnDisconnectedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONDISCONNECTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnJoinRoomCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONJOINROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLeaveRoomCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONLEAVEROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnParticipantStatusChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONPARTICIPANTSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
