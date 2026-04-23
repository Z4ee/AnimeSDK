#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_968F3A4CB9788481_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x182E7120)
#define CLASS_3_968F3A4CB9788481_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x182E6FD0)
#define CLASS_3_968F3A4CB9788481__CTOR_OFFSET UNITYSDK_OFFSET(0x182E7090)

inline static constexpr unsigned int Class_3_968F3A4CB9788481_TypeDefinitionIndex = 23163;

class Class_3_968F3A4CB9788481 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DamageDisplayData* Field_3_6; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_7; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x38
	::System::Boolean Field_3_5; // 0x40
	::RPG::GameCore::AttackDamageType Field_3_2; // 0x44
	::RPG::GameCore::AttackType Field_3_1; // 0x48

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
