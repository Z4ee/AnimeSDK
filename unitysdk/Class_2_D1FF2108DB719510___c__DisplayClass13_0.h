#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D1FF2108DB719510;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E36F20)
#define CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x15E37160)

inline static constexpr unsigned int Class_2_D1FF2108DB719510___c__DisplayClass13_0_TypeDefinitionIndex = 53957;

class Class_2_D1FF2108DB719510___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
	::Class_2_D1FF2108DB719510* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryDestoryModifierEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET))(this);
	}
};
