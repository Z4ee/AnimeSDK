#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDRESETBGM_INVOKE_OFFSET UNITYSDK_OFFSET(0x15401A50)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDRESETBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x15401C70)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardResetBGM_TypeDefinitionIndex = 42595;

	class ChessBoardResetBGM : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDRESETBGM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDRESETBGM_INVOKE_OFFSET))(this);
		}
	};
}
