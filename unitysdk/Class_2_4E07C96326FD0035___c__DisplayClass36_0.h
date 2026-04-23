#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdvEffectConfig; }

#define CLASS_2_4E07C96326FD0035___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98D0450)
#define CLASS_2_4E07C96326FD0035___C__DISPLAYCLASS36_0__TRIGGERADVEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x98D13D0)

inline static constexpr unsigned int Class_2_4E07C96326FD0035___c__DisplayClass36_0_TypeDefinitionIndex = 52841;

class Class_2_4E07C96326FD0035___c__DisplayClass36_0 : public ::System::Object
{
public:
	::RPG::GameCore::AdvEffectConfig* effectConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerAdvEffect_b__0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams callbackParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035___C__DISPLAYCLASS36_0__TRIGGERADVEFFECT_B__0_OFFSET))(this, effect, callbackParams);
	}
};
