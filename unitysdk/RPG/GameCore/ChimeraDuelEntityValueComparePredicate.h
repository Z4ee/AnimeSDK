#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }

#define RPG_GAMECORE_CHIMERADUELENTITYVALUECOMPAREPREDICATE_METHOD_3_3EC62A219214FA3E_OFFSET UNITYSDK_OFFSET(0x187FA760)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUECOMPAREPREDICATE_METHOD_3_B5935C075B333A6E_OFFSET UNITYSDK_OFFSET(0x187FA5D0)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUECOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x187FA5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityValueComparePredicate_TypeDefinitionIndex = 15082;

	class ChimeraDuelEntityValueComparePredicate : public ::RPG::GameCore::ChimeraDuelEntityPredicateBase
	{
	public:
		::RPG::GameCore::ChimeraDuelEntityValueGetterBase* Left; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* Right; // 0x18
		::RPG::GameCore::ChimeraDuelCompareType CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUECOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3EC62A219214FA3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUECOMPAREPREDICATE_METHOD_3_3EC62A219214FA3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5935C075B333A6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUECOMPAREPREDICATE_METHOD_3_B5935C075B333A6E_OFFSET))(a1, a2);
		}
	};
}
