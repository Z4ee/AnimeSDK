#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_4.h"

#define FLOWCANVAS_NODES_DAMPFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC41330)
#define FLOWCANVAS_NODES_DAMPFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC413A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DampFloat_TypeDefinitionIndex = 29829;

	class DampFloat : public ::FlowCanvas::Nodes::PureFunctionNode_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DAMPFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single current, ::System::Single target, ::System::Single damp)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DAMPFLOAT_INVOKE_OFFSET))(this, current, target, damp);
		}
	};
}
