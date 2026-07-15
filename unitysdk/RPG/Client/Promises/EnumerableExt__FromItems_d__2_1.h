#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int EnumerableExt__FromItems_d__2_1_TypeDefinitionIndex = 9534;

	template <typename T>
	class EnumerableExt__FromItems_d__2_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::Il2CppArray<T>* items; // 0x0
		::Il2CppArray<T>* __3__items; // 0x0
		::Il2CppArray<T>* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
	};
}
