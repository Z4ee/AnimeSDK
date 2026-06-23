#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_INTEGERNOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C61FB50)
#define FLOWCANVAS_NODES_INTEGERNOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61FB60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerNotEqual_TypeDefinitionIndex = 30651;

	class IntegerNotEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERNOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERNOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
