#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::EffectSimulate { class Vector3Curve; }
namespace System { class String; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESVector3Behavior_Struct_2_269E0612798ED09C_TypeDefinitionIndex = 62277;

	struct alignas(8) ESVector3Behavior_Struct_2_269E0612798ED09C
	{
		::MoleMole::EffectSimulate::Vector3Curve* Field_2_6; // 0x10
		::System::String* Field_2_1; // 0x18
		::System::Single Field_2_0; // 0x20
		::System::Single Field_2_7; // 0x24
	};
}
