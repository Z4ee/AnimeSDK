#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class CreateDictionary_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateDictionary_1___c_TypeDefinitionIndex = 28235;

	template <typename T>
	class CreateDictionary_1___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::Nodes::CreateDictionary_1___c<T>** StaticGet___9()
		{
			return (::FlowCanvas::Nodes::CreateDictionary_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(CreateDictionary_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::FlowCanvas::ValueInput_1<::System::String*>*, ::System::String*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::FlowCanvas::ValueInput_1<::System::String*>*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CreateDictionary_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::FlowCanvas::ValueInput_1<T>*, T>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::FlowCanvas::ValueInput_1<T>*, T>**)Il2CppClass::FromTypeDefinitionIndex(CreateDictionary_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CreateDictionary_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
