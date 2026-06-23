#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class CreateCollection_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateCollection_1___c_TypeDefinitionIndex = 30901;

	template <typename T>
	class CreateCollection_1___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::Nodes::CreateCollection_1___c<T>** StaticGet___9()
		{
			return (::FlowCanvas::Nodes::CreateCollection_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(CreateCollection_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::FlowCanvas::ValueInput_1<T>*, T>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::FlowCanvas::ValueInput_1<T>*, T>**)Il2CppClass::FromTypeDefinitionIndex(CreateCollection_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
