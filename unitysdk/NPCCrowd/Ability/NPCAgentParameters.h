#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCAGENTPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x11D85C50)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAgentParameters_TypeDefinitionIndex = 76072;

	class NPCAgentParameters : public ::System::Object
	{
	public:
		::System::Single radius; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAGENTPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
