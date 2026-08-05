#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_AND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D055B50)
#define FLOWCANVAS_NODES_AND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D055B60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AND_TypeDefinitionIndex = 31255;

	class AND : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AND__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AND_INVOKE_OFFSET))(this, a, b);
		}
	};
}
