#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_8.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_ONQTEFINISHED_OFFSET UNITYSDK_OFFSET(0x10DFF950)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_ONQTESTARTFAILED_OFFSET UNITYSDK_OFFSET(0x10DFF8E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10DFF380)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_START_OFFSET UNITYSDK_OFFSET(0x10DFF4D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFFB00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x10DFFB40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardQTEGameNode_TypeDefinitionIndex = 72447;

	class ChessboardQTEGameNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _onFail; // 0xA8
		::FlowCanvas::FlowOutput* _onSuccess; // 0xB0
		::FlowCanvas::FlowOutput* _onStart; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* _qteKey; // 0xC0
		::FlowCanvas::FlowInput* _start; // 0xC8
		::System::Boolean _isRunning; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_START_OFFSET))(this, flow);
		}

		::System::Void OnQTEStartFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_ONQTESTARTFAILED_OFFSET))(this);
		}

		::System::Void OnQTEFinished(::Struct_2_B6A3FA7992F9F37E_8 result)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_8))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE_ONQTEFINISHED_OFFSET))(this, result);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDQTEGAMENODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}
	};
}
