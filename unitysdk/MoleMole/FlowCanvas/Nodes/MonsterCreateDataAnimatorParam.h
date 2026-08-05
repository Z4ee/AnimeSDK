#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParamType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterCreateDataAnimatorParam_TypeDefinitionIndex = 79119;

	struct alignas(8) MonsterCreateDataAnimatorParam
	{
		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType ParamType; // 0x10
		::System::String* Name; // 0x18
		::System::Boolean AsBool; // 0x14
		::System::Boolean AsTrigger; // 0x14
		::System::Int32 AsInt; // 0x14
		::System::Single AsFloat; // 0x14
	};
}
