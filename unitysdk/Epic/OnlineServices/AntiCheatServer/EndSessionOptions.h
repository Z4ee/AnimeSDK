#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8393610)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int EndSessionOptions_TypeDefinitionIndex = 36608;

	class EndSessionOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ENDSESSIONOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
