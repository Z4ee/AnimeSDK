#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessHackEntityMoveNode_MoveInfoEntry.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"
#include "unitysdk/Share/GridDir.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_CONVERTGRIDDIRTODIR_OFFSET UNITYSDK_OFFSET(0x13A7D1C0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_GETPREDICTIONCELL_OFFSET UNITYSDK_OFFSET(0x13A7D0A0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_MOVEHACKENTITY_OFFSET UNITYSDK_OFFSET(0x13A7C9A0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A7C500)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_SOLVECOLLISION_OFFSET UNITYSDK_OFFSET(0x13A7D630)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_START_OFFSET UNITYSDK_OFFSET(0x13A7C6D0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_STEPMOVE_OFFSET UNITYSDK_OFFSET(0x13A7D290)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7E8A0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x13A7E9B0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x13A7E9E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackEntityMoveNode_TypeDefinitionIndex = 82867;

	class ChessHackEntityMoveNode : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _mainEntity; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* _collection; // 0xB8
		::FlowCanvas::FlowInput* _in; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Boolean>* _result; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::FlowCanvas::ChessHackEntityMoveNode_MoveInfoEntry>* _moveInfoEntries; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* _boundList; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* _moveSound; // 0xE0
		::FlowCanvas::ValueInput_1<::Share::GridDir>* _dir; // 0xE8
		::System::Boolean cacheSuccess; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_START_OFFSET))(this, flow);
		}

		::System::Boolean MoveHackEntity(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* boundListValue, ::Share::GridDir dirValue, ::MoleMole::ChessEntityCollection* collectionValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::GridDir, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_MOVEHACKENTITY_OFFSET))(this, boundListValue, dirValue, collectionValue);
		}

		static ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir ConvertGridDirToDir(::Share::GridDir gridDir)
		{
			return ((::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir(*)(::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_CONVERTGRIDDIRTODIR_OFFSET))(gridDir);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::FlowCanvas::ChessHackEntityMoveNode_MoveInfoEntry>* StepMove(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* boundListValue, ::Share::GridDir dirValue, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* allChess)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::FlowCanvas::ChessHackEntityMoveNode_MoveInfoEntry>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::GridDir, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_STEPMOVE_OFFSET))(this, boundListValue, dirValue, allChess);
		}

		::System::Void SolveCollision(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::FlowCanvas::ChessHackEntityMoveNode_MoveInfoEntry>* moveInfoEntries)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::FlowCanvas::ChessHackEntityMoveNode_MoveInfoEntry>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_SOLVECOLLISION_OFFSET))(this, moveInfoEntries);
		}

		static ::MoleMole::HollowChessboard::HollowCell GetPredictionCell(::MoleMole::HollowChessboard::HollowCell prePosition, ::Share::GridDir dirValue)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE_GETPREDICTIONCELL_OFFSET))(prePosition, dirValue);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__9_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKENTITYMOVENODE__REGISTERPORTS_B__9_1_OFFSET))(this);
		}
	};
}
