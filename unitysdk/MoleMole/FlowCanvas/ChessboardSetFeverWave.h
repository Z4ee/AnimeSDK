#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x126073C0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE_START_OFFSET UNITYSDK_OFFSET(0x12607510)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12607A80)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x12607AC0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSetFeverWave_TypeDefinitionIndex = 52322;

	class ChessboardSetFeverWave : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* targetValue; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* targetCell; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8
		::FlowCanvas::ValueInput_1<::UnityEngine::AnimationCurve*>* curve; // 0xC0
		::FlowCanvas::FlowOutput* output; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* duration; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
