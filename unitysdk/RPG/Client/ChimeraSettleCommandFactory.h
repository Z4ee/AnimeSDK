#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraSettleCommand; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDFACTORY_CREATECOMMAND_OFFSET UNITYSDK_OFFSET(0xCC09C30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandFactory_TypeDefinitionIndex = 63519;

	class ChimeraSettleCommandFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::IChimeraSettleCommand* CreateCommand(::RPG::Client::ChimeraSettleCommandType a1)
		{
			return ((::RPG::Client::IChimeraSettleCommand*(*)(::RPG::Client::ChimeraSettleCommandType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDFACTORY_CREATECOMMAND_OFFSET))(a1);
		}
	};
}
