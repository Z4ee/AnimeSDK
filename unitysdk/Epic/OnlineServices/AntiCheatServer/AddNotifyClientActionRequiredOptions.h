#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D0B20)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyClientActionRequiredOptions_TypeDefinitionIndex = 34644;

	class AddNotifyClientActionRequiredOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
