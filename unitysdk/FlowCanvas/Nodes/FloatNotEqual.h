#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATNOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E1460)
#define FLOWCANVAS_NODES_FLOATNOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E1470)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatNotEqual_TypeDefinitionIndex = 27048;

	class FloatNotEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATNOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATNOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
