#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RANDOMMONSTERSELECTPARAM_RESET_OFFSET UNITYSDK_OFFSET(0x13ACF710)
#define MOLEMOLE_RANDOMMONSTERSELECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACF7E0)

namespace MoleMole
{
	inline static constexpr unsigned int RandomMonsterSelectParam_TypeDefinitionIndex = 65609;

	class RandomMonsterSelectParam : public ::System::Object
	{
	public:
		// static const ::System::Int32 CommonTheme = 0x0; // 0x0
		// static const ::System::Int32 UnLimitCamp = 0x0; // 0x0
		// static const ::System::Int32 UnLimitEliteStrength = 0x0; // 0x0
		// static const ::System::Int32 UnLimitWeek = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 DoubleComplexRate = 0x5; // 0x0
		::System::Int32 type; // 0x10
		::System::Int32 tag; // 0x14
		::System::Int32 selectedMonsterGroup; // 0x18
		::System::Int32 complexRate; // 0x1C
		::System::Int32 closeCombatMonsterCnt; // 0x20
		::System::Int32 remoteCombatMonsterCnt; // 0x24
		::System::Int32 specialMonsterCnt; // 0x28
		::System::Boolean enableIsotope; // 0x2C
		::System::Int32 mainTheme; // 0x30
		::System::Int32 limitTheme; // 0x34
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* exitedCamp; // 0x38
		::System::Int32 limitCamp; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Int32>* enableMonsterWeekAttribute; // 0x48
		::System::Int32 eliteStrengthLimit; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* weakAttrList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMMONSTERSELECTPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMMONSTERSELECTPARAM_RESET_OFFSET))(this);
		}
	};
}
