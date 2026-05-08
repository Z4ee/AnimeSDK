#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10B9C0B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY_START_OFFSET UNITYSDK_OFFSET(0x10B9C1C0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9C7E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x10B9C820)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSetHeightNodeInEntity_TypeDefinitionIndex = 61118;

	class ChessboardSetHeightNodeInEntity : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* targetCell; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntity*>* entity; // 0xB8
		::FlowCanvas::FlowInput* input; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETHEIGHTNODEINENTITY__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
