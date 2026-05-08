#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { template <typename T> class CWeightListLevel_1; }
namespace Share { template <typename T> class CWeightListNode_1; }
namespace Share { template <typename T> class CWeightList_1; }

namespace Share
{
	inline static constexpr unsigned int CWeightListNode_1_TypeDefinitionIndex = 12744;

	template <typename T>
	class CWeightListNode_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Share::CWeightListLevel_1<T>*>* _Elements_k__BackingField; // 0x0
		::Share::CWeightList_1<T>* _Owner_k__BackingField; // 0x0
		::System::Int32 _Weight_k__BackingField; // 0x0
		T _Value_k__BackingField; // 0x0
	};
}
