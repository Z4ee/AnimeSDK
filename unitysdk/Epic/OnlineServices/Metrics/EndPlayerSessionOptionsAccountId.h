#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/EndPlayerSessionOptionsAccountIdInternal.h"
#include "unitysdk/Epic/OnlineServices/Metrics/MetricsAccountIdType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1D277D50)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_GET_EPIC_OFFSET UNITYSDK_OFFSET(0x1D277D70)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_GET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x1D277F10)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D278240)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D2780B0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_1_OFFSET UNITYSDK_OFFSET(0x1D2787E0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1D277D60)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_EPIC_OFFSET UNITYSDK_OFFSET(0x1D277DF0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x1D277F90)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_OFFSET UNITYSDK_OFFSET(0x1D2783C0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D278230)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int EndPlayerSessionOptionsAccountId_TypeDefinitionIndex = 35581;

	class EndPlayerSessionOptionsAccountId : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* m_Epic; // 0x10
		::System::String* m_External; // 0x18
		::Epic::OnlineServices::Metrics::MetricsAccountIdType m_AccountIdType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Metrics::MetricsAccountIdType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::Metrics::MetricsAccountIdType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::Metrics::MetricsAccountIdType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::MetricsAccountIdType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_Epic()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_GET_EPIC_OFFSET))(this);
		}

		::System::Void set_Epic(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_EPIC_OFFSET))(this, value);
		}

		::System::String* get_External()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_GET_EXTERNAL_OFFSET))(this);
		}

		::System::Void set_External(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_EXTERNAL_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* op_Implicit(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId*(*)(::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* op_Implicit_1(::System::String* value)
		{
			return ((::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_OP_IMPLICIT_1_OFFSET))(value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTID_SET_1_OFFSET))(this, other);
		}
	};
}
