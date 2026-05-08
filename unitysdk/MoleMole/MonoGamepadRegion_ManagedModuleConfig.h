#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoGamepadModule; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadRegion_ManagedModuleConfig_TypeDefinitionIndex = 45694;

	struct alignas(8) MonoGamepadRegion_ManagedModuleConfig
	{
		::MoleMole::MonoGamepadModule* module; // 0x10
		::System::Boolean focusOnRegionFocus; // 0x18
		::System::Boolean focusImmediately; // 0x19
	};
}
