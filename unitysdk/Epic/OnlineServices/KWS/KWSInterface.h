#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/KWS/KWSPermissionStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::KWS { class AddNotifyPermissionsUpdateReceivedOptions; }
namespace Epic::OnlineServices::KWS { class CopyPermissionByIndexOptions; }
namespace Epic::OnlineServices::KWS { class CreateUserOptions; }
namespace Epic::OnlineServices::KWS { class GetPermissionByKeyOptions; }
namespace Epic::OnlineServices::KWS { class GetPermissionsCountOptions; }
namespace Epic::OnlineServices::KWS { class OnCreateUserCallback; }
namespace Epic::OnlineServices::KWS { class OnPermissionsUpdateReceivedCallback; }
namespace Epic::OnlineServices::KWS { class OnQueryAgeGateCallback; }
namespace Epic::OnlineServices::KWS { class OnQueryPermissionsCallback; }
namespace Epic::OnlineServices::KWS { class OnRequestPermissionsCallback; }
namespace Epic::OnlineServices::KWS { class OnUpdateParentEmailCallback; }
namespace Epic::OnlineServices::KWS { class PermissionStatus; }
namespace Epic::OnlineServices::KWS { class QueryAgeGateOptions; }
namespace Epic::OnlineServices::KWS { class QueryPermissionsOptions; }
namespace Epic::OnlineServices::KWS { class RequestPermissionsOptions; }
namespace Epic::OnlineServices::KWS { class UpdateParentEmailOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ADDNOTIFYPERMISSIONSUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x1ADE0530)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_COPYPERMISSIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x1ADE07B0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_CREATEUSER_OFFSET UNITYSDK_OFFSET(0x1ADE0A60)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONBYKEY_OFFSET UNITYSDK_OFFSET(0x1ADE0C20)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONSCOUNT_OFFSET UNITYSDK_OFFSET(0x1ADE0D90)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1ADE01B0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONPERMISSIONSUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1ADE0240)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYAGEGATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1ADE02D0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1ADE0360)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONREQUESTPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1ADE03F0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONUPDATEPARENTEMAILCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1ADE0480)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYAGEGATE_OFFSET UNITYSDK_OFFSET(0x1ADE0F90)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x1ADE1200)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REMOVENOTIFYPERMISSIONSUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x1ADE1450)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REQUESTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x1ADE1530)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_UPDATEPARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1ADE16F0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADE0520)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE0510)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int KWSInterface_TypeDefinitionIndex = 35844;

	class KWSInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifypermissionsupdatereceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopypermissionbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CreateuserApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetpermissionbykeyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetpermissionscountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 MaxPermissionLength = 0x20; // 0x0
		// static const ::System::Int32 MaxPermissions = 0x10; // 0x0
		// static const ::System::Int32 PermissionstatusApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryagegateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QuerypermissionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RequestpermissionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdateparentemailApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyPermissionsUpdateReceived(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ADDNOTIFYPERMISSIONSUPDATERECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result CopyPermissionByIndex(::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions* options, ::Epic::OnlineServices::KWS::PermissionStatus*& outPermission)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions*, ::Epic::OnlineServices::KWS::PermissionStatus*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_COPYPERMISSIONBYINDEX_OFFSET))(this, options, outPermission);
		}

		::System::Void CreateUser(::Epic::OnlineServices::KWS::CreateUserOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::KWS::OnCreateUserCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnCreateUserCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_CREATEUSER_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result GetPermissionByKey(::Epic::OnlineServices::KWS::GetPermissionByKeyOptions* options, ::Epic::OnlineServices::KWS::KWSPermissionStatus& outPermission)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionByKeyOptions*, ::Epic::OnlineServices::KWS::KWSPermissionStatus&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONBYKEY_OFFSET))(this, options, outPermission);
		}

		::System::Int32 GetPermissionsCount(::Epic::OnlineServices::KWS::GetPermissionsCountOptions* options)
		{
			return ((::System::Int32(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONSCOUNT_OFFSET))(this, options);
		}

		::System::Void QueryAgeGate(::Epic::OnlineServices::KWS::QueryAgeGateOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYAGEGATE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryPermissions(::Epic::OnlineServices::KWS::QueryPermissionsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryPermissionsOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYPERMISSIONS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyPermissionsUpdateReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REMOVENOTIFYPERMISSIONSUPDATERECEIVED_OFFSET))(this, inId);
		}

		::System::Void RequestPermissions(::Epic::OnlineServices::KWS::RequestPermissionsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REQUESTPERMISSIONS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UpdateParentEmail(::Epic::OnlineServices::KWS::UpdateParentEmailOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_UPDATEPARENTEMAIL_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnCreateUserCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnPermissionsUpdateReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONPERMISSIONSUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryAgeGateCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYAGEGATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryPermissionsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRequestPermissionsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONREQUESTPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUpdateParentEmailCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONUPDATEPARENTEMAILCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
