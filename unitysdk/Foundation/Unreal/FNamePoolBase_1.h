#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/EName.h"
#include "unitysdk/Foundation/Unreal/FNameEntryAllocator.h"
#include "unitysdk/Foundation/Unreal/FNameEntryHandle.h"
#include "unitysdk/Foundation/Unreal/FNameEntryId.h"
#include "unitysdk/Foundation/Unreal/FNamePoolShard_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNamePoolBase_1_TypeDefinitionIndex = 8742;

	template <typename T>
	class FNamePoolBase_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::Unreal::FNameEntryId>* _enumToEntry; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::Unreal::EName>* _entryToEnum; // 0x0
		::System::UInt32 _largestEnumUnstableId; // 0x0
		::Foundation::Unreal::FNameEntryAllocator _allocator; // 0x0
		::Il2CppArray<::Foundation::Unreal::FNamePoolShard_1<T>>* _poolShards; // 0x0
		T _allocatorLock; // 0x0
	};
}
