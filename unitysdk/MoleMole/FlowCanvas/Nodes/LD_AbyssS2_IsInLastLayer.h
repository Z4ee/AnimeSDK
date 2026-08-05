#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19246BD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19246CF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsInLastLayer_TypeDefinitionIndex = 49561;

	class LD_AbyssS2_IsInLastLayer : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER_INVOKE_OFFSET))(this);
		}
	};
}
