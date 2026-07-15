#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncByRef_2_TypeDefinitionIndex = 6887;

	template <typename T, typename TResult>
	class FuncByRef_2 : public ::System::MulticastDelegate
	{
	public:
	};
}
