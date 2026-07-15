#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T> class PooledListForClass_1; }
namespace Collections::Pooled { template <typename T> class PooledListForStruct_1; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledList_1_Enumerator_TypeDefinitionIndex = 5092;

	template <typename T>
	struct PooledList_1_Enumerator
	{
		::System::Object* _processor; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _cachedIsClass; // 0x0
		T _current; // 0x0
	};
}
