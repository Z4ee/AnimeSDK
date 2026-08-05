#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoZenkovResultPageConfig_NumberConfig_TypeDefinitionIndex = 73721;

	struct alignas(8) MonoZenkovResultPageConfig_NumberConfig
	{
		::UnityEngine::GameObject* GameObject; // 0x10
		::System::Boolean RandomizeStartNumber; // 0x18
		::System::Int32 StartNumber; // 0x1C
		::System::Boolean RandomizeNextNumber; // 0x20
		::System::Single NomalizedOffset; // 0x24
		::System::Single Speed; // 0x28
		::System::Boolean SampleEndAnimIntervalFromCurve; // 0x2C
		::System::Single EndAnimInterval; // 0x30
	};
}
