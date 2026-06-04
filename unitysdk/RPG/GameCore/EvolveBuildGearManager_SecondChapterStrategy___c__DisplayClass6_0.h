#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7AB88D713F5121B3_40;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class EvolveBuildGearManager_SecondChapterStrategy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0_TypeDefinitionIndex = 52337;

	struct alignas(8) EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0
	{
		::Il2CppArray<::System::UInt32>* refWhitelist; // 0x10
		::RPG::PoolList_1<::System::UInt32>* pCardIDPool; // 0x18
		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>* targetList; // 0x20
		::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy* __4__this; // 0x28
		::Il2CppArray<::System::UInt32>* refBlacklist; // 0x30
		::System::UInt32 nCurPeriod; // 0x38
		::System::UInt32 nMaxCardCount; // 0x3C
		::System::UInt32 nReRollCount; // 0x40
	};
}
