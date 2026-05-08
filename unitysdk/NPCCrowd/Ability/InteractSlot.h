#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/SlotState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_INTERACTSLOT_ONRELEASED_OFFSET UNITYSDK_OFFSET(0xF3E8E40)
#define NPCCROWD_ABILITY_INTERACTSLOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF3E8E20)
#define NPCCROWD_ABILITY_INTERACTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E8E10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int InteractSlot_TypeDefinitionIndex = 62299;

	class InteractSlot : public ::System::Object
	{
	public:
		::NPCCrowd::Ability::SlotState state; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Quaternion rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTSLOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTSLOT__CTOR_1_OFFSET))(this, pos, rot);
		}

		::System::Void OnReleased()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTSLOT_ONRELEASED_OFFSET))(this);
		}
	};
}
