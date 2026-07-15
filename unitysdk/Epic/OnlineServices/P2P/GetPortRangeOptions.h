#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C226AA0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetPortRangeOptions_TypeDefinitionIndex = 43381;

	class GetPortRangeOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPORTRANGEOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
