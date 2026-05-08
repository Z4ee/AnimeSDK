#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphCustomData_Meta.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization { template <typename T> class Graph_BinarySerializer___c__7_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int Graph_BinarySerializer___c__7_1_TypeDefinitionIndex = 28210;

	template <typename T>
	class Graph_BinarySerializer___c__7_1 : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::Graph_BinarySerializer___c__7_1<T>** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::Graph_BinarySerializer___c__7_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::String*>, ::NodeCanvas::Framework::GraphCustomData_Meta>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::String*>, ::NodeCanvas::Framework::GraphCustomData_Meta>**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<::NodeCanvas::Framework::GraphCustomData_Meta>** StaticGet___9__7_1()
		{
			return (::System::Comparison_1<::NodeCanvas::Framework::GraphCustomData_Meta>**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
