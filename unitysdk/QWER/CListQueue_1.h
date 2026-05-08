#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T> class CListQueue_1; }

namespace QWER
{
	inline static constexpr unsigned int CListQueue_1_TypeDefinitionIndex = 8570;

	template <typename T>
	class CListQueue_1 : public ::System::Object
	{
	public:
		::System::Int32 m_dwBegin; // 0x0
		::Il2CppArray<T>* m_aData; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
