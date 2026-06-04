#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianMemberSpecialTag.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_IPEDESTRIANMEMBEREXTERNALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBD25690)

namespace RPG::Client
{
	inline static constexpr unsigned int IPedestrianMemberExternalConfig_TypeDefinitionIndex = 64768;

	class IPedestrianMemberExternalConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IPEDESTRIANMEMBEREXTERNALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
