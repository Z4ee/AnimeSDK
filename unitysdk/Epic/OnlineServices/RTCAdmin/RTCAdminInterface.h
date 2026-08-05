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

#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D834A90)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYUSERID_OFFSET UNITYSDK_OFFSET(0x1D834C90)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_KICK_OFFSET UNITYSDK_OFFSET(0x1D834F40)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONKICKCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D8348C0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONQUERYJOINROOMTOKENCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D834950)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D8349E0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_QUERYJOINROOMTOKEN_OFFSET UNITYSDK_OFFSET(0x1D835100)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_SETPARTICIPANTHARDMUTE_OFFSET UNITYSDK_OFFSET(0x1D8352C0)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D834A80)
#define EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D834A70)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int RTCAdminInterface_TypeDefinitionIndex = 35952;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyUserTokenByIndex(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions* options, ::Epic::OnlineServices::RTCAdmin::UserToken*& outUserToken)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions*, ::Epic::OnlineServices::RTCAdmin::UserToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYINDEX_OFFSET))(this, options, outUserToken);
		}

		::Epic::OnlineServices::Result CopyUserTokenByUserId(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions* options, ::Epic::OnlineServices::RTCAdmin::UserToken*& outUserToken)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions*, ::Epic::OnlineServices::RTCAdmin::UserToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_COPYUSERTOKENBYUSERID_OFFSET))(this, options, outUserToken);
		}

		::System::Void Kick(::Epic::OnlineServices::RTCAdmin::KickOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_KICK_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryJoinRoomToken(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_QUERYJOINROOMTOKEN_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void SetParticipantHardMute(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_SETPARTICIPANTHARDMUTE_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnKickCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONKICKCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryJoinRoomTokenCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONQUERYJOINROOMTOKENCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSetParticipantHardMuteCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_RTCADMININTERFACE_ONSETPARTICIPANTHARDMUTECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
