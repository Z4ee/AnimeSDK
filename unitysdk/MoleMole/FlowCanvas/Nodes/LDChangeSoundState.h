#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE_BEGIN_OFFSET UNITYSDK_OFFSET(0x17801420)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17801300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17801960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x178019A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeSoundState_TypeDefinitionIndex = 61955;

	class LDChangeSoundState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* State; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* Group; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGESOUNDSTATE__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
