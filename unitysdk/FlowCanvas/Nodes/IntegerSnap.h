#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_INTEGERSNAP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFC05A0)
#define FLOWCANVAS_NODES_INTEGERSNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC0660)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerSnap_TypeDefinitionIndex = 26895;

	class IntegerSnap : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERSNAP__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 value, ::System::Int32 interval)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERSNAP_INVOKE_OFFSET))(this, value, interval);
		}
	};
}
