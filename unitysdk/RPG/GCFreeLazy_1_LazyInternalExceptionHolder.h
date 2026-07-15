#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace RPG
{
	inline static constexpr unsigned int GCFreeLazy_1_LazyInternalExceptionHolder_TypeDefinitionIndex = 6748;

	template <typename T>
	class GCFreeLazy_1_LazyInternalExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi; // 0x0
	};
}
