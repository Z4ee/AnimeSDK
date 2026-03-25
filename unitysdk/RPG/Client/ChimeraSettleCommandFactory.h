#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraSettleCommand; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDFACTORY_CREATECOMMAND_OFFSET UNITYSDK_OFFSET(0x93CA9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandFactory_TypeDefinitionIndex = 51527;

	class ChimeraSettleCommandFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::IChimeraSettleCommand* CreateCommand(::RPG::Client::ChimeraSettleCommandType type)
		{
			return ((::RPG::Client::IChimeraSettleCommand*(*)(::RPG::Client::ChimeraSettleCommandType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDFACTORY_CREATECOMMAND_OFFSET))(type);
		}
	};
}
