#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { template <typename T> class LockableList_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockableList_1__GetEnumerator_d__15_TypeDefinitionIndex = 51236;

	template <typename T>
	class LockableList_1__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::RPG::GameCore::LockableList_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
