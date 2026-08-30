#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS157_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1580BFE0)
#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS157_0__REMOVESLAMTARGETSPEEDCLAMP_B__0_OFFSET UNITYSDK_OFFSET(0x1580F230)

inline static constexpr unsigned int Class_1_6B1FB1C4D415B966___c__DisplayClass157_0_TypeDefinitionIndex = 75502;

class Class_1_6B1FB1C4D415B966___c__DisplayClass157_0 : public ::System::Object
{
public:
	::System::Int32 priority; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS157_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveSlamTargetSpeedClamp_b__0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS157_0__REMOVESLAMTARGETSPEEDCLAMP_B__0_OFFSET))(this, a1);
	}
};
