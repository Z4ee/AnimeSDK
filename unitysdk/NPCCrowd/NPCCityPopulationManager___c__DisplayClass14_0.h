#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityMovementMoveStyleParameters; }
namespace System { class String; }

#define NPCCROWD_NPCCITYPOPULATIONMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C24C0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER___C__DISPLAYCLASS14_0__SPAWNNPCFORNODE_B__0_OFFSET UNITYSDK_OFFSET(0xF9C24D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCityPopulationManager___c__DisplayClass14_0_TypeDefinitionIndex = 73594;

	class NPCCityPopulationManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* pathStyle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SpawnNpcForNode_b__0(::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER___C__DISPLAYCLASS14_0__SPAWNNPCFORNODE_B__0_OFFSET))(this, x);
		}
	};
}
