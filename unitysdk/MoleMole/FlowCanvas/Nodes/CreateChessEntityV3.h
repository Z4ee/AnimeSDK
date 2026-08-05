#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CREATECHESSENTITYV3_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A804B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CREATECHESSENTITYV3__CTOR_OFFSET UNITYSDK_OFFSET(0x13A80720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateChessEntityV3_TypeDefinitionIndex = 89584;

	class CreateChessEntityV3 : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_4<::MoleMole::ChessEntity*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATECHESSENTITYV3__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::Int32 templateID, ::System::Boolean skipAddManager)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATECHESSENTITYV3_INVOKE_OFFSET))(this, cell, templateID, skipAddManager);
		}
	};
}
