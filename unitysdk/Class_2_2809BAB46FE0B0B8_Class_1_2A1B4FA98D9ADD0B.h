#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2B7BD8F617A0307D_Class_1_658A13DA6DF2BF3D;
namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_2809BAB46FE0B0B8_CLASS_1_2A1B4FA98D9ADD0B__CTOR_OFFSET UNITYSDK_OFFSET(0xAF2BF80)

inline static constexpr unsigned int Class_2_2809BAB46FE0B0B8_Class_1_2A1B4FA98D9ADD0B_TypeDefinitionIndex = 67229;

class Class_2_2809BAB46FE0B0B8_Class_1_2A1B4FA98D9ADD0B : public ::System::Object
{
public:
	::Class_2_2B7BD8F617A0307D_Class_1_658A13DA6DF2BF3D* Field_1_0; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2809BAB46FE0B0B8_CLASS_1_2A1B4FA98D9ADD0B__CTOR_OFFSET))(this);
	}
};
