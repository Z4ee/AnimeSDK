#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptions; }
namespace Epic::OnlineServices::Metrics { class EndPlayerSessionOptions; }

#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_BEGINPLAYERSESSION_OFFSET UNITYSDK_OFFSET(0xB3A6140)
#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_ENDPLAYERSESSION_OFFSET UNITYSDK_OFFSET(0xB3A62A0)
#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3A6130)
#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A6120)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int MetricsInterface_TypeDefinitionIndex = 45648;

	class MetricsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 BeginplayersessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EndplayersessionApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result BeginPlayerSession(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_BEGINPLAYERSESSION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result EndPlayerSession(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_ENDPLAYERSESSION_OFFSET))(this, a1);
		}
	};
}
