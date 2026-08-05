#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID_INVOKE_OFFSET UNITYSDK_OFFSET(0x138398F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID__CTOR_OFFSET UNITYSDK_OFFSET(0x13839A50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetRouteMapID_TypeDefinitionIndex = 47756;

	class LD_AbyssS2_GetRouteMapID : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID_INVOKE_OFFSET))(this);
		}
	};
}
