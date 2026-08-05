#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SelfFormatterFormatter_1_TypeDefinitionIndex = 7488;

	template <typename T>
	class SelfFormatterFormatter_1 : public ::Sirenix::Serialization::BaseFormatter_1<T>
	{
	public:
	};
}
