#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Share { template <typename T> class CWeightListNode_1; }
namespace Share { template <typename T> class CWeightList_1; }

namespace Share
{
	inline static constexpr unsigned int CWeightList_1_Enumerator_TypeDefinitionIndex = 10402;

	template <typename T>
	class CWeightList_1_Enumerator : public ::System::Object
	{
	public:
		::Share::CWeightListNode_1<T>* m_oNode; // 0x0
		::Share::CWeightList_1<T>* m_oOwner; // 0x0
	};
}
