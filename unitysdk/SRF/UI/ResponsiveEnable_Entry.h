#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/UI/ResponsiveEnable_Modes.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveEnable_Entry_TypeDefinitionIndex = 33950;

	struct alignas(8) ResponsiveEnable_Entry
	{
		::Il2CppArray<::UnityEngine::Behaviour*>* Components; // 0x10
		::Il2CppArray<::UnityEngine::GameObject*>* GameObjects; // 0x18
		::SRF::UI::ResponsiveEnable_Modes Mode; // 0x20
		::System::Single ThresholdHeight; // 0x24
		::System::Single ThresholdWidth; // 0x28
	};
}
