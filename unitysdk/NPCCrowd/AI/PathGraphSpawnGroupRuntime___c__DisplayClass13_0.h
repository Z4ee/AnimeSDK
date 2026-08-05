#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityMovementMoveStyleParameters; }
namespace System { class String; }

#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF84FB10)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__STARTPATHFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0xF84FD40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnGroupRuntime___c__DisplayClass13_0_TypeDefinitionIndex = 44119;

	class PathGraphSpawnGroupRuntime___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* configuredMovementStyle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartPathFollow_b__0(::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__STARTPATHFOLLOW_B__0_OFFSET))(this, x);
		}
	};
}
