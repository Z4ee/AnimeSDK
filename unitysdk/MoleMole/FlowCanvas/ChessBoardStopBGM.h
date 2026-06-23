#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPBGM_INVOKE_OFFSET UNITYSDK_OFFSET(0x15806E30)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x15807050)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardStopBGM_TypeDefinitionIndex = 46949;

	class ChessBoardStopBGM : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPBGM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPBGM_INVOKE_OFFSET))(this);
		}
	};
}
