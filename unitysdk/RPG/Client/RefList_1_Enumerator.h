#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { template <typename T> class RefList_1; }
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int RefList_1_Enumerator_TypeDefinitionIndex = 33822;

	template <typename T>
	struct RefList_1_Enumerator
	{
		::RPG::Client::RefList_1<T>* list; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 version; // 0x0
		T current; // 0x0
	};
}
