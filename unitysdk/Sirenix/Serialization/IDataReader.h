#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class Stream; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int IDataReader_TypeDefinitionIndex = 7422;

	class IDataReader
	{
	public:
	};
}
