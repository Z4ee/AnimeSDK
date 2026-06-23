#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C535C00)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int CopyUserAuthTokenOptions_TypeDefinitionIndex = 36143;

	class CopyUserAuthTokenOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
