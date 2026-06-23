#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPMINIGAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x182CF3D0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x182CF580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardStopMiniGame_TypeDefinitionIndex = 48404;

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
