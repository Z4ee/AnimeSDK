#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"
#include "unitysdk/Share/GridDir.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x10B9EE60)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9F0B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPlayerMoveToV2_TypeDefinitionIndex = 68451;

	class ChessboardPlayerMoveToV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::Share::GridDir>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::Share::GridDir a)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYERMOVETOV2_INVOKE_OFFSET))(this, a);
		}
	};
}
