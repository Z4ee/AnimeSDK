#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149A2520)
#define MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY_START_OFFSET UNITYSDK_OFFSET(0x149A26C0)
#define MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x149A2B00)
#define MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x149A2B40)
#define MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x149A2B50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int QueryEntity_TypeDefinitionIndex = 77154;

	class QueryEntity : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::MoleMole::EntityHandle entity; // 0xB0
		::FlowCanvas::FlowOutput* _doOuptut; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Int32>* countOutput; // 0xC8
		::FlowCanvas::FlowInput* _input; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::GameplayTag>* tagInput; // 0xD8
		::FlowCanvas::ValueOutput_1<::MoleMole::EntityHandle>* entityOutput; // 0xE0
		::System::Int32 count; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY_START_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__8_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::MoleMole::EntityHandle _RegisterPorts_b__8_1()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_QUERYENTITY__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
