#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCacheDataList_1_TypeDefinitionIndex = 61141;

	template <typename T>
	class TrainPartyCacheDataList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _DataList; // 0x0
		::System::Collections::Generic::Queue_1<T>* _ReuseCache; // 0x0
		::System::Int32 _MaxCacheCount; // 0x0
	};
}
