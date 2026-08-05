#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATDIVIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DB24AA0)
#define FLOWCANVAS_NODES_FLOATDIVIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24AB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatDivide_TypeDefinitionIndex = 29862;

	class FloatDivide : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATDIVIDE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATDIVIDE_INVOKE_OFFSET))(this, a, b);
		}
	};
}
