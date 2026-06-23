#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NodeGraph/GraphJsonUtil___c__DisplayClass3_0_1.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace NodeGraph { class GraphTask; }
namespace NodeGraph { class NodeGraphNormal; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_GRAPHJSONUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xE03C180)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphJsonUtil_TypeDefinitionIndex = 41823;

	class GraphJsonUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::NodeGraph::NodeGraphNormal*, ::NodeGraph::GraphTask*>*>** StaticGet__registerTaskFunc()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::NodeGraph::NodeGraphNormal*, ::NodeGraph::GraphTask*>*>**)Il2CppClass::FromTypeDefinitionIndex(GraphJsonUtil_TypeDefinitionIndex)->GetStaticField(0x4A330);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::NodeGraph::NodeGraphNormal*, ::NodeGraph::GraphNodeBase*>*>** StaticGet__registerNodeFunc()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::NodeGraph::NodeGraphNormal*, ::NodeGraph::GraphNodeBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(GraphJsonUtil_TypeDefinitionIndex)->GetStaticField(0x4A338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL__CCTOR_OFFSET))();
		}
	};
}
