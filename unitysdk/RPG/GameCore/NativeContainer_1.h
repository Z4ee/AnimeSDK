#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_1.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int NativeContainer_1_TypeDefinitionIndex = 10517;

	template <typename T>
	class NativeContainer_1 : public ::Class_1_83665B095F1535B5_1
	{
	public:
		::Il2CppArray<T>* _ManagedArray; // 0x0
		::Unity::Collections::NativeArray_1<T> _NativeArray; // 0x0
	};
}
