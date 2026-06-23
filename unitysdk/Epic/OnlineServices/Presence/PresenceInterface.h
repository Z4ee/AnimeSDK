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

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYJOINGAMEACCEPTED_OFFSET UNITYSDK_OFFSET(0x1C4C4250)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYONPRESENCECHANGED_OFFSET UNITYSDK_OFFSET(0x1C4C44D0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_COPYPRESENCE_OFFSET UNITYSDK_OFFSET(0x1C4C4750)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_CREATEPRESENCEMODIFICATION_OFFSET UNITYSDK_OFFSET(0x1C4C49E0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_GETJOININFO_OFFSET UNITYSDK_OFFSET(0x1C4C4BF0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_HASPRESENCE_OFFSET UNITYSDK_OFFSET(0x1C4C4F40)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONJOINGAMEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C4C3FF0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONPRESENCECHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C4C4080)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONQUERYPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C4C4110)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_QUERYPRESENCE_OFFSET UNITYSDK_OFFSET(0x1C4C5110)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYJOINGAMEACCEPTED_OFFSET UNITYSDK_OFFSET(0x1C4C5370)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYONPRESENCECHANGED_OFFSET UNITYSDK_OFFSET(0x1C4C5450)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C4C41A0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCE_OFFSET UNITYSDK_OFFSET(0x1C4C5530)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4C4240)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C4230)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceInterface_TypeDefinitionIndex = 35384;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyJoinGameAccepted(::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYJOINGAMEACCEPTED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyOnPresenceChanged(::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback* notificationHandler)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ADDNOTIFYONPRESENCECHANGED_OFFSET))(this, options, clientData, notificationHandler);
		}

		::Epic::OnlineServices::Result CopyPresence(::Epic::OnlineServices::Presence::CopyPresenceOptions* options, ::Epic::OnlineServices::Presence::Info*& outPresence)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::CopyPresenceOptions*, ::Epic::OnlineServices::Presence::Info*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_COPYPRESENCE_OFFSET))(this, options, outPresence);
		}

		::Epic::OnlineServices::Result CreatePresenceModification(::Epic::OnlineServices::Presence::CreatePresenceModificationOptions* options, ::Epic::OnlineServices::Presence::PresenceModification*& outPresenceModificationHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::CreatePresenceModificationOptions*, ::Epic::OnlineServices::Presence::PresenceModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_CREATEPRESENCEMODIFICATION_OFFSET))(this, options, outPresenceModificationHandle);
		}

		::Epic::OnlineServices::Result GetJoinInfo(::Epic::OnlineServices::Presence::GetJoinInfoOptions* options, ::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::GetJoinInfoOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_GETJOININFO_OFFSET))(this, options, outBuffer);
		}

		::System::Boolean HasPresence(::Epic::OnlineServices::Presence::HasPresenceOptions* options)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::Presence::HasPresenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_HASPRESENCE_OFFSET))(this, options);
		}

		::System::Void QueryPresence(::Epic::OnlineServices::Presence::QueryPresenceOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::QueryPresenceOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_QUERYPRESENCE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyJoinGameAccepted(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYJOINGAMEACCEPTED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyOnPresenceChanged(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_REMOVENOTIFYONPRESENCECHANGED_OFFSET))(this, notificationId);
		}

		::System::Void SetPresence(::Epic::OnlineServices::Presence::SetPresenceOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceOptions*, ::System::Object*, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCE_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnJoinGameAcceptedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONJOINGAMEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnPresenceChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONPRESENCECHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryPresenceCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_ONQUERYPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void SetPresenceCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEINTERFACE_SETPRESENCECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
