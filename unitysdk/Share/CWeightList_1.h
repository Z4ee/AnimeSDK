#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Share { class CRandom; }
namespace Share { template <typename T> class CWeightListNode_1; }
namespace Share { template <typename T> class CWeightList_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Share
{
	inline static constexpr unsigned int CWeightList_1_TypeDefinitionIndex = 16472;

	template <typename T>
	class CWeightList_1 : public ::System::Object
	{
	public:
		::Share::CWeightListNode_1<T>* m_oHeader; // 0x0
		::Share::CWeightListNode_1<T>* m_oTail; // 0x0
		::System::Int32 m_dwHeight; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		::System::Int32 _Total_k__BackingField; // 0x0
	};
}
