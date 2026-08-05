#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace Nap::NapECS { class EcsComponent; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentList_1_TypeDefinitionIndex = 37966;

	template <typename T>
	class EcsComponentList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _size; // 0x0
	};
}
