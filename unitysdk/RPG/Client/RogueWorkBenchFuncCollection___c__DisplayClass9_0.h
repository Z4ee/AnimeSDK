#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueWorkBenchFuncItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184E0A80)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION___C__DISPLAYCLASS9_0___SORTITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x184E0B90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchFuncCollection___c__DisplayClass9_0_TypeDefinitionIndex = 64344;

	class RogueWorkBenchFuncCollection___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* indexMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortItems_b__0(::RPG::Client::RogueWorkBenchFuncItem* a1, ::RPG::Client::RogueWorkBenchFuncItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueWorkBenchFuncItem*, ::RPG::Client::RogueWorkBenchFuncItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION___C__DISPLAYCLASS9_0___SORTITEMS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
