#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::EffectSimulate { class FloatCurve; }
namespace System { class String; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1_TypeDefinitionIndex = 78128;

	struct alignas(8) ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1
	{
		::MoleMole::EffectSimulate::FloatCurve* Field_2_3; // 0x10
		::System::String* Field_2_0; // 0x18
		::System::Single Field_2_1; // 0x20
		::System::Single Field_2_2; // 0x24
	};
}
