#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyObservableCollection_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ReadOnlyObservableCollectionFormatter_1_TypeDefinitionIndex = 7367;

	template <typename T>
	class ReadOnlyObservableCollectionFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::System::Collections::ObjectModel::ObservableCollection_1<T>*, ::System::Collections::ObjectModel::ReadOnlyObservableCollection_1<T>*>
	{
	public:
	};
}
