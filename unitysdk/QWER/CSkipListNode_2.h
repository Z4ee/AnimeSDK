#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2> class CSkipListLevel_2; }
namespace QWER { template <typename T1, typename T2> class CSkipListNode_2; }
namespace QWER { template <typename T1, typename T2> class CSkipList_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipListNode_2_TypeDefinitionIndex = 8816;

	template <typename T, typename U>
	class CSkipListNode_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::QWER::CSkipListLevel_2<T, U>*>* _Elements_k__BackingField; // 0x0
		::QWER::CSkipList_2<T, U>* _Owner_k__BackingField; // 0x0
		T _Key_k__BackingField; // 0x0
		U _Value_k__BackingField; // 0x0
	};
}
