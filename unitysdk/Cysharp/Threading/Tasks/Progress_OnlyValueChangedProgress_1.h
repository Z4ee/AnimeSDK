#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Progress_OnlyValueChangedProgress_1_TypeDefinitionIndex = 42633;

	template <typename T>
	class Progress_OnlyValueChangedProgress_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* action; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
		::System::Boolean isFirstCall; // 0x0
		T latestValue; // 0x0
	};
}
