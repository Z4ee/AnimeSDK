#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_DELTATIMED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D400400)
#define FLOWCANVAS_NODES_DELTATIMED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D400440)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DeltaTimed_TypeDefinitionIndex = 29586;

	class DeltaTimed : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELTATIMED__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single value, ::System::Single multiplier)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELTATIMED_INVOKE_OFFSET))(this, value, multiplier);
		}
	};
}
