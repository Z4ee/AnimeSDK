#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { template <typename T> class Coroutine_1; }
namespace System::Collections { class IEnumerator; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Coroutine_1__InternalRoutine_d__6_TypeDefinitionIndex = 36095;

	template <typename T>
	class Coroutine_1__InternalRoutine_d__6 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::System::Collections::IEnumerator* coroutine; // 0x0
		::RPG::CustomRP::Coroutine_1<T>* __4__this; // 0x0
	};
}
