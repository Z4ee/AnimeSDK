#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8327B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B832970)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetCheckPointActivedCount_TypeDefinitionIndex = 50687;

	class LDGetCheckPointActivedCount : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
