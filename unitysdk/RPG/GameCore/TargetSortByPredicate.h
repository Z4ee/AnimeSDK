#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_7458ED9591F1A647_OFFSET UNITYSDK_OFFSET(0x18EF9710)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_89BA15031B47B4AB_OFFSET UNITYSDK_OFFSET(0x18EF8150)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF8130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPredicate_TypeDefinitionIndex = 22972;

	class TargetSortByPredicate : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::System::Boolean InverseSort; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7458ED9591F1A647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_7458ED9591F1A647_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89BA15031B47B4AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_89BA15031B47B4AB_OFFSET))(a1, a2);
		}
	};
}
