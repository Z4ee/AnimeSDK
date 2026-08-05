#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define FLOWCANVAS_NODES_INTEGERINVERT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E722680)
#define FLOWCANVAS_NODES_INTEGERINVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E722690)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerInvert_TypeDefinitionIndex = 30558;

	class IntegerInvert : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERINVERT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERINVERT_INVOKE_OFFSET))(this, value);
		}
	};
}
