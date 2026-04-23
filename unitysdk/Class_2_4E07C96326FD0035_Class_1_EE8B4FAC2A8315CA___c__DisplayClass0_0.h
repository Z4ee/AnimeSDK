#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_4E07C96326FD0035;
class Class_2_4E07C96326FD0035_Class_1_EE8B4FAC2A8315CA;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_4E07C96326FD0035_CLASS_1_EE8B4FAC2A8315CA___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98D1580)
#define CLASS_2_4E07C96326FD0035_CLASS_1_EE8B4FAC2A8315CA___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x98D1680)

inline static constexpr unsigned int Class_2_4E07C96326FD0035_Class_1_EE8B4FAC2A8315CA___c__DisplayClass0_0_TypeDefinitionIndex = 52840;

class Class_2_4E07C96326FD0035_Class_1_EE8B4FAC2A8315CA___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_4E07C96326FD0035* monoEffectComponent; // 0x10
	::Class_2_4E07C96326FD0035_Class_1_EE8B4FAC2A8315CA* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_CLASS_1_EE8B4FAC2A8315CA___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams callbackParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_CLASS_1_EE8B4FAC2A8315CA___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, effect, callbackParams);
	}
};
