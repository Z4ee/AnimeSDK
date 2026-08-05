#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1299DEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1299E070)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Abyss_GetLoadedAbyssHeatCount_TypeDefinitionIndex = 46962;

	class LD_Abyss_GetLoadedAbyssHeatCount : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
