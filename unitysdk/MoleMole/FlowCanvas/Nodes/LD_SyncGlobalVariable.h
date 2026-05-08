#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SYNCGLOBALVARIABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12332C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SYNCGLOBALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12332D70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SyncGlobalVariable_TypeDefinitionIndex = 68607;

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
