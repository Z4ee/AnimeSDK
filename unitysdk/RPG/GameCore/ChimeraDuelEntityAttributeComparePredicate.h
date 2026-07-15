#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_METHOD_3_0B446E0EADED9385_OFFSET UNITYSDK_OFFSET(0x1C395550)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_METHOD_3_D246B0EE5F629E13_OFFSET UNITYSDK_OFFSET(0x1C3955B0)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3955A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityAttributeComparePredicate_TypeDefinitionIndex = 15316;

	class ChimeraDuelEntityAttributeComparePredicate : public ::RPG::GameCore::ChimeraDuelEntityPredicateBase
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Left; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* Right; // 0x18
		::RPG::GameCore::ChimeraDuelCompareType CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B446E0EADED9385(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_METHOD_3_0B446E0EADED9385_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D246B0EE5F629E13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_METHOD_3_D246B0EE5F629E13_OFFSET))(a1, a2);
		}
	};
}
