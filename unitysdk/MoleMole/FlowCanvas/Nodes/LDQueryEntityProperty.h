#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDQueryEntityProperty_QueriedBaseProperty.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY_INVOKE_OFFSET UNITYSDK_OFFSET(0x15814DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15814C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15815160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x158151A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x158151B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__REGISTERPORTS_B__6_2_OFFSET UNITYSDK_OFFSET(0x158151C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDQueryEntityProperty_TypeDefinitionIndex = 59927;

	class LDQueryEntityProperty : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDQueryEntityProperty_QueriedBaseProperty>* _property; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _entity; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::System::Boolean _isValid; // 0xC0
		::System::Double _result; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY_INVOKE_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__6_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Double _RegisterPorts_b__6_1()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__REGISTERPORTS_B__6_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYENTITYPROPERTY__REGISTERPORTS_B__6_2_OFFSET))(this, f);
		}
	};
}
