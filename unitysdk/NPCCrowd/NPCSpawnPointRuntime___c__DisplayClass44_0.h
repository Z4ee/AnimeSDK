#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityMovementMoveStyleParameters; }
namespace System { class String; }

#define NPCCROWD_NPCSPAWNPOINTRUNTIME___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF078480)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME___C__DISPLAYCLASS44_0__STARTPATHFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0xF078490)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnPointRuntime___c__DisplayClass44_0_TypeDefinitionIndex = 56333;

	class NPCSpawnPointRuntime___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::String* movementStyle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartPathFollow_b__0(::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME___C__DISPLAYCLASS44_0__STARTPATHFOLLOW_B__0_OFFSET))(this, x);
		}
	};
}
