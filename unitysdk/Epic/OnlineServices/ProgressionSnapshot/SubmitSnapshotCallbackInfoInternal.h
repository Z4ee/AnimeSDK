#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x65170)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x1DA90)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int SubmitSnapshotCallbackInfoInternal_TypeDefinitionIndex = 35747;

	struct alignas(8) SubmitSnapshotCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::UInt32 m_SnapshotId; // 0x14
		::System::IntPtr m_ClientData; // 0x18

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::UInt32 get_SnapshotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_SNAPSHOTID_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_SUBMITSNAPSHOTCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}
	};
}
