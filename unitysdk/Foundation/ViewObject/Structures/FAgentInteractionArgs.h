#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_72BDD67FEA972F1C;
namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FAgentInteractionArgs_TypeDefinitionIndex = 42563;

	struct alignas(8) FAgentInteractionArgs
	{
		::System::String* InteractName; // 0x10
		::System::Int32 TargetGroupId; // 0x18
		::System::Int32 TargetConfigId; // 0x1C
		::System::Int32 TargetVoId; // 0x20
		::System::Single RequiredInputHoldTime; // 0x24
		::System::Single CurrentInputHoldTime; // 0x28
		::Class_2_72BDD67FEA972F1C* Instance; // 0x30
	};
}
