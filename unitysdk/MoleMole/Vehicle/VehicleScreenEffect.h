#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleScreenEffect_TypeDefinitionIndex = 45098;

	struct alignas(8) VehicleScreenEffect
	{
		::System::String* EffectKey; // 0x10
		::MoleMole::Config::ScreenEffectType EffectType; // 0x18
		::Il2CppArray<::System::String*>* AnimatorStates; // 0x20
	};
}
