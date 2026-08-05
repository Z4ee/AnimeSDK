#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2> class ObservableHashSet_1_View_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableHashSet_1_View_1___c_TypeDefinitionIndex = 28789;

	template <typename T, typename TView>
	class ObservableHashSet_1_View_1___c : public ::System::Object
	{
	public:
		static ::ObservableCollections::ObservableHashSet_1_View_1___c<T, TView>** StaticGet___9()
		{
			return (::ObservableCollections::ObservableHashSet_1_View_1___c<T, TView>**)Il2CppClass::FromTypeDefinitionIndex(ObservableHashSet_1_View_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, T>** StaticGet___9__15_0()
		{
			return (::System::Func_2<T, T>**)Il2CppClass::FromTypeDefinitionIndex(ObservableHashSet_1_View_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
