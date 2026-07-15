#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ReadOnlyCollectionFormatter_1_TypeDefinitionIndex = 7352;

	template <typename T>
	class ReadOnlyCollectionFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>
	{
	public:
	};
}
