#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_METHOD_3_0CCC44469E3CFBAB_OFFSET UNITYSDK_OFFSET(0x1CFCBA20)
#define RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_METHOD_3_9989082FD5FF9B43_OFFSET UNITYSDK_OFFSET(0x1CFD07D0)
#define RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCBA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelValueComparePredicate_TypeDefinitionIndex = 15802;

	class ChimeraDuelValueComparePredicate : public ::RPG::GameCore::ChimeraDuelPredicateBase
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* Left; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* Right; // 0x18
		::RPG::GameCore::ChimeraDuelCompareType CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9989082FD5FF9B43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelValueComparePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelValueComparePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_METHOD_3_9989082FD5FF9B43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CCC44469E3CFBAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelValueComparePredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelValueComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_METHOD_3_0CCC44469E3CFBAB_OFFSET))(a1, a2);
		}
	};
}
