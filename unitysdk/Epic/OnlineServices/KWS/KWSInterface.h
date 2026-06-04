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

#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ADDNOTIFYPERMISSIONSUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0xA2CFDF0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_COPYPERMISSIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xA2D00A0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_CREATEUSER_OFFSET UNITYSDK_OFFSET(0xA2D0330)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONBYKEY_OFFSET UNITYSDK_OFFSET(0xA2D0510)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONSCOUNT_OFFSET UNITYSDK_OFFSET(0xA2D0680)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2CFA10)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONPERMISSIONSUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2CFAB0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYAGEGATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2CFB50)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2CFBF0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONREQUESTPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2CFC90)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONUPDATEPARENTEMAILCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2CFD30)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYAGEGATE_OFFSET UNITYSDK_OFFSET(0xA2D0870)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYPERMISSIONS_OFFSET UNITYSDK_OFFSET(0xA2D0B10)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REMOVENOTIFYPERMISSIONSUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0xA2D0D80)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REQUESTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0xA2D0E60)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE_UPDATEPARENTEMAIL_OFFSET UNITYSDK_OFFSET(0xA2D1040)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2CFDE0)
#define EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CFDD0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int KWSInterface_TypeDefinitionIndex = 42865;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyPermissionsUpdateReceived(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ADDNOTIFYPERMISSIONSUPDATERECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyPermissionByIndex(::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions* a1, ::Epic::OnlineServices::KWS::PermissionStatus*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions*, ::Epic::OnlineServices::KWS::PermissionStatus*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_COPYPERMISSIONBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void CreateUser(::Epic::OnlineServices::KWS::CreateUserOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::KWS::OnCreateUserCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::CreateUserOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnCreateUserCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_CREATEUSER_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result GetPermissionByKey(::Epic::OnlineServices::KWS::GetPermissionByKeyOptions* a1, ::Epic::OnlineServices::KWS::KWSPermissionStatus& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionByKeyOptions*, ::Epic::OnlineServices::KWS::KWSPermissionStatus&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONBYKEY_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPermissionsCount(::Epic::OnlineServices::KWS::GetPermissionsCountOptions* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Epic::OnlineServices::KWS::GetPermissionsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_GETPERMISSIONSCOUNT_OFFSET))(this, a1);
		}

		::System::Void QueryAgeGate(::Epic::OnlineServices::KWS::QueryAgeGateOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryAgeGateOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYAGEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryPermissions(::Epic::OnlineServices::KWS::QueryPermissionsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::QueryPermissionsOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_QUERYPERMISSIONS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyPermissionsUpdateReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REMOVENOTIFYPERMISSIONSUPDATERECEIVED_OFFSET))(this, a1);
		}

		::System::Void RequestPermissions(::Epic::OnlineServices::KWS::RequestPermissionsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::RequestPermissionsOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_REQUESTPERMISSIONS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateParentEmail(::Epic::OnlineServices::KWS::UpdateParentEmailOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailOptions*, ::System::Object*, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_UPDATEPARENTEMAIL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnCreateUserCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnPermissionsUpdateReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONPERMISSIONSUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryAgeGateCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYAGEGATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryPermissionsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONQUERYPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRequestPermissionsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONREQUESTPERMISSIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUpdateParentEmailCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_KWSINTERFACE_ONUPDATEPARENTEMAILCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
