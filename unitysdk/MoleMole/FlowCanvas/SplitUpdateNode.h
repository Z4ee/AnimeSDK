#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x117522E0)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x117520D0)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_START_OFFSET UNITYSDK_OFFSET(0x117525D0)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_STOP_OFFSET UNITYSDK_OFFSET(0x11752700)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11752830)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x11752870)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x117528A0)
#define MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x117528D0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int SplitUpdateNode_TypeDefinitionIndex = 51345;

	class SplitUpdateNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _delayedFrames; // 0xA8
		::FlowCanvas::FlowOutput* _startOutput; // 0xB0
		::FlowCanvas::FlowOutput* _delayedFinish; // 0xB8
		::FlowCanvas::FlowInput* _start; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* _feverEnergy; // 0xC8
		::FlowCanvas::FlowInput* _advance; // 0xD0
		::FlowCanvas::FlowOutput* _update; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* _updateInterval; // 0xE0
		::FlowCanvas::FlowOutput* _finish; // 0xE8
		::FlowCanvas::FlowInput* _stop; // 0xF0
		::System::Int32 _delayedFrameCount; // 0xF8
		::System::Int32 _curFrameCount; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Advance(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_ADVANCE_OFFSET))(this, flow);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_START_OFFSET))(this, flow);
		}

		::System::Void Stop(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE_STOP_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SPLITUPDATENODE__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}
	};
}
