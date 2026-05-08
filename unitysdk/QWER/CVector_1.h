#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CVector_1_TypeDefinitionIndex = 8584;

	template <typename T>
	class CVector_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _Data_k__BackingField; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
