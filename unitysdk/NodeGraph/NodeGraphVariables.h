#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphVariables_NodeGraphVariablesScope.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_NODEGRAPHVARIABLES_CLEAR_OFFSET UNITYSDK_OFFSET(0xD46CFB0)
#define NODEGRAPH_NODEGRAPHVARIABLES_GETVALUE_OFFSET UNITYSDK_OFFSET(0xD46CCD0)
#define NODEGRAPH_NODEGRAPHVARIABLES_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD46CE30)
#define NODEGRAPH_NODEGRAPHVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0xD46D050)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphVariables_TypeDefinitionIndex = 75687;

	class NodeGraphVariables : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeGraph::VariantUnion>* _variantMaps; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHVARIABLES__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion GetValue(::System::String* key)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHVARIABLES_GETVALUE_OFFSET))(this, key);
		}

		::System::Void SetValue(::System::String* key, ::NodeGraph::VariantUnion value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHVARIABLES_SETVALUE_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHVARIABLES_CLEAR_OFFSET))(this);
		}
	};
}
