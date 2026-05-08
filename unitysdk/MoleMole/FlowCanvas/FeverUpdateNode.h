#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x10DFFE30)
#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10DFFC90)
#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE_START_OFFSET UNITYSDK_OFFSET(0x10DFFF20)
#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E00010)
#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x10E00050)
#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x10E00160)
#define MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x10E00190)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int FeverUpdateNode_TypeDefinitionIndex = 69175;

	class FeverUpdateNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* Frame; // 0xA8
		::FlowCanvas::FlowOutput* _update; // 0xB0
		::FlowCanvas::FlowOutput* _finish; // 0xB8
		::FlowCanvas::FlowInput* _advance; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* feverFrame; // 0xC8
		::FlowCanvas::FlowInput* _start; // 0xD0
		::System::Int32 _curFrameCount; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Advance(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE_ADVANCE_OFFSET))(this, flow);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__0_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FEVERUPDATENODE__REGISTERPORTS_B__0_2_OFFSET))(this);
		}
	};
}
