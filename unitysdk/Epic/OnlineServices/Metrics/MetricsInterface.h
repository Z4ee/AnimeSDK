#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Metrics { class BeginPlayerSessionOptions; }
namespace Epic::OnlineServices::Metrics { class EndPlayerSessionOptions; }

#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_BEGINPLAYERSESSION_OFFSET UNITYSDK_OFFSET(0x869C230)
#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_ENDPLAYERSESSION_OFFSET UNITYSDK_OFFSET(0x869C390)
#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x869C220)
#define EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x869C210)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int MetricsInterface_TypeDefinitionIndex = 35976;

	class MetricsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 BeginplayersessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EndplayersessionApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result BeginPlayerSession(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_BEGINPLAYERSESSION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result EndPlayerSession(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_METRICSINTERFACE_ENDPLAYERSESSION_OFFSET))(this, options);
		}
	};
}
