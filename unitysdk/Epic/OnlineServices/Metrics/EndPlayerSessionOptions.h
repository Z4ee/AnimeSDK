#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Metrics { class EndPlayerSessionOptionsAccountId; }

#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA301B10)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA301B20)
#define EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA301B30)

namespace Epic::OnlineServices::Metrics
{
	inline static constexpr unsigned int EndPlayerSessionOptions_TypeDefinitionIndex = 42600;

	class EndPlayerSessionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* _AccountId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_METRICS_ENDPLAYERSESSIONOPTIONS_SET_ACCOUNTID_OFFSET))(this, a1);
		}
	};
}
