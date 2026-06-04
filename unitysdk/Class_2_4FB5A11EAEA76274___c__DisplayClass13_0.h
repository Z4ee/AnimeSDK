#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4FB5A11EAEA76274;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB501EE0)
#define CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB5021E0)

inline static constexpr unsigned int Class_2_4FB5A11EAEA76274___c__DisplayClass13_0_TypeDefinitionIndex = 50191;

class Class_2_4FB5A11EAEA76274___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
	::Class_2_4FB5A11EAEA76274* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryDestoryModifierEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET))(this);
	}
};
