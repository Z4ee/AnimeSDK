#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdvEffectConfig; }

#define CLASS_2_3DB821AE92F66655___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB273EE0)
#define CLASS_2_3DB821AE92F66655___C__DISPLAYCLASS36_0__TRIGGERADVEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB274CA0)

inline static constexpr unsigned int Class_2_3DB821AE92F66655___c__DisplayClass36_0_TypeDefinitionIndex = 46177;

class Class_2_3DB821AE92F66655___c__DisplayClass36_0 : public ::System::Object
{
public:
	::RPG::GameCore::AdvEffectConfig* effectConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerAdvEffect_b__0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams callbackParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655___C__DISPLAYCLASS36_0__TRIGGERADVEFFECT_B__0_OFFSET))(this, effect, callbackParams);
	}
};
