#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsAccountIdInternal.h"
#include "unitysdk/Epic/OnlineServices/Metrics/MetricsAccountIdType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1ADE3660)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_GET_EPIC_OFFSET UNITYSDK_OFFSET(0x1ADE3680)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_GET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x1ADE3820)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1ADE3B50)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ADE39C0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_1_OFFSET UNITYSDK_OFFSET(0x1ADE40F0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1ADE3670)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_EPIC_OFFSET UNITYSDK_OFFSET(0x1ADE3700)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x1ADE38A0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_OFFSET UNITYSDK_OFFSET(0x1ADE3CD0)
#define EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE3B40)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int BeginPlayerSessionOptionsAccountId_TypeDefinitionIndex = 35577;

	class BeginPlayerSessionOptionsAccountId : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* m_Epic; // 0x10
		::System::String* m_External; // 0x18
		::Epic::OnlineServices::Metrics::MetricsAccountIdType m_AccountIdType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Metrics::MetricsAccountIdType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::Metrics::MetricsAccountIdType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::Metrics::MetricsAccountIdType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::MetricsAccountIdType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_Epic()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_GET_EPIC_OFFSET))(this);
		}

		::System::Void set_Epic(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_EPIC_OFFSET))(this, value);
		}

		::System::String* get_External()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_GET_EXTERNAL_OFFSET))(this);
		}

		::System::Void set_External(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_EXTERNAL_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* op_Implicit(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*(*)(::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId* op_Implicit_1(::System::String* value)
		{
			return ((::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_1_OFFSET))(value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_BEGINPLAYERSESSIONOPTIONSACCOUNTID_SET_1_OFFSET))(this, other);
		}
	};
}
