#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_197.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace RPG::Client::Textmap::Parameter
{
	inline static constexpr unsigned int IndexedParameterContextGenericArray_1_TypeDefinitionIndex = 73279;

	template <typename T>
	class IndexedParameterContextGenericArray_1 : public ::Class_1_43BD383C98B4C0C5_197
	{
	public:
		::Il2CppArray<T>* _Parameters; // 0x0
	};
}
