#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define FLOWCANVAS_NODES_FLOATINVERT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D0565B0)
#define FLOWCANVAS_NODES_FLOATINVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0565C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatInvert_TypeDefinitionIndex = 29920;

	class FloatInvert : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATINVERT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATINVERT_INVOKE_OFFSET))(this, value);
		}
	};
}
