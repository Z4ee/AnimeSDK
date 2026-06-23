#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Ara
{
	inline static constexpr unsigned int ElasticArray_1_TypeDefinitionIndex = 32929;

	template <typename T>
	class ElasticArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 count; // 0x0
	};
}
