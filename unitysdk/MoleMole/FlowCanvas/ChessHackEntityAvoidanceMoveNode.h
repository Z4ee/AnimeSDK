#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_CHECKNEEDAVOIDANCE_OFFSET UNITYSDK_OFFSET(0x11736100)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_HANDLEINAVOIDANCEMOVE_OFFSET UNITYSDK_OFFSET(0x11736420)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_HANDLENORMALMOVE_OFFSET UNITYSDK_OFFSET(0x11736600)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11735FC0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11736890)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackEntityAvoidanceMoveNode_TypeDefinitionIndex = 75018;

	class ChessHackEntityAvoidanceMoveNode : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::MoleMole::ChessEntityCollection*, ::MoleMole::ChessEntity*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>
	{
	public:
		::System::Random* _random; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntityCollection* a, ::MoleMole::ChessEntity* b, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* area)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntityCollection*, ::MoleMole::ChessEntity*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_INVOKE_OFFSET))(this, a, b, area);
		}

		::System::Void HandleInAvoidanceMove(::MoleMole::ChessEntity* b, ::System::Boolean needAvoidance, ::MoleMole::HollowChessboard::HollowCell pos, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* area)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_HANDLEINAVOIDANCEMOVE_OFFSET))(this, b, needAvoidance, pos, area);
		}

		::System::Void HandleNormalMove(::MoleMole::ChessEntity* b, ::System::Boolean needAvoidance, ::MoleMole::HollowChessboard::HollowCell pos, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* area)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_HANDLENORMALMOVE_OFFSET))(this, b, needAvoidance, pos, area);
		}

		::System::Boolean CheckNeedAvoidance(::MoleMole::ChessEntityCollection* chessEntityCollection, ::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessEntityCollection*, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYAVOIDANCEMOVENODE_CHECKNEEDAVOIDANCE_OFFSET))(this, chessEntityCollection, chessEntity);
		}
	};
}
