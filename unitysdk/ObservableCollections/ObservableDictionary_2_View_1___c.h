#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2, typename T3> class ObservableDictionary_2_View_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_View_1___c_TypeDefinitionIndex = 28164;

	template <typename TKey, typename TValue, typename TView>
	class ObservableDictionary_2_View_1___c : public ::System::Object
	{
	public:
		static ::ObservableCollections::ObservableDictionary_2_View_1___c<TKey, TValue, TView>** StaticGet___9()
		{
			return (::ObservableCollections::ObservableDictionary_2_View_1___c<TKey, TValue, TView>**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_View_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_View_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
