#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1232EFF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1232F1F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AddReviveCoin_TypeDefinitionIndex = 65127;

	class LD_AddReviveCoin : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Int32, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 Count, ::System::Single HPRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN_INVOKE_OFFSET))(this, Count, HPRatio);
		}
	};
}
