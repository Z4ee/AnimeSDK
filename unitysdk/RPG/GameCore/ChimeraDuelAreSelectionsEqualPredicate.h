#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_METHOD_3_6F3C5062D550D643_OFFSET UNITYSDK_OFFSET(0x187F4C80)
#define RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_METHOD_3_ED62CC93FAB46C13_OFFSET UNITYSDK_OFFSET(0x187F4C20)
#define RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x187F4C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAreSelectionsEqualPredicate_TypeDefinitionIndex = 15141;

	class ChimeraDuelAreSelectionsEqualPredicate : public ::RPG::GameCore::ChimeraDuelPredicateBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* Selections; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED62CC93FAB46C13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_METHOD_3_ED62CC93FAB46C13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F3C5062D550D643(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_METHOD_3_6F3C5062D550D643_OFFSET))(a1, a2);
		}
	};
}
