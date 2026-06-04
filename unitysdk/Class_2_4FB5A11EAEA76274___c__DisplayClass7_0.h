#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_4FB5A11EAEA76274;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5012B0)
#define CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS7_0__RELOADEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xB502240)

inline static constexpr unsigned int Class_2_4FB5A11EAEA76274___c__DisplayClass7_0_TypeDefinitionIndex = 50193;

class Class_2_4FB5A11EAEA76274___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* data; // 0x10
	::Class_2_4FB5A11EAEA76274* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274___C__DISPLAYCLASS7_0__RELOADEFFECTS_B__0_OFFSET))(this, a1, a2);
	}
};
