#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Metrics/EndPlayerSessionOptionsAccountIdInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Metrics { class EndPlayerSessionOptions; }
namespace Epic::OnlineServices::Metrics { class EndPlayerSessionOptionsAccountId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x534C0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x533F0)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x53300)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x53370)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int EndPlayerSessionOptionsInternal_TypeDefinitionIndex = 35972;

	struct alignas(4) EndPlayerSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal m_AccountId; // 0x14

		::System::Void set_AccountId(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
