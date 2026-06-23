#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SYNCGLOBALVARIABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDC2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SYNCGLOBALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDC3F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SyncGlobalVariable_TypeDefinitionIndex = 81717;

	class LD_SyncGlobalVariable : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SYNCGLOBALVARIABLE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SYNCGLOBALVARIABLE_INVOKE_OFFSET))(this);
		}
	};
}
