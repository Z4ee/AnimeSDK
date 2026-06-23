#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseFormatter_1_SerializationCallback_TypeDefinitionIndex = 7447;

	template <typename T>
	class BaseFormatter_1_SerializationCallback : public ::System::MulticastDelegate
	{
	public:
	};
}
