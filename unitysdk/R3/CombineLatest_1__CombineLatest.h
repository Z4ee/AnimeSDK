#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class CombineLatest_1__CombineLatest_CombineLatestObserver; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_1__CombineLatest_TypeDefinitionIndex = 35908;

	template <typename T>
	class CombineLatest_1__CombineLatest : public ::System::Object
	{
	public:
		::R3::Observer_1<::Il2CppArray<T>*>* observer; // 0x0
		::Il2CppArray<::R3::Observable_1<T>*>* sources; // 0x0
		::Il2CppArray<::R3::CombineLatest_1__CombineLatest_CombineLatestObserver<T>*>* observers; // 0x0
		::System::Boolean hasValueAll; // 0x0
		::System::Int32 completedCount; // 0x0
	};
}
