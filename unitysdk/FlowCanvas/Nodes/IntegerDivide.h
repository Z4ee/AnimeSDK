#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_INTEGERDIVIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B49B7B0)
#define FLOWCANVAS_NODES_INTEGERDIVIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49B7C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerDivide_TypeDefinitionIndex = 27733;

	class IntegerDivide : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERDIVIDE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERDIVIDE_INVOKE_OFFSET))(this, a, b);
		}
	};
}
