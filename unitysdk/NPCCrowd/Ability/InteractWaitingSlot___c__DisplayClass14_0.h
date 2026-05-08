#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability { class InteractSlot; }

#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x114FFE40)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___C__DISPLAYCLASS14_0__TRYOCCUPYVALIDSLOT_B__0_OFFSET UNITYSDK_OFFSET(0x114FFE50)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int InteractWaitingSlot___c__DisplayClass14_0_TypeDefinitionIndex = 57171;

	class InteractWaitingSlot___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 targetPos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _TryOccupyValidSlot_b__0(::NPCCrowd::Ability::InteractSlot* x, ::NPCCrowd::Ability::InteractSlot* y)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Ability::InteractSlot*, ::NPCCrowd::Ability::InteractSlot*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___C__DISPLAYCLASS14_0__TRYOCCUPYVALIDSLOT_B__0_OFFSET))(this, x, y);
		}
	};
}
