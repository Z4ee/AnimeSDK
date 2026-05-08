#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityMovementStyleSpeedParameters; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTMOVESTYLEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x11501190)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMovementMoveStyleParameters_TypeDefinitionIndex = 79729;

	class NPCAbilityMovementMoveStyleParameters : public ::System::Object
	{
	public:
		::System::String* movementStyle; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityMovementStyleSpeedParameters*>* DesiredSpeeds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTMOVESTYLEPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
