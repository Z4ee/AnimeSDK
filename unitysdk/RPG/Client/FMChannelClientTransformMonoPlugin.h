#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FMChannelClientTransformMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class FMChannelClientTransformBehavior; }
namespace System { class String; }

#define RPG_CLIENT_FMCHANNELCLIENTTRANSFORMMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9655F70)

namespace RPG::Client
{
	inline static constexpr unsigned int FMChannelClientTransformMonoPlugin_TypeDefinitionIndex = 57532;

	class FMChannelClientTransformMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FMChannelClientTransformBehavior*>
	{
	public:
		::RPG::Client::FMChannelClientTransformMode Mode; // 0x30
		::System::String* Name; // 0x38
		::System::Single Delay; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMCHANNELCLIENTTRANSFORMMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
