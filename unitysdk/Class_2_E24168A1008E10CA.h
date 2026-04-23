#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_EntityData; }

#define CLASS_2_E24168A1008E10CA_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x17C223D0)
#define CLASS_2_E24168A1008E10CA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C223C0)

inline static constexpr unsigned int Class_2_E24168A1008E10CA_TypeDefinitionIndex = 34156;

class Class_2_E24168A1008E10CA : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* Field_2_0; // 0x18
	::Class_1_EA5232D6CAD71030* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_E24168A1008E10CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24168A1008E10CA_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}
};
