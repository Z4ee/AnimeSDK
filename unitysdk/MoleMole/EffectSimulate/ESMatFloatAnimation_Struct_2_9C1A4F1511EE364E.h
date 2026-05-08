#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::EffectSimulate { class FloatCurve; }
namespace System { class String; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatFloatAnimation_Struct_2_9C1A4F1511EE364E_TypeDefinitionIndex = 51233;

	struct alignas(8) ESMatFloatAnimation_Struct_2_9C1A4F1511EE364E
	{
		::System::String* Field_2_0; // 0x10
		::MoleMole::EffectSimulate::FloatCurve* Field_2_3; // 0x18
		::System::Single Field_2_1; // 0x20
		::System::Single Field_2_2; // 0x24
	};
}
