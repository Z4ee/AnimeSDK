#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_048394E921D34B5B_OFFSET UNITYSDK_OFFSET(0x1702ABD0)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_2FD0FAC46F173997_OFFSET UNITYSDK_OFFSET(0x1702ACA0)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1702AC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterWeaknessActivated_TypeDefinitionIndex = 21774;

	class ByIsCharacterWeaknessActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_048394E921D34B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_048394E921D34B5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FD0FAC46F173997(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_2FD0FAC46F173997_OFFSET))(a1, a2);
		}
	};
}
