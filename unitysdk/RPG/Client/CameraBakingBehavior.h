#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_CAMERABAKINGBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B07D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraBakingBehavior_TypeDefinitionIndex = 66397;

	class CameraBakingBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABAKINGBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
