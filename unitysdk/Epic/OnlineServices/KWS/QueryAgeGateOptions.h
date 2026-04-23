#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E96A60)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int QueryAgeGateOptions_TypeDefinitionIndex = 42082;

	class QueryAgeGateOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_QUERYAGEGATEOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
