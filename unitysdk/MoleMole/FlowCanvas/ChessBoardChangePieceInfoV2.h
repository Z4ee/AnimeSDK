#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardChangePieceInfoV2_ServerInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFOV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B194510)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFOV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1948B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangePieceInfoV2_TypeDefinitionIndex = 52677;

	class ChessBoardChangePieceInfoV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfoV2_ServerInfo>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFOV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessBoardChangePieceInfoV2_ServerInfo serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardChangePieceInfoV2_ServerInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFOV2_INVOKE_OFFSET))(this, serverInfo);
		}
	};
}
