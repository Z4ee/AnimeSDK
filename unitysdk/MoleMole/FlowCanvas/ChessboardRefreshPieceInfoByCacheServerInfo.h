#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x182CA320)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x182CA5E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRefreshPieceInfoByCacheServerInfo_TypeDefinitionIndex = 40530;

	class ChessboardRefreshPieceInfoByCacheServerInfo : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 pieceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO_INVOKE_OFFSET))(this, pieceIndex);
		}
	};
}
