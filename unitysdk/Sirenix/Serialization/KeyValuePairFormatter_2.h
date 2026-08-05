#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyValuePairFormatter_2_TypeDefinitionIndex = 7471;

	template <typename TKey, typename TValue>
	class KeyValuePairFormatter_2 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<TKey>** StaticGet_KeySerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<TKey>**)Il2CppClass::FromTypeDefinitionIndex(KeyValuePairFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<TValue>** StaticGet_ValueSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(KeyValuePairFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
