#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDBYCELL_INVOKE_OFFSET UNITYSDK_OFFSET(0x14275170)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDBYCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x14275250)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlaySoundByCell_TypeDefinitionIndex = 62795;

	class ChessboardPlaySoundByCell : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDBYCELL__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::Int32 soundConfigId, ::System::Boolean notCanInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUNDBYCELL_INVOKE_OFFSET))(this, cell, soundConfigId, notCanInterrupt);
		}
	};
}
