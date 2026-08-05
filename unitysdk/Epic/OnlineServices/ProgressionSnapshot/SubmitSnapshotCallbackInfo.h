#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ProgressionSnapshot/SubmitSnapshotCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DFF0FD0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DFF0FB0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DFF0F70)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x1DFF0F90)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DFF10E0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DFF0FC0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DFF0FF0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DFF0F80)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x1DFF0FA0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF1250)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int SubmitSnapshotCallbackInfo_TypeDefinitionIndex = 36013;

	class SubmitSnapshotCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::UInt32 _SnapshotId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_SnapshotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_SNAPSHOTID_OFFSET))(this);
		}

		::System::Void set_SnapshotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_SNAPSHOTID_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
