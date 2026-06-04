#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA312A50)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int QueryNATTypeOptions_TypeDefinitionIndex = 42549;

	class QueryNATTypeOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_QUERYNATTYPEOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
