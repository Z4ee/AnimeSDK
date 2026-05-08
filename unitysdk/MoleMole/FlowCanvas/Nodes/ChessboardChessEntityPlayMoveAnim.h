#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/Share/GridDir.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM_INVOKE_OFFSET UNITYSDK_OFFSET(0x15405100)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15405170)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityPlayMoveAnim_TypeDefinitionIndex = 47748;

	class ChessboardChessEntityPlayMoveAnim : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::ChessEntity*, ::Share::GridDir>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::Share::GridDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYPLAYMOVEANIM_INVOKE_OFFSET))(this, chessEntity, dir);
		}
	};
}
