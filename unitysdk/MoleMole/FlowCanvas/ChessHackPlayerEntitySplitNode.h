#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_821BF6236DB9DEE1;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_CHANGESPLITSTATE_OFFSET UNITYSDK_OFFSET(0x19239740)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19239430)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_START_OFFSET UNITYSDK_OFFSET(0x192395D0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_TRYCREATEENTITY_OFFSET UNITYSDK_OFFSET(0x1923A140)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1923A4C0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1923A500)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackPlayerEntitySplitNode_TypeDefinitionIndex = 63038;

	class ChessHackPlayerEntitySplitNode : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::FlowInput* _in; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _count; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* _mainPlayer; // 0xB8
		::FlowCanvas::ValueOutput_1<::System::Boolean>* _result; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* _boundList; // 0xC8
		::FlowCanvas::FlowOutput* _out; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _do; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* _collection; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* _fakePlayerId; // 0xE8
		::System::Boolean _isInSplitState; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_START_OFFSET))(this, flow);
		}

		::System::Void ChangeSplitState(::System::Boolean isInSplitState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_CHANGESPLITSTATE_OFFSET))(this, isInSplitState);
		}

		::MoleMole::ChessEntity* TryCreateEntity(::System::Int32 id, ::Class_1_821BF6236DB9DEE1* hackGameDamageable, ::MoleMole::HollowChessboard::HollowCell upPos)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::Int32, ::Class_1_821BF6236DB9DEE1*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE_TRYCREATEENTITY_OFFSET))(this, id, hackGameDamageable, upPos);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKPLAYERENTITYSPLITNODE__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}
	};
}
