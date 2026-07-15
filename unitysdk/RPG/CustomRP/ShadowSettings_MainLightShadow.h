#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ShadowFilterMode.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShadowSettings_MainLightShadow_TypeDefinitionIndex = 36026;

	struct alignas(8) ShadowSettings_MainLightShadow
	{
		::Il2CppArray<::System::Int32>* CascadeUpdateInterval; // 0x10
		::System::Boolean TemporalFilter; // 0x18
		::System::Boolean TranslucentShadows; // 0x19
		::RPG::CustomRP::ShadowFilterMode Filter; // 0x1C
		::System::Single ScreenSpaceShadowScale; // 0x20
	};
}
