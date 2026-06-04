#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_B0C3A4DA0954758B_METHOD_3_A0348A6F08F88F36_OFFSET UNITYSDK_OFFSET(0x19277B90)
#define CLASS_3_B0C3A4DA0954758B_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x19277B10)
#define CLASS_3_B0C3A4DA0954758B__CTOR_OFFSET UNITYSDK_OFFSET(0x19277B60)

inline static constexpr unsigned int Class_3_B0C3A4DA0954758B_TypeDefinitionIndex = 21258;

class Class_3_B0C3A4DA0954758B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0C3A4DA0954758B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B0C3A4DA0954758B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B0C3A4DA0954758B*&))((::PBYTE)hIl2Cpp + CLASS_3_B0C3A4DA0954758B_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0348A6F08F88F36(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B0C3A4DA0954758B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B0C3A4DA0954758B*))((::PBYTE)hIl2Cpp + CLASS_3_B0C3A4DA0954758B_METHOD_3_A0348A6F08F88F36_OFFSET))(a1, a2);
	}
};
