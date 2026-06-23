#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleAttachedEffect_TypeDefinitionIndex = 73595;

	struct alignas(8) VehicleAttachedEffect
	{
		::System::String* EffectPattern; // 0x10
		::System::String* AttachPointName; // 0x18
		::Il2CppArray<::System::String*>* AnimatorStates; // 0x20
	};
}
