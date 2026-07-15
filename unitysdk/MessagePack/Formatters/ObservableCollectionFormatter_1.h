#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_2.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ObservableCollectionFormatter_1_TypeDefinitionIndex = 7366;

	template <typename T>
	class ObservableCollectionFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_2<T, ::System::Collections::ObjectModel::ObservableCollection_1<T>*>
	{
	public:
	};
}
