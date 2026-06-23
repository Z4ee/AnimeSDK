#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_BOOLEANEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7B7A50)
#define FLOWCANVAS_NODES_BOOLEANEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B7A60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BooleanEqual_TypeDefinitionIndex = 29422;

	class BooleanEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BOOLEANEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BOOLEANEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
