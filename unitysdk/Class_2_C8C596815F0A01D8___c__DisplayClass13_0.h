#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C8C596815F0A01D8;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12967A20)
#define CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x12967D20)

inline static constexpr unsigned int Class_2_C8C596815F0A01D8___c__DisplayClass13_0_TypeDefinitionIndex = 49524;

class Class_2_C8C596815F0A01D8___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
	::Class_2_C8C596815F0A01D8* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryDestoryModifierEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET))(this);
	}
};
