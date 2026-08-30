#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2> class ObservableCollectionObserverBase_2___c; }
namespace System { template <typename T> class Action_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionObserverBase_2___c_TypeDefinitionIndex = 40071;

	template <typename T, typename TEvent>
	class ObservableCollectionObserverBase_2___c : public ::System::Object
	{
	public:
		static ::ObservableCollections::ObservableCollectionObserverBase_2___c<T, TEvent>** StaticGet___9()
		{
			return (::ObservableCollections::ObservableCollectionObserverBase_2___c<T, TEvent>**)Il2CppClass::FromTypeDefinitionIndex(ObservableCollectionObserverBase_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ObservableCollectionObserverBase_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
