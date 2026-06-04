#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/ObservableCollection_1.h"

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableList_1_TypeDefinitionIndex = 40640;

	template <typename T>
	class ObservableList_1 : public ::System::Collections::ObjectModel::ObservableCollection_1<T>
	{
	public:
	};
}
