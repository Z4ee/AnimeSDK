#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ReflectionFormatter_1_TypeDefinitionIndex = 7482;

	template <typename T>
	class ReflectionFormatter_1 : public ::Sirenix::Serialization::BaseFormatter_1<T>
	{
	public:
		::Sirenix::Serialization::ISerializationPolicy* _OverridePolicy_k__BackingField; // 0x0
	};
}
