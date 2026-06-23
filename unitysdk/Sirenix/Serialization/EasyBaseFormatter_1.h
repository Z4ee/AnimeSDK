#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EasyBaseFormatter_1_TypeDefinitionIndex = 7456;

	template <typename T>
	class EasyBaseFormatter_1 : public ::Sirenix::Serialization::BaseFormatter_1<T>
	{
	public:
	};
}
