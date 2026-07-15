#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdvEffectConfig; }

#define CLASS_2_5D39AC189E1C49A8___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C86BA0)
#define CLASS_2_5D39AC189E1C49A8___C__DISPLAYCLASS36_0__TRIGGERADVEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x16C879C0)

inline static constexpr unsigned int Class_2_5D39AC189E1C49A8___c__DisplayClass36_0_TypeDefinitionIndex = 54764;

class Class_2_5D39AC189E1C49A8___c__DisplayClass36_0 : public ::System::Object
{
public:
	::RPG::GameCore::AdvEffectConfig* effectConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerAdvEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8___C__DISPLAYCLASS36_0__TRIGGERADVEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
