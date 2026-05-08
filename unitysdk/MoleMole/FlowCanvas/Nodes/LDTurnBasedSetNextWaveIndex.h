#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETNEXTWAVEINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x170CB020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETNEXTWAVEINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x170CB150)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedSetNextWaveIndex_TypeDefinitionIndex = 76259;

	class LDTurnBasedSetNextWaveIndex : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETNEXTWAVEINDEX__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETNEXTWAVEINDEX_INVOKE_OFFSET))(this);
		}
	};
}
