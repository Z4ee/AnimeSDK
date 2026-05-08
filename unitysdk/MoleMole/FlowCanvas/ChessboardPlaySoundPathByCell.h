#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDPATHBYCELL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1840FE40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDPATHBYCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1840FF20)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlaySoundPathByCell_TypeDefinitionIndex = 61566;

	class ChessboardPlaySoundPathByCell : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDPATHBYCELL__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::String* soundConfigId, ::System::Boolean notCanInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDPATHBYCELL_INVOKE_OFFSET))(this, cell, soundConfigId, notCanInterrupt);
		}
	};
}
