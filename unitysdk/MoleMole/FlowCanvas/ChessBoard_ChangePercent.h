#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x11604180)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT__CTOR_OFFSET UNITYSDK_OFFSET(0x11604270)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_ChangePercent_TypeDefinitionIndex = 64736;

	class ChessBoard_ChangePercent : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_CHANGEPERCENT_INVOKE_OFFSET))(this, percent);
		}
	};
}
