#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_1_6B1FB1C4D415B966;
class Class_2_230F5EDDB35DAEBA;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameCar; }

#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCCFA730)
#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS32_0__FIRECAREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCD12A20)

inline static constexpr unsigned int Class_1_6B1FB1C4D415B966___c__DisplayClass32_0_TypeDefinitionIndex = 75504;

class Class_1_6B1FB1C4D415B966___c__DisplayClass32_0 : public ::System::Object
{
public:
	::Class_1_6B1FB1C4D415B966* __4__this; // 0x10
	::RPG::Client::RoadRash::MonoRoadRashGameCar* monoCar; // 0x18
	::Class_2_230F5EDDB35DAEBA* entity; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Void _FireCarEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS32_0__FIRECAREFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
