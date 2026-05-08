#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortType.h"
#include "unitysdk/NodeGraph/IGraphPort.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHVALUEPORT_GET_PORTTYPE_OFFSET UNITYSDK_OFFSET(0xBDFBCD0)
#define NODEGRAPH_GRAPHVALUEPORT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDFBCF0)
#define NODEGRAPH_GRAPHVALUEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFBCE0)
#define NODEGRAPH_GRAPHVALUEPORT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDFBDE0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphValuePort_TypeDefinitionIndex = 54532;

	class GraphValuePort : public ::NodeGraph::IGraphPort
	{
	public:
		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUEPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortType get_PortType()
		{
			return ((::NodeGraph::GraphPortType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUEPORT_GET_PORTTYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUEPORT_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUEPORT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
