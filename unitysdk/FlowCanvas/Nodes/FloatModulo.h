#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATMODULO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E1430)
#define FLOWCANVAS_NODES_FLOATMODULO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E1440)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatModulo_TypeDefinitionIndex = 26752;

	class FloatModulo : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMODULO__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single value, ::System::Single mod)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMODULO_INVOKE_OFFSET))(this, value, mod);
		}
	};
}
