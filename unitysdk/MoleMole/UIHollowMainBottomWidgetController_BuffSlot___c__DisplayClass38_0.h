#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace MoleMole { class UIHollowMainBottomWidgetController_BuffSlot; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0_TypeDefinitionIndex = 83685;

	struct alignas(8) UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0
	{
		::UnityEngine::ParticleSystem* oEnd; // 0x10
		::MoleMole::UIHollowMainBottomWidgetController_BuffSlot* __4__this; // 0x18
		::UnityEngine::ParticleSystem* oStart; // 0x20
		::UnityEngine::GameObject* oLoop; // 0x28
		::Coffee::UIExtensions::UIParticle* oLoop2; // 0x30
	};
}
