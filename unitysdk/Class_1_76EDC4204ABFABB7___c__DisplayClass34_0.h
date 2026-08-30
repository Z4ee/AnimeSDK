#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76EDC4204ABFABB7;
namespace RPG::Client { class TriggerEffectParams; }

#define CLASS_1_76EDC4204ABFABB7___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15596880)
#define CLASS_1_76EDC4204ABFABB7___C__DISPLAYCLASS34_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x155971B0)

inline static constexpr unsigned int Class_1_76EDC4204ABFABB7___c__DisplayClass34_0_TypeDefinitionIndex = 77562;

class Class_1_76EDC4204ABFABB7___c__DisplayClass34_0 : public ::System::Object
{
public:
	::RPG::Client::TriggerEffectParams* effectParams; // 0x10
	::Class_1_76EDC4204ABFABB7* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryAutoRemoveEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7___C__DISPLAYCLASS34_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET))(this);
	}
};
