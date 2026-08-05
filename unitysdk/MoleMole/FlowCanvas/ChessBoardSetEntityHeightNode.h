#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Share/GridDir.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A7B100)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE_START_OFFSET UNITYSDK_OFFSET(0x13A7B220)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7C150)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x13A7C210)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSetEntityHeightNode_TypeDefinitionIndex = 54755;

	class ChessBoardSetEntityHeightNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* tmpCells; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* nextCells; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntity*>* entity; // 0xC8
		::FlowCanvas::ValueInput_1<::Share::GridDir>* targetDir; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETENTITYHEIGHTNODE__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
