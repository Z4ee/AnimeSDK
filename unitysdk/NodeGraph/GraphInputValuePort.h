#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/GraphValuePort.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define NODEGRAPH_GRAPHINPUTVALUEPORT_GETVALUE_OFFSET UNITYSDK_OFFSET(0xD2631F0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_GET_PORTDIRECTION_OFFSET UNITYSDK_OFFSET(0xD2630E0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_GET_VALUEGETTER_OFFSET UNITYSDK_OFFSET(0xD2630F0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD263120)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_SET_VALUEGETTER_OFFSET UNITYSDK_OFFSET(0xD263100)
#define NODEGRAPH_GRAPHINPUTVALUEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xD263110)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphInputValuePort_TypeDefinitionIndex = 46313;

	class GraphInputValuePort : public ::NodeGraph::GraphValuePort
	{
	public:
		::System::Func_1<::Struct_2_A47ACAABA9AAFE92>* _ValueGetter_k__BackingField; // 0x20

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortDirection get_PortDirection()
		{
			return ((::NodeGraph::GraphPortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_GET_PORTDIRECTION_OFFSET))(this);
		}

		::System::Func_1<::Struct_2_A47ACAABA9AAFE92>* get_ValueGetter()
		{
			return ((::System::Func_1<::Struct_2_A47ACAABA9AAFE92>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_GET_VALUEGETTER_OFFSET))(this);
		}

		::System::Void set_ValueGetter(::System::Func_1<::Struct_2_A47ACAABA9AAFE92>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Struct_2_A47ACAABA9AAFE92>*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_SET_VALUEGETTER_OFFSET))(this, value);
		}

		::System::Void SetValue(::Struct_2_A47ACAABA9AAFE92 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_SETVALUE_OFFSET))(this, value);
		}

		::Struct_2_A47ACAABA9AAFE92 GetValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_GETVALUE_OFFSET))(this);
		}
	};
}
