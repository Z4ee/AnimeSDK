#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GenericCollectionFormatter_2_TypeDefinitionIndex = 7463;

	template <typename TCollection, typename TElement>
	class GenericCollectionFormatter_2 : public ::Sirenix::Serialization::BaseFormatter_1<TCollection>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<TElement>** StaticGet_valueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TElement>**)Il2CppClass::FromTypeDefinitionIndex(GenericCollectionFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
