#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Presence { class AddNotifyJoinGameAcceptedOptions; }
namespace Epic::OnlineServices::Presence { class AddNotifyOnPresenceChangedOptions; }
namespace Epic::OnlineServices::Presence { class CopyPresenceOptions; }
namespace Epic::OnlineServices::Presence { class CreatePresenceModificationOptions; }
namespace Epic::OnlineServices::Presence { class GetJoinInfoOptions; }
namespace Epic::OnlineServices::Presence { class HasPresenceOptions; }
namespace Epic::OnlineServices::Presence { class Info; }
namespace Epic::OnlineServices::Presence { class OnJoinGameAcceptedCallback; }
namespace Epic::OnlineServices::Presence { class OnPresenceChangedCallback; }
namespace Epic::OnlineServices::Presence { class OnQueryPresenceCompleteCallback; }
namespace Epic::OnlineServices::Presence { class PresenceModification; }
namespace Epic::OnlineServices::Presence { class QueryPresenceOptions; }
namespace Epic::OnlineServices::Presence { class SetPresenceCompleteCallback; }
namespace Epic::OnlineServices::Presence { class SetPresenceOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYJOINGAMEACCEPTED_OFFSET UNITYSDK_OFFSET(0xA330430)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYONPRESENCECHANGED_OFFSET UNITYSDK_OFFSET(0xA3306E0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_COPYPRESENCE_OFFSET UNITYSDK_OFFSET(0xA330990)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_CREATEPRESENCEMODIFICATION_OFFSET UNITYSDK_OFFSET(0xA330B90)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_GETJOININFO_OFFSET UNITYSDK_OFFSET(0xA330D80)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_HASPRESENCE_OFFSET UNITYSDK_OFFSET(0xA331030)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONJOINGAMEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA330190)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONPRESENCECHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA330230)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONQUERYPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA3302D0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_QUERYPRESENCE_OFFSET UNITYSDK_OFFSET(0xA331200)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYJOINGAMEACCEPTED_OFFSET UNITYSDK_OFFSET(0xA3313E0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYONPRESENCECHANGED_OFFSET UNITYSDK_OFFSET(0xA3314C0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA330370)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCE_OFFSET UNITYSDK_OFFSET(0xA3315A0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA330420)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA330410)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceInterface_TypeDefinitionIndex = 42405;

	class PresenceInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyjoingameacceptedApiLatest = 0x2; // 0x0
		// static const ::System::Int32 AddnotifyonpresencechangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopypresenceApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CreatepresencemodificationApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DataMaxKeyLength = 0x40; // 0x0
		// static const ::System::Int32 DataMaxKeys = 0x20; // 0x0
		// static const ::System::Int32 DataMaxValueLength = 0xFF; // 0x0
		// static const ::System::Int32 DatarecordApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DeletedataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetjoininfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 HaspresenceApiLatest = 0x1; // 0x0
		// static const ::System::Int32 InfoApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QuerypresenceApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RichTextMaxValueLength = 0xFF; // 0x0
		// static const ::System::Int32 SetdataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetpresenceApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetrawrichtextApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetstatusApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyJoinGameAccepted(::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYJOINGAMEACCEPTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyOnPresenceChanged(::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYONPRESENCECHANGED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyPresence(::Epic::OnlineServices::Presence::CopyPresenceOptions* a1, ::Epic::OnlineServices::Presence::Info*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::CopyPresenceOptions*, ::Epic::OnlineServices::Presence::Info*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_COPYPRESENCE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CreatePresenceModification(::Epic::OnlineServices::Presence::CreatePresenceModificationOptions* a1, ::Epic::OnlineServices::Presence::PresenceModification*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::CreatePresenceModificationOptions*, ::Epic::OnlineServices::Presence::PresenceModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_CREATEPRESENCEMODIFICATION_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result GetJoinInfo(::Epic::OnlineServices::Presence::GetJoinInfoOptions* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::GetJoinInfoOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_GETJOININFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPresence(::Epic::OnlineServices::Presence::HasPresenceOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::Presence::HasPresenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_HASPRESENCE_OFFSET))(this, a1);
		}

		::System::Void QueryPresence(::Epic::OnlineServices::Presence::QueryPresenceOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::QueryPresenceOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_QUERYPRESENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyJoinGameAccepted(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYJOINGAMEACCEPTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyOnPresenceChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYONPRESENCECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetPresence(::Epic::OnlineServices::Presence::SetPresenceOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnJoinGameAcceptedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONJOINGAMEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnPresenceChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONPRESENCECHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryPresenceCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONQUERYPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void SetPresenceCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
