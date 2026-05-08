#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"
#include "unitysdk/Share/GridDir.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E3F7E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3F910)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardInputAction_TypeDefinitionIndex = 63793;

	class ChessboardInputAction : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::Share::GridDir>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::Share::GridDir MoveDir)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTACTION_INVOKE_OFFSET))(this, MoveDir);
		}
	};
}
