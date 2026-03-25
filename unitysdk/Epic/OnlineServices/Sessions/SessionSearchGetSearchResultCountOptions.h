#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83B2BA0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchGetSearchResultCountOptions_TypeDefinitionIndex = 35541;

	class SessionSearchGetSearchResultCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
