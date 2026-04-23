#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class SimpRTXBehavior; }

#define RPG_CLIENT_SIMPRTXMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB177370)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXMonoPlugin_TypeDefinitionIndex = 64711;

	class SimpRTXMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SimpRTXBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
