#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardChangePieceInfo_ServerInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x15401560)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15401A30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangePieceInfo_TypeDefinitionIndex = 51742;

	class ChessBoardChangePieceInfo : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEPIECEINFO_INVOKE_OFFSET))(this, serverInfo);
		}
	};
}
