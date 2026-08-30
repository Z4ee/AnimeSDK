#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_98;
namespace RPG::Client { class MonoEffect; }

#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157F91C0)
#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1580F280)
#define CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1580F320)

inline static constexpr unsigned int Class_1_6B1FB1C4D415B966___c__DisplayClass49_0_TypeDefinitionIndex = 75504;

class Class_1_6B1FB1C4D415B966___c__DisplayClass49_0 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_98* car; // 0x10
	::System::UInt32 speedEffectPartID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
	}

	::System::Void _FireSpeedEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__0_OFFSET))(this, a1, a2);
	}

	::System::Void _FireSpeedEffect_b__1(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_6B1FB1C4D415B966___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__1_OFFSET))(this, a1, a2);
	}
};
