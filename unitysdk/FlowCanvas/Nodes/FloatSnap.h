#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATSNAP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F3C40)
#define FLOWCANVAS_NODES_FLOATSNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F3D00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatSnap_TypeDefinitionIndex = 27412;

	class FloatSnap : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::System::Single, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATSNAP__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Single value, ::System::Int32 interval)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATSNAP_INVOKE_OFFSET))(this, value, interval);
		}
	};
}
