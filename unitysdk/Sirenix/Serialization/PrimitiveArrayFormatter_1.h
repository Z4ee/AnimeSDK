#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int PrimitiveArrayFormatter_1_TypeDefinitionIndex = 7480;

	template <typename T>
	class PrimitiveArrayFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::Il2CppArray<T>*>
	{
	public:
	};
}
