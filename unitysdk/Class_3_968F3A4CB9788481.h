#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_968F3A4CB9788481_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0xCA51080)
#define CLASS_3_968F3A4CB9788481_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0xCA50F60)
#define CLASS_3_968F3A4CB9788481__CTOR_OFFSET UNITYSDK_OFFSET(0xCA51000)

inline static constexpr unsigned int Class_3_968F3A4CB9788481_TypeDefinitionIndex = 23890;

class Class_3_968F3A4CB9788481 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* JOKLPMNDMAJ; // 0x18
	::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x20
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x28
	::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x30
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
	::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x40
	::RPG::GameCore::AttackType HIFKEKCELFB; // 0x44
	::System::Boolean AELFMDGFAIK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_968F3A4CB9788481__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_968F3A4CB9788481*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_968F3A4CB9788481*&))((::PBYTE)hIl2Cpp + CLASS_3_968F3A4CB9788481_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_968F3A4CB9788481* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_968F3A4CB9788481*))((::PBYTE)hIl2Cpp + CLASS_3_968F3A4CB9788481_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
