#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2B7BD8F617A0307D_Class_1_D7897286EDF00BD5;
namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_2C48475D9276859B_CLASS_1_2A1B4FA98D9ADD0B__CTOR_OFFSET UNITYSDK_OFFSET(0xA7011A0)

inline static constexpr unsigned int Class_2_2C48475D9276859B_Class_1_2A1B4FA98D9ADD0B_TypeDefinitionIndex = 58917;

class Class_2_2C48475D9276859B_Class_1_2A1B4FA98D9ADD0B : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10
	::Class_2_2B7BD8F617A0307D_Class_1_D7897286EDF00BD5* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C48475D9276859B_CLASS_1_2A1B4FA98D9ADD0B__CTOR_OFFSET))(this);
	}
};
