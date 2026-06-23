#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_6.h"

#define FLOWCANVAS_NODES_REMAPFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D349850)
#define FLOWCANVAS_NODES_REMAPFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3498B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RemapFloat_TypeDefinitionIndex = 29699;

	class RemapFloat : public ::FlowCanvas::Nodes::PureFunctionNode_6<::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REMAPFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single current, ::System::Single iMin, ::System::Single iMax, ::System::Single oMin, ::System::Single oMax)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REMAPFLOAT_INVOKE_OFFSET))(this, current, iMin, iMax, oMin, oMax);
		}
	};
}
