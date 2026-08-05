#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B82F6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82F730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPieceStopNapEffect_TypeDefinitionIndex = 81725;

	class ChessboardPieceStopNapEffect : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 a)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECT_INVOKE_OFFSET))(this, a);
		}
	};
}
