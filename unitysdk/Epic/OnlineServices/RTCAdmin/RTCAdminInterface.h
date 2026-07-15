#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::RTCAdmin { class CopyUserTokenByIndexOptions; }
namespace Epic::OnlineServices::RTCAdmin { class CopyUserTokenByUserIdOptions; }
namespace Epic::OnlineServices::RTCAdmin { class KickOptions; }
namespace Epic::OnlineServices::RTCAdmin { class OnKickCompleteCallback; }
namespace Epic::OnlineServices::RTCAdmin { class OnQueryJoinRoomTokenCompleteCallback; }
namespace Epic::OnlineServices::RTCAdmin { class OnSetParticipantHardMuteCompleteCallback; }
namespace Epic::OnlineServices::RTCAdmin { class QueryJoinRoomTokenOptions; }
namespace Epic::OnlineServices::RTCAdmin { class SetParticipantHardMuteOptions; }
namespace Epic::OnlineServices::RTCAdmin { class UserToken; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C0AD9E0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYUSERID_OFFSET UNITYSDK_OFFSET(0x1C0ADBE0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_KICK_OFFSET UNITYSDK_OFFSET(0x1C0ADE70)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONKICKCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C0AD7E0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONQUERYJOINROOMTOKENCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C0AD880)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C0AD920)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_QUERYJOINROOMTOKEN_OFFSET UNITYSDK_OFFSET(0x1C0AE050)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_SETPARTICIPANTHARDMUTE_OFFSET UNITYSDK_OFFSET(0x1C0AE230)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0AD9D0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AD9C0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int RTCAdminInterface_TypeDefinitionIndex = 43175;

	class RTCAdminInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopyusertokenbyindexApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyusertokenbyuseridApiLatest = 0x2; // 0x0
		// static const ::System::Int32 KickApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryjoinroomtokenApiLatest = 0x2; // 0x0
		// static const ::System::Int32 SetparticipanthardmuteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UsertokenApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyUserTokenByIndex(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions* a1, ::Epic::OnlineServices::RTCAdmin::UserToken*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions*, ::Epic::OnlineServices::RTCAdmin::UserToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyUserTokenByUserId(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions* a1, ::Epic::OnlineServices::RTCAdmin::UserToken*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions*, ::Epic::OnlineServices::RTCAdmin::UserToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYUSERID_OFFSET))(this, a1, a2);
		}

		::System::Void Kick(::Epic::OnlineServices::RTCAdmin::KickOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_KICK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryJoinRoomToken(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_QUERYJOINROOMTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetParticipantHardMute(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_SETPARTICIPANTHARDMUTE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnKickCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONKICKCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryJoinRoomTokenCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONQUERYJOINROOMTOKENCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSetParticipantHardMuteCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
