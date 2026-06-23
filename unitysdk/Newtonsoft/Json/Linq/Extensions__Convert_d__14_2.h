#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions__Convert_d__14_2_TypeDefinitionIndex = 7166;

	template <typename T, typename U>
	class Extensions__Convert_d__14_2 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		U __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__source; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
	};
}
