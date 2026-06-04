#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceGameFlowMessage.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow_InitParameters_TypeDefinitionIndex = 71017;

	struct alignas(8) CakeRaceGameFlow_InitParameters
	{
		::RPG::Client::CakeRaceGameFlowMessage StartMessage; // 0x10
		::System::Object* StartMessageParams; // 0x18
	};
}
