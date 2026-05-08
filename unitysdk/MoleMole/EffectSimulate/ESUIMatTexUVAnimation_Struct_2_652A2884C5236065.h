#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::EffectSimulate { class UVCurve; }
namespace System { class String; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatTexUVAnimation_Struct_2_652A2884C5236065_TypeDefinitionIndex = 46626;

	struct alignas(8) ESUIMatTexUVAnimation_Struct_2_652A2884C5236065
	{
		::MoleMole::EffectSimulate::UVCurve* Field_2_3; // 0x10
		::System::String* Field_2_0; // 0x18
		::System::Single Field_2_2; // 0x20
		::System::Single Field_2_1; // 0x24
	};
}
