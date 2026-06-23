#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define FLOWCANVAS_NODES_NOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC349B0)
#define FLOWCANVAS_NODES_NOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC349C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NOT_TypeDefinitionIndex = 29990;

	class NOT : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NOT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NOT_INVOKE_OFFSET))(this, value);
		}
	};
}
