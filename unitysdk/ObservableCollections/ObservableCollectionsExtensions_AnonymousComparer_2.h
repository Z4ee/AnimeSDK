#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionsExtensions_AnonymousComparer_2_TypeDefinitionIndex = 25610;

	template <typename T, typename TCompare>
	class ObservableCollectionsExtensions_AnonymousComparer_2 : public ::System::Object
	{
	public:
		::System::Func_2<T, TCompare>* selector; // 0x0
		::System::Int32 f; // 0x0
	};
}
