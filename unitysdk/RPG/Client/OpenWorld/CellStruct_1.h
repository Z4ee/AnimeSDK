#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_1187;
class Class_1_3F28033F34305C46;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int CellStruct_1_TypeDefinitionIndex = 73781;

	template <typename T>
	class CellStruct_1 : public ::System::Object
	{
	public:
		::System::Single _ItemSubCellSize; // 0x0
		::System::Single _ViewSize; // 0x0
		::System::Single _CellSize; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::HashSet_1<T>*>* _CellItems; // 0x0
		::System::Collections::Generic::HashSet_1<T>* _HasVisited; // 0x0
	};
}
