#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_METHOD_3_38D9B5D70352A8CB_OFFSET UNITYSDK_OFFSET(0x1CFBFC00)
#define RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_METHOD_3_AE95796245A51261_OFFSET UNITYSDK_OFFSET(0x1CFBFBA0)
#define RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAttributeComparePredicate_TypeDefinitionIndex = 15803;

	class ChimeraDuelAttributeComparePredicate : public ::RPG::GameCore::ChimeraDuelPredicateBase
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Target; // 0x10
		::RPG::GameCore::ChimeraDuelEntityPredicateBase* ComparePredicate; // 0x18
		::System::Boolean AllMatch; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE95796245A51261(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_METHOD_3_AE95796245A51261_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38D9B5D70352A8CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_METHOD_3_38D9B5D70352A8CB_OFFSET))(a1, a2);
		}
	};
}
