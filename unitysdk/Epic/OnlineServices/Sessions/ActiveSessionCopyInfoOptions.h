#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONCOPYINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE57E50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionCopyInfoOptions_TypeDefinitionIndex = 45073;

	class ActiveSessionCopyInfoOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONCOPYINFOOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
