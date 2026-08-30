#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_A25E3CD516D76ABF_METHOD_1_4C4B5CDC79FEB1DB_OFFSET UNITYSDK_OFFSET(0x154A6490)
#define CLASS_1_A25E3CD516D76ABF_METHOD_1_DEB80637BDD70713_OFFSET UNITYSDK_OFFSET(0x154A6360)
#define CLASS_1_A25E3CD516D76ABF__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A76B0)

inline static constexpr unsigned int Class_1_A25E3CD516D76ABF_TypeDefinitionIndex = 56162;

class Class_1_A25E3CD516D76ABF : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint* StaticGet_EPBPACPCLPP()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A25E3CD516D76ABF_TypeDefinitionIndex)->GetStaticField(0x133F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A25E3CD516D76ABF__CCTOR_OFFSET))();
	}

	static ::Class_1_843DD6330B22E422* Method_1_DEB80637BDD70713(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::AttackFormulaType a5, ::RPG::GameCore::FinalDamageFormulaType a6)
	{
		return ((::Class_1_843DD6330B22E422*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackFormulaType, ::RPG::GameCore::FinalDamageFormulaType))((::PBYTE)hIl2Cpp + CLASS_1_A25E3CD516D76ABF_METHOD_1_DEB80637BDD70713_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_4C4B5CDC79FEB1DB(::Class_1_843DD6330B22E422*& a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_1_843DD6330B22E422*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A25E3CD516D76ABF_METHOD_1_4C4B5CDC79FEB1DB_OFFSET))(a1, a2, a3);
	}
};
