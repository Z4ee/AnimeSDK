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

#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C014770)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYPARTICIPANTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C014960)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_BLOCKPARTICIPANT_OFFSET UNITYSDK_OFFSET(0x1C014B50)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_GETAUDIOINTERFACE_OFFSET UNITYSDK_OFFSET(0x1C014D30)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_JOINROOM_OFFSET UNITYSDK_OFFSET(0x1C014E10)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_LEAVEROOM_OFFSET UNITYSDK_OFFSET(0x1C014FF0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONBLOCKPARTICIPANTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C014430)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONDISCONNECTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C0144D0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONJOINROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C014570)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONLEAVEROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C014610)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONPARTICIPANTSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C0146B0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C0151D0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYPARTICIPANTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C0152B0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETROOMSETTING_OFFSET UNITYSDK_OFFSET(0x1C015390)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETSETTING_OFFSET UNITYSDK_OFFSET(0x1C0154F0)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C014760)
#define EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C014750)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int RTCInterface_TypeDefinitionIndex = 43215;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyDisconnected(::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTC::OnDisconnectedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnDisconnectedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYDISCONNECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyParticipantStatusChanged(::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ADDNOTIFYPARTICIPANTSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BlockParticipant(::Epic::OnlineServices::RTC::BlockParticipantOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::BlockParticipantOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_BLOCKPARTICIPANT_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioInterface* GetAudioInterface()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_GETAUDIOINTERFACE_OFFSET))(this);
		}

		::System::Void JoinRoom(::Epic::OnlineServices::RTC::JoinRoomOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTC::OnJoinRoomCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnJoinRoomCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_JOINROOM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LeaveRoom(::Epic::OnlineServices::RTC::LeaveRoomOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomOptions*, ::System::Object*, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_LEAVEROOM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyDisconnected(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYDISCONNECTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyParticipantStatusChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_REMOVENOTIFYPARTICIPANTSTATUSCHANGED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetRoomSetting(::Epic::OnlineServices::RTC::SetRoomSettingOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTC::SetRoomSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETROOMSETTING_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetSetting(::Epic::OnlineServices::RTC::SetSettingOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTC::SetSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_SETSETTING_OFFSET))(this, a1);
		}

		static ::System::Void OnBlockParticipantCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONBLOCKPARTICIPANTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnDisconnectedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONDISCONNECTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnJoinRoomCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONJOINROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLeaveRoomCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONLEAVEROOMCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnParticipantStatusChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_RTCINTERFACE_ONPARTICIPANTSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
