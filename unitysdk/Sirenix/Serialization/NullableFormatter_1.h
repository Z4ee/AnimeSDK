#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int NullableFormatter_1_TypeDefinitionIndex = 7479;

	template <typename T>
	class NullableFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::Nullable_1<T>>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(NullableFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
