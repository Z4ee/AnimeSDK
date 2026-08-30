#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachResult_1_TypeDefinitionIndex = 42790;

	template <typename T>
	struct WhenEachResult_1
	{
		T _Result_k__BackingField; // 0x0
		::System::Exception* _Exception_k__BackingField; // 0x0
	};
}
