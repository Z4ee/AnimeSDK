#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_438;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F57C0)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__DISPLAYCLASS3_0__SORTMONSTERCARD_B__1_OFFSET UNITYSDK_OFFSET(0x162F57D0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int MonsterCardUtils___c__DisplayClass3_0_TypeDefinitionIndex = 61711;

	class MonsterCardUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::Class_1_5DA2E7556103D5A3_438*>* getMonsterGroupByCardFunc; // 0x10
		::System::Comparison_1<::System::Int32>* __9__1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortMonsterCard_b__1(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__DISPLAYCLASS3_0__SORTMONSTERCARD_B__1_OFFSET))(this, a, b);
		}
	};
}
