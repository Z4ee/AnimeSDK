#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATMULTIPLY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B49B320)
#define FLOWCANVAS_NODES_FLOATMULTIPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49B330)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatMultiply_TypeDefinitionIndex = 26679;

	class FloatMultiply : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMULTIPLY__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMULTIPLY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
