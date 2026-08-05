#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE7BA0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyClientActionRequiredOptions_TypeDefinitionIndex = 36866;

	class AddNotifyClientActionRequiredOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTACTIONREQUIREDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
