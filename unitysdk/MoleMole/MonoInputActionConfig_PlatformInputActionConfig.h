#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputActionConfig_PlatformInputActionConfig_TypeDefinitionIndex = 45307;

	struct alignas(8) MonoInputActionConfig_PlatformInputActionConfig
	{
		::MoleMole::EUILayoutPlatform platform; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* inputActionEvents; // 0x18
	};
}
