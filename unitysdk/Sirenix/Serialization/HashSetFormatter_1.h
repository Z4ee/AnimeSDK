#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int HashSetFormatter_1_TypeDefinitionIndex = 7468;

	template <typename T>
	class HashSetFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::Collections::Generic::HashSet_1<T>*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(HashSetFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
