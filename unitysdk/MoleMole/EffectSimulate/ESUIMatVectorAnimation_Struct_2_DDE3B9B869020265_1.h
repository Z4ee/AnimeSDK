#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::EffectSimulate { class Vector4Curve; }
namespace System { class String; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265_1_TypeDefinitionIndex = 78816;

	struct alignas(8) ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265_1
	{
		::MoleMole::EffectSimulate::Vector4Curve* Field_2_3; // 0x10
		::System::String* Field_2_0; // 0x18
		::System::Single Field_2_1; // 0x20
		::System::Single Field_2_2; // 0x24
	};
}
