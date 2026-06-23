#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESTARTMINIGAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A392BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESTARTMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A392D60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRestartMiniGame_TypeDefinitionIndex = 57655;

	class ChessboardRestartMiniGame : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESTARTMINIGAME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESTARTMINIGAME_INVOKE_OFFSET))(this);
		}
	};
}
