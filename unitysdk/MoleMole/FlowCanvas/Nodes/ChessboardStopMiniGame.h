#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPMINIGAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B06A20)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19B06BD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardStopMiniGame_TypeDefinitionIndex = 42142;

	class ChessboardStopMiniGame : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPMINIGAME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPMINIGAME_INVOKE_OFFSET))(this);
		}
	};
}
