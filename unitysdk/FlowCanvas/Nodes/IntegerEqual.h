#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_INTEGEREQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADADE20)
#define FLOWCANVAS_NODES_INTEGEREQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADADE30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerEqual_TypeDefinitionIndex = 26725;

	class IntegerEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGEREQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGEREQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
