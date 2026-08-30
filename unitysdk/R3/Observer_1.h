#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/R3/SingleAssignmentDisposableCore.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int Observer_1_TypeDefinitionIndex = 35241;

	template <typename T>
	class Observer_1 : public ::System::Object
	{
	public:
		::R3::SingleAssignmentDisposableCore SourceSubscription; // 0x0
		::System::Int32 calledOnCompleted; // 0x0
		::System::Int32 disposed; // 0x0
	};
}
