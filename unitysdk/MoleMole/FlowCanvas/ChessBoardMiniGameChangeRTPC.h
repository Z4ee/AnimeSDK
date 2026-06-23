#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E665D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17E66810)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardMiniGameChangeRTPC_TypeDefinitionIndex = 51587;

	class ChessBoardMiniGameChangeRTPC : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::String*, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMINIGAMECHANGERTPC_INVOKE_OFFSET))(this, name, value);
		}
	};
}
