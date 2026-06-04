#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ProgressionSnapshot/SubmitSnapshotCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA337770)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA337750)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA337710)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0xA337730)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA337A70)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA337760)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA337790)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA337720)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0xA337740)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA337B90)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int SubmitSnapshotCallbackInfo_TypeDefinitionIndex = 42375;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SnapshotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_SNAPSHOTID_OFFSET))(this);
		}

		::System::Void set_SnapshotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_SNAPSHOTID_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
