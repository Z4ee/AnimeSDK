#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_D1FF2108DB719510;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC7D6AE0)
#define CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS7_0__RELOADEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xC7D79B0)

inline static constexpr unsigned int Class_2_D1FF2108DB719510___c__DisplayClass7_0_TypeDefinitionIndex = 53959;

class Class_2_D1FF2108DB719510___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_D1FF2108DB719510* __4__this; // 0x10
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* data; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510___C__DISPLAYCLASS7_0__RELOADEFFECTS_B__0_OFFSET))(this, a1, a2);
	}
};
