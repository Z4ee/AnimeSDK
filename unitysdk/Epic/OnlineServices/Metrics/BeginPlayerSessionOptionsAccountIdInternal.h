#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/MetricsAccountIdType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptionsAccountId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x52A00)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EPIC_OFFSET UNITYSDK_OFFSET(0x52740)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x52860)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x52990)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EPIC_OFFSET UNITYSDK_OFFSET(0x527C0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x528E0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x52980)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int BeginPlayerSessionOptionsAccountIdInternal_TypeDefinitionIndex = 35970;

	struct alignas(4) BeginPlayerSessionOptionsAccountIdInternal
	{
		::Epic::OnlineServices::Metrics::MetricsAccountIdType m_AccountIdType; // 0x10
		::System::IntPtr m_Epic; // 0x14
		::System::IntPtr m_External; // 0x14

		::Epic::OnlineServices::EpicAccountId* get_Epic()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EPIC_OFFSET))(this);
		}

		::System::Void set_Epic(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EPIC_OFFSET))(this, value);
		}

		::System::String* get_External()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EXTERNAL_OFFSET))(this);
		}

		::System::Void set_External(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EXTERNAL_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
