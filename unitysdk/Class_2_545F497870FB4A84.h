#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_545F497870FB4A84_METHOD_2_9DDA4F7B69BC10BE_OFFSET UNITYSDK_OFFSET(0x1CB5A0A0)
#define CLASS_2_545F497870FB4A84__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5A4A0)

inline static constexpr unsigned int Class_2_545F497870FB4A84_TypeDefinitionIndex = 17942;

class Class_2_545F497870FB4A84 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* MJPLMGPIMHA; // 0x10
	::RPG::GameCore::DynamicFloat* PIBDDOGGDKL; // 0x18
	::RPG::GameCore::DynamicFloat* HDKGKHCCEGI; // 0x20
	::RPG::GameCore::DynamicFloat* MDFKCMGPPDM; // 0x28
	::RPG::GameCore::DynamicFloat* GKLLOMFGMBI; // 0x30
	::RPG::GameCore::HealFormulaType PEBICIMMFMK; // 0x38
	::RPG::GameCore::FinalDamageFormulaType NAGHIJIMOKL; // 0x3C
	::RPG::GameCore::AttackFormulaType OHIAHBOOGII; // 0x40
	::RPG::GameCore::ShieldFormulaType BCCLOHGGLCH; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_545F497870FB4A84__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_9DDA4F7B69BC10BE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_545F497870FB4A84*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_545F497870FB4A84*&))((::PBYTE)hIl2Cpp + CLASS_2_545F497870FB4A84_METHOD_2_9DDA4F7B69BC10BE_OFFSET))(a1, a2);
	}
};
