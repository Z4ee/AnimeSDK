#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATLESSEQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A845420)
#define FLOWCANVAS_NODES_FLOATLESSEQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A845430)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatLessEqualThan_TypeDefinitionIndex = 26873;

	class FloatLessEqualThan : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATLESSEQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATLESSEQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
