#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SafeEventListener_1_TypeDefinitionIndex = 51237;

	template <typename T>
	class SafeEventListener_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _Listeners; // 0x0
		::System::Int32 _EventDepth; // 0x0
		::System::Int32 _RemovingIndex; // 0x0
	};
}
