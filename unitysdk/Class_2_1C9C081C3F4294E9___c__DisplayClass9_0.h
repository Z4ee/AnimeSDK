#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_1C9C081C3F4294E9;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC567D0)
#define CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS9_0___TRIGGERGAINENERGYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xAC57610)

inline static constexpr unsigned int Class_2_1C9C081C3F4294E9___c__DisplayClass9_0_TypeDefinitionIndex = 46162;

class Class_2_1C9C081C3F4294E9___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_2_1C9C081C3F4294E9* __4__this; // 0x10
	::System::Int32 energyNum; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __TriggerGainEnergyEffect_b__0(::RPG::Client::MonoEffect* monoEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9___C__DISPLAYCLASS9_0___TRIGGERGAINENERGYEFFECT_B__0_OFFSET))(this, monoEffect, extraParams);
	}
};
