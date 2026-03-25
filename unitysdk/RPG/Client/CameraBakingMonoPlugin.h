#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class CameraBakingBehavior; }

#define RPG_CLIENT_CAMERABAKINGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9250AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraBakingMonoPlugin_TypeDefinitionIndex = 58181;

	class CameraBakingMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CameraBakingBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABAKINGMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
