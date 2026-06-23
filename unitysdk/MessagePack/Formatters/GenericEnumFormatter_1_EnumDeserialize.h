#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericEnumFormatter_1_EnumDeserialize_TypeDefinitionIndex = 30063;

	template <typename T>
	class GenericEnumFormatter_1_EnumDeserialize : public ::System::MulticastDelegate
	{
	public:
	};
}
