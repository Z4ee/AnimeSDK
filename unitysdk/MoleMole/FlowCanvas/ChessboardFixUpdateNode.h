#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_PAUSE_OFFSET UNITYSDK_OFFSET(0x10B9B6B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10B9B430)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_RESUME_OFFSET UNITYSDK_OFFSET(0x10B9B720)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_START_OFFSET UNITYSDK_OFFSET(0x10B9B640)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10B9B790)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9BA30)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x10B9BA70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x10B9BB10)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x10B9BBA0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_3_OFFSET UNITYSDK_OFFSET(0x10B9BC30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFixUpdateNode_TypeDefinitionIndex = 80807;

	class ChessboardFixUpdateNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _fixUpdateDuration; // 0xA8
		::FlowCanvas::FlowOutput* _advance; // 0xB0
		::FlowCanvas::FlowInput* _resume; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* _fixUpdateScale; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Int32>* _FrameOutput; // 0xC8
		::FlowCanvas::FlowInput* _pause; // 0xD0
		::FlowCanvas::FlowInput* _start; // 0xD8
		::System::Int32 _Frame; // 0xE0
		::System::Boolean start; // 0xE4
		::System::Boolean pause; // 0xE5
		::System::Boolean finish; // 0xE6
		::System::Single _curTime; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_START_OFFSET))(this, flow);
		}

		::System::Void Pause(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_PAUSE_OFFSET))(this, flow);
		}

		::System::Void Resume(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_RESUME_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__0_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_3_OFFSET))(this);
		}
	};
}
