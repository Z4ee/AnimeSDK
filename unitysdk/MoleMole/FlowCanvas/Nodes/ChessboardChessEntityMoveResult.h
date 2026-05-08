#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/Share/GridDir.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVERESULT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E04400)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x10E04550)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVERESULT__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x10E04590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityMoveResult_TypeDefinitionIndex = 46263;

	class ChessboardChessEntityMoveResult : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* failure; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntity*>* chessEntity; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::FlowOutput* success; // 0xC0
		::FlowCanvas::FlowInput* input; // 0xC8
		::FlowCanvas::ValueInput_1<::Share::GridDir>* dir; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVERESULT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVERESULT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYMOVERESULT__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
