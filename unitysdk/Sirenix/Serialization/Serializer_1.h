#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class Object; }
namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Serializer_1_TypeDefinitionIndex = 7555;

	template <typename T>
	class Serializer_1 : public ::Sirenix::Serialization::Serializer
	{
	public:
	};
}
