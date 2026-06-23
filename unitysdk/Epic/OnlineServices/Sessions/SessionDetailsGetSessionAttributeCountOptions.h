#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27D960)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsGetSessionAttributeCountOptions_TypeDefinitionIndex = 35115;

	class SessionDetailsGetSessionAttributeCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSGETSESSIONATTRIBUTECOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
