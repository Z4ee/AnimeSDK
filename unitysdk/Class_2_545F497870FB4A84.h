#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_545F497870FB4A84_METHOD_2_9DDA4F7B69BC10BE_OFFSET UNITYSDK_OFFSET(0x1AF2A1E0)
#define CLASS_2_545F497870FB4A84__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A5E0)

inline static constexpr unsigned int Class_2_545F497870FB4A84_TypeDefinitionIndex = 17425;

class Class_2_545F497870FB4A84 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_2_0; // 0x10
	::RPG::GameCore::DynamicFloat* Field_2_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_2; // 0x20
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x28
	::RPG::GameCore::DynamicFloat* Field_2_4; // 0x30
	::RPG::GameCore::FinalDamageFormulaType Field_2_5; // 0x38
	::RPG::GameCore::AttackFormulaType Field_2_6; // 0x3C
	::RPG::GameCore::ShieldFormulaType Field_2_7; // 0x40
	::RPG::GameCore::HealFormulaType Field_2_8; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_545F497870FB4A84__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_9DDA4F7B69BC10BE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_545F497870FB4A84*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_545F497870FB4A84*&))((::PBYTE)hIl2Cpp + CLASS_2_545F497870FB4A84_METHOD_2_9DDA4F7B69BC10BE_OFFSET))(a1, a2);
	}
};
