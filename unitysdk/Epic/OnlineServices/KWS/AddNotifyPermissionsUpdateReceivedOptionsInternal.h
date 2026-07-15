#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::KWS { class AddNotifyPermissionsUpdateReceivedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A4A330)
#define EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A39250)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int AddNotifyPermissionsUpdateReceivedOptionsInternal_TypeDefinitionIndex = 43715;

	struct alignas(4) AddNotifyPermissionsUpdateReceivedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ADDNOTIFYPERMISSIONSUPDATERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
