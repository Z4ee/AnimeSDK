#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C2860)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionGetRegisteredPlayerCountOptions_TypeDefinitionIndex = 42895;

	class ActiveSessionGetRegisteredPlayerCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
