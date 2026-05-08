#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/SynchronizedViewChangedEventArgs_2.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int SynchronizedViewFilter_2_TypeDefinitionIndex = 25629;

	template <typename T, typename TView>
	class SynchronizedViewFilter_2 : public ::System::Object
	{
	public:
		::System::Func_3<T, TView, ::System::Boolean>* isMatch; // 0x0
		::System::Action_2<T, TView>* whenTrue; // 0x0
		::System::Action_2<T, TView>* whenFalse; // 0x0
		::System::Action_1<::ObservableCollections::SynchronizedViewChangedEventArgs_2<T, TView>>* onCollectionChanged; // 0x0
		static ::ObservableCollections::ISynchronizedViewFilter_2<T, TView>** StaticGet_Null()
		{
			return (::ObservableCollections::ISynchronizedViewFilter_2<T, TView>**)Il2CppClass::FromTypeDefinitionIndex(SynchronizedViewFilter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
