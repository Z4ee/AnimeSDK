#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATGREATERTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA92FD0)
#define FLOWCANVAS_NODES_FLOATGREATERTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA92FE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatGreaterThan_TypeDefinitionIndex = 31202;

	class FloatGreaterThan : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATGREATERTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATGREATERTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
