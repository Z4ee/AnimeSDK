#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ABILITY_NPCSTATEMACHINERANDOMINTINITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10296950)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCStateMachineRandomIntInitConfig_TypeDefinitionIndex = 89802;

	class NPCStateMachineRandomIntInitConfig : public ::System::Object
	{
	public:
		::System::String* transitionCondition; // 0x10
		::System::Int32 minInt; // 0x18
		::System::Int32 maxInt; // 0x1C
		::System::Single randomProbability; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATEMACHINERANDOMINTINITCONFIG__CTOR_OFFSET))(this);
		}
	};
}
