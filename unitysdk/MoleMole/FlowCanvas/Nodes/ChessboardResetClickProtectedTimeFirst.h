#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESETCLICKPROTECTEDTIMEFIRST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B82F750)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESETCLICKPROTECTEDTIMEFIRST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82F7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardResetClickProtectedTimeFirst_TypeDefinitionIndex = 60945;

	class ChessboardResetClickProtectedTimeFirst : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESETCLICKPROTECTEDTIMEFIRST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDRESETCLICKPROTECTEDTIMEFIRST_INVOKE_OFFSET))(this);
		}
	};
}
