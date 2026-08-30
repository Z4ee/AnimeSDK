#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class StreamingNotifyBehavior; }

#define RPG_CLIENT_STREAMINGNOTIFYMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE105F30)

namespace RPG::Client
{
	inline static constexpr unsigned int StreamingNotifyMonoPlugin_TypeDefinitionIndex = 70826;

	class StreamingNotifyMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StreamingNotifyBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STREAMINGNOTIFYMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
