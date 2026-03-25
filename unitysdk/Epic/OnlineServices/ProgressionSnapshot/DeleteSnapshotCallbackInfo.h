#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ProgressionSnapshot/DeleteSnapshotCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86D9770)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86D9750)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86D9730)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86D9710)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86D9B70)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86D9760)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86D9740)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86D9790)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86D9720)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86D9C80)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int DeleteSnapshotCallbackInfo_TypeDefinitionIndex = 35735;

	class DeleteSnapshotCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_DELETESNAPSHOTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
