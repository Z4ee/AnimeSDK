#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x168505D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x168505F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x168505E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x168507F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x168508B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x168508F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MonsterCreateDataList_TypeDefinitionIndex = 69046;

	class LD_MonsterCreateDataList : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>*>* values; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::System::Int32 _portCount; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST__REGISTERPORTS_B__6_0_OFFSET))(this, flow);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>* _RegisterPorts_b__6_1()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATALIST__REGISTERPORTS_B__6_1_OFFSET))(this);
		}
	};
}
