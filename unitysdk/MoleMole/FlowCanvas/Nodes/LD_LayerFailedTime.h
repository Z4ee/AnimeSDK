#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1383D660)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1383D7A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LayerFailedTime_TypeDefinitionIndex = 46047;

	class LD_LayerFailedTime : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME_INVOKE_OFFSET))(this);
		}
	};
}
