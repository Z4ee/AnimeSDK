#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEDYNAMICOBJECTSETSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1498B8E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEDYNAMICOBJECTSETSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1498B9F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEDYNAMICOBJECTSETSTATE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1498BA30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeDynamicObjectSetState_TypeDefinitionIndex = 61125;

	class LDChangeDynamicObjectSetState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* inputSetNameId; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputStateIndex; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEDYNAMICOBJECTSETSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEDYNAMICOBJECTSETSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEDYNAMICOBJECTSETSTATE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
