#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_OR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E21C0)
#define FLOWCANVAS_NODES_OR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E21D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int OR_TypeDefinitionIndex = 27406;

	class OR : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OR__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OR_INVOKE_OFFSET))(this, a, b);
		}
	};
}
