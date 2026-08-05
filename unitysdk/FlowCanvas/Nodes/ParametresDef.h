#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParametresDef_TypeDefinitionIndex = 30557;

	struct alignas(8) ParametresDef
	{
		::System::Collections::Generic::List_1<::FlowCanvas::Nodes::ParamDef>* paramDefinitions; // 0x10
		::FlowCanvas::Nodes::ParamDef instanceDef; // 0x18
		::FlowCanvas::Nodes::ParamDef resultDef; // 0x50
	};
}
