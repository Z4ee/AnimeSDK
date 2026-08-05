#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D65C0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x149D66F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardSetHollowEntityPriority_TypeDefinitionIndex = 81332;

	class ChessboardSetHollowEntityPriority : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::UInt32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityid, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY_INVOKE_OFFSET))(this, entityid, priority);
		}
	};
}
