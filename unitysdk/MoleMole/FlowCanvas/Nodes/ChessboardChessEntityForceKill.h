#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYFORCEKILL_INVOKE_OFFSET UNITYSDK_OFFSET(0x15404E90)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYFORCEKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x15405070)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityForceKill_TypeDefinitionIndex = 81188;

	class ChessboardChessEntityForceKill : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYFORCEKILL__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYFORCEKILL_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}
