#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2750B0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int AddNotifyJoinGameAcceptedOptions_TypeDefinitionIndex = 36017;

	class AddNotifyJoinGameAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
