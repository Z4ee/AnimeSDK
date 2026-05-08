#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int LeakDetector_1_TypeDefinitionIndex = 8330;

	template <typename T>
	class LeakDetector_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::WeakReference_1<T>*>* _trackedObjects; // 0x0
		::System::Int32 _TrackCount_k__BackingField; // 0x0
		::System::Int32 _UntrackCount_k__BackingField; // 0x0
		::System::Collections::Generic::List_1<::System::WeakReference_1<T>*>* _objCache; // 0x0
	};
}
