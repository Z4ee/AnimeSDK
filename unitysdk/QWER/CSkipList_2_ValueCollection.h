#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2> class CSkipList_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CSkipList_2_ValueCollection_TypeDefinitionIndex = 8909;

	template <typename T, typename U>
	class CSkipList_2_ValueCollection : public ::System::Object
	{
	public:
		::QWER::CSkipList_2<T, U>* m_oOwner; // 0x0
	};
}
