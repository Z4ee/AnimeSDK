#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4C2B27AA8CEA8CC6;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropSpecialVisionConfig; }

#define CLASS_3_4C2B27AA8CEA8CC6___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1559FC90)
#define CLASS_3_4C2B27AA8CEA8CC6___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x155A02B0)

inline static constexpr unsigned int Class_3_4C2B27AA8CEA8CC6___c__DisplayClass1_0_TypeDefinitionIndex = 55948;

class Class_3_4C2B27AA8CEA8CC6___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_3_4C2B27AA8CEA8CC6* __4__this; // 0x10
	::RPG::GameCore::PropSpecialVisionConfig* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C2B27AA8CEA8CC6___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4C2B27AA8CEA8CC6___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
	}
};
