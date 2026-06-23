#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A01D390)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARD_SENDTOSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01D490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int Chessboard_SendToServer_TypeDefinitionIndex = 83340;

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
