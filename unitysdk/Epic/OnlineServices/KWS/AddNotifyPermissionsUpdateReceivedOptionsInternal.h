#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::KWS { class AddNotifyPermissionsUpdateReceivedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x985FC0)
#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int AddNotifyPermissionsUpdateReceivedOptionsInternal_TypeDefinitionIndex = 36492;

	struct alignas(4) AddNotifyPermissionsUpdateReceivedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
