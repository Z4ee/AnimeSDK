#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/GraphValuePort.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class Action; }
namespace System { class String; }

#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_GETVALUE_OFFSET UNITYSDK_OFFSET(0xFB5DAC0)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_BEFOREGETVALUE_OFFSET UNITYSDK_OFFSET(0xFB5DA90)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_PORTDIRECTION_OFFSET UNITYSDK_OFFSET(0xFB5DA80)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_SETVALUE_OFFSET UNITYSDK_OFFSET(0xFB5DA00)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_SET_BEFOREGETVALUE_OFFSET UNITYSDK_OFFSET(0xFB5DAA0)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB5DAB0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphOutputValuePort_TypeDefinitionIndex = 52180;

	class GraphOutputValuePort : public ::NodeGraph::GraphValuePort
	{
	public:
		::System::Action* _BeforeGetValue_k__BackingField; // 0x20
		::Struct_2_A47ACAABA9AAFE92 _value; // 0x28

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortDirection get_PortDirection()
		{
			return ((::NodeGraph::GraphPortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_PORTDIRECTION_OFFSET))(this);
		}

		::System::Action* get_BeforeGetValue()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_BEFOREGETVALUE_OFFSET))(this);
		}

		::System::Void set_BeforeGetValue(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_SET_BEFOREGETVALUE_OFFSET))(this, value);
		}

		::System::Void SetValue(::Struct_2_A47ACAABA9AAFE92 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_SETVALUE_OFFSET))(this, value);
		}

		::Struct_2_A47ACAABA9AAFE92 GetValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_GETVALUE_OFFSET))(this);
		}
	};
}
