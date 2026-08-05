#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_72BDD67FEA972F1C;
namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMemberInteractionArgs_TypeDefinitionIndex = 59591;

	struct alignas(8) FMemberInteractionArgs
	{
		::System::String* InteractName; // 0x10
		::System::Int32 ConfigId; // 0x18
		::System::Single RequiredInputHoldTime; // 0x1C
		::System::Single CurrentInputHoldTime; // 0x20
		::Class_2_72BDD67FEA972F1C* Instance; // 0x28
	};
}
