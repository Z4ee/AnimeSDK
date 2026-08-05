#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E51C1B0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int AddNotifyAuthExpirationOptions_TypeDefinitionIndex = 36696;

	class AddNotifyAuthExpirationOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
