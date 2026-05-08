#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/Share/GridDir.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E042F0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E04370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityMove_TypeDefinitionIndex = 61820;

	class ChessboardChessEntityMove : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::MoleMole::ChessEntity*, ::Share::GridDir, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::Share::GridDir dir, ::System::Int32 distance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::Share::GridDir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVE_INVOKE_OFFSET))(this, chessEntity, dir, distance);
		}
	};
}
