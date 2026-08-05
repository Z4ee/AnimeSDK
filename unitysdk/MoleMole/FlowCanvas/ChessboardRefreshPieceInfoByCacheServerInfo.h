#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B019C0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19B01C80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRefreshPieceInfoByCacheServerInfo_TypeDefinitionIndex = 46467;

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
