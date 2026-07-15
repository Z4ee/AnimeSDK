#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class DelayList_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DelayList_1__OnEnumItems_d__14_TypeDefinitionIndex = 56975;

	template <typename T>
	class DelayList_1__OnEnumItems_d__14 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::RPG::Client::DelayList_1<T>* __4__this; // 0x0
		::System::Collections::Generic::List_1_Enumerator<T> __7__wrap1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap2; // 0x0
	};
}
