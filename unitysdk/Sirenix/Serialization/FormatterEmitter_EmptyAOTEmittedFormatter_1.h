#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/Sirenix/Serialization/FormatterEmitter_AOTEmittedFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterEmitter_EmptyAOTEmittedFormatter_1_TypeDefinitionIndex = 7461;

	template <typename T>
	class FormatterEmitter_EmptyAOTEmittedFormatter_1 : public ::Sirenix::Serialization::FormatterEmitter_AOTEmittedFormatter_1<T>
	{
	public:
	};
}
