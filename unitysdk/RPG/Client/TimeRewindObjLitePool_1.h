#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindObjLitePool_1_TypeDefinitionIndex = 58122;

	template <typename T>
	class TimeRewindObjLitePool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _Items; // 0x0
		::System::Int32 _UseCount; // 0x0
	};
}
