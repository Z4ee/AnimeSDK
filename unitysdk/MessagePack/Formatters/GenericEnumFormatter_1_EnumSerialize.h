#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericEnumFormatter_1_EnumSerialize_TypeDefinitionIndex = 7392;

	template <typename T>
	class GenericEnumFormatter_1_EnumSerialize : public ::System::MulticastDelegate
	{
	public:
	};
}
