#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Share { template <typename T> class CPropertyOperator_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Share
{
	inline static constexpr unsigned int CPropertyOperator_1_Enumerator_TypeDefinitionIndex = 10805;

	template <typename T>
	class CPropertyOperator_1_Enumerator : public ::System::Object
	{
	public:
		::System::Boolean m_bIsPersistence; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt16, ::System::Int32>>* m_oEnumerator; // 0x0
		::Share::CPropertyOperator_1<T>* m_oOwner; // 0x0
	};
}
