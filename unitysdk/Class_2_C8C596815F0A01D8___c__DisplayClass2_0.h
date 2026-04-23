#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_C8C596815F0A01D8;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS2_0__ATTACHEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x12967D50)
#define CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12965E90)

inline static constexpr unsigned int Class_2_C8C596815F0A01D8___c__DisplayClass2_0_TypeDefinitionIndex = 49525;

class Class_2_C8C596815F0A01D8___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
	::Class_2_C8C596815F0A01D8* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _AttachEffect_b__0(::RPG::Client::MonoEffect* pEffectObject, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8___C__DISPLAYCLASS2_0__ATTACHEFFECT_B__0_OFFSET))(this, pEffectObject, extraParams);
	}
};
