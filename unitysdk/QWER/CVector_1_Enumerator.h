#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T> class CVector_1; }

namespace QWER
{
	inline static constexpr unsigned int CVector_1_Enumerator_TypeDefinitionIndex = 8824;

	template <typename T>
	class CVector_1_Enumerator : public ::System::Object
	{
	public:
		::QWER::CVector_1<T>* m_oVector; // 0x0
		::System::Int32 m_dwIndex; // 0x0
	};
}
