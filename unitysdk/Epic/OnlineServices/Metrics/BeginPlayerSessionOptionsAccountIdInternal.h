#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/MetricsAccountIdType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptionsAccountId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x57F00)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EPIC_OFFSET UNITYSDK_OFFSET(0x57C30)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x57D50)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x57E80)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EPIC_OFFSET UNITYSDK_OFFSET(0x57CB0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x57DD0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x57E70)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int BeginPlayerSessionOptionsAccountIdInternal_TypeDefinitionIndex = 42599;

	struct alignas(4) BeginPlayerSessionOptionsAccountIdInternal
	{
		::Epic::OnlineServices::Metrics::MetricsAccountIdType m_AccountIdType; // 0x10
		::System::IntPtr m_Epic; // 0x14
		::System::IntPtr m_External; // 0x14

		::Epic::OnlineServices::EpicAccountId* get_Epic()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EPIC_OFFSET))(this);
		}

		::System::Void set_Epic(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EPIC_OFFSET))(this, a1);
		}

		::System::String* get_External()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EXTERNAL_OFFSET))(this);
		}

		::System::Void set_External(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EXTERNAL_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
