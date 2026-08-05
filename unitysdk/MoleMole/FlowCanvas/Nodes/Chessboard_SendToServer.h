#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B82F7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82F8E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int Chessboard_SendToServer_TypeDefinitionIndex = 79834;

	class Chessboard_SendToServer : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVER_INVOKE_OFFSET))(this);
		}
	};
}
