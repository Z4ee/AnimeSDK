#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7D920)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int EndSessionOptions_TypeDefinitionIndex = 34748;

	class EndSessionOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ENDSESSIONOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
