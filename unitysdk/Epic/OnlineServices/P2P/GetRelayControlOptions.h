#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_GETRELAYCONTROLOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AC170)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetRelayControlOptions_TypeDefinitionIndex = 36160;

	class GetRelayControlOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETRELAYCONTROLOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
