#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/MetricsAccountIdType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Metrics { class EndPlayerSessionOptionsAccountId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x53C40)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EPIC_OFFSET UNITYSDK_OFFSET(0x53980)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x53AA0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x53BD0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EPIC_OFFSET UNITYSDK_OFFSET(0x53A00)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EXTERNAL_OFFSET UNITYSDK_OFFSET(0x53B20)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x53BC0)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int EndPlayerSessionOptionsAccountIdInternal_TypeDefinitionIndex = 41800;

	struct alignas(4) EndPlayerSessionOptionsAccountIdInternal
	{
		::Epic::OnlineServices::Metrics::MetricsAccountIdType m_AccountIdType; // 0x10
		::System::IntPtr m_Epic; // 0x14
		::System::IntPtr m_External; // 0x14

		::Epic::OnlineServices::EpicAccountId* get_Epic()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EPIC_OFFSET))(this);
		}

		::System::Void set_Epic(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EPIC_OFFSET))(this, value);
		}

		::System::String* get_External()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_GET_EXTERNAL_OFFSET))(this);
		}

		::System::Void set_External(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_EXTERNAL_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSACCOUNTIDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
