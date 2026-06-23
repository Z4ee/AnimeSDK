#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroupV2_StateGroupKeyValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A39BA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A39B9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39BD80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetInLevelStateGroupV2_TypeDefinitionIndex = 83783;

	class LDSetInLevelStateGroupV2 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroupV2_StateGroupKeyValue*>*>* StateGroupSettings; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2_BEGIN_OFFSET))(this, f);
		}
	};
}
