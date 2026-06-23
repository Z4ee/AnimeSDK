#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/EasyBaseFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EmptyTypeFormatter_1_TypeDefinitionIndex = 7458;

	template <typename T>
	class EmptyTypeFormatter_1 : public ::Sirenix::Serialization::EasyBaseFormatter_1<T>
	{
	public:
	};
}
