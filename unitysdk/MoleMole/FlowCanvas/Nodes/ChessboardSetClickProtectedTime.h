#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A999CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A999D70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardSetClickProtectedTime_TypeDefinitionIndex = 83421;

	class ChessboardSetClickProtectedTime : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single overrideFirstInterval, ::System::Single overrideInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME_INVOKE_OFFSET))(this, overrideFirstInterval, overrideInterval);
		}
	};
}
