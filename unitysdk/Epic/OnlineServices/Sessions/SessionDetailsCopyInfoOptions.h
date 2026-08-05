#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6A50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsCopyInfoOptions_TypeDefinitionIndex = 35768;

	class SessionDetailsCopyInfoOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYINFOOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
