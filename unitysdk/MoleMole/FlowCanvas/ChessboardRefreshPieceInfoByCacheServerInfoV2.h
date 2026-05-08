#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E3FF90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2__CTOR_OFFSET UNITYSDK_OFFSET(0x16E40250)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRefreshPieceInfoByCacheServerInfoV2_TypeDefinitionIndex = 71079;

	class ChessboardRefreshPieceInfoByCacheServerInfoV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREFRESHPIECEINFOBYCACHESERVERINFOV2_INVOKE_OFFSET))(this, x, y);
		}
	};
}
