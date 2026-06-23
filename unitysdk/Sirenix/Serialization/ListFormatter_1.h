#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ListFormatter_1_TypeDefinitionIndex = 7468;

	template <typename T>
	class ListFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::Collections::Generic::List_1<T>*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ListFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
