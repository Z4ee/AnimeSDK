#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class S2TreasureCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x184136B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x184136D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x184136C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x184138D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x184139A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x18413BB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2TreasureCreateDataList_TypeDefinitionIndex = 39477;

	class LDAbyssS2TreasureCreateDataList : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData*>*>* values; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::System::Int32 _portCount; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData*>* _RegisterPorts_b__6_0()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATALIST__REGISTERPORTS_B__6_1_OFFSET))(this, flow);
		}
	};
}
