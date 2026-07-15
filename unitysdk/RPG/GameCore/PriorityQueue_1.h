#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int PriorityQueue_1_TypeDefinitionIndex = 56421;

	template <typename T>
	class PriorityQueue_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, T>* _PriorityDict; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _PriorityList; // 0x0
		T _DefaultValue; // 0x0
	};
}
