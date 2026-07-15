#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingTipsRandomPool_1_TypeDefinitionIndex = 62843;

	template <typename T>
	class LoadingTipsRandomPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, ::System::UInt32>* _Items; // 0x0
		::System::UInt32 _WeightSum; // 0x0
	};
}
