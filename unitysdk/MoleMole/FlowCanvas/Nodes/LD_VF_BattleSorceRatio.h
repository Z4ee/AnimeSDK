#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_VF_BATTLESORCERATIO_INVOKE_OFFSET UNITYSDK_OFFSET(0x19082A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_VF_BATTLESORCERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19082BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_VF_BattleSorceRatio_TypeDefinitionIndex = 82500;

	class LD_VF_BattleSorceRatio : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_VF_BATTLESORCERATIO__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_VF_BATTLESORCERATIO_INVOKE_OFFSET))(this);
		}
	};
}
