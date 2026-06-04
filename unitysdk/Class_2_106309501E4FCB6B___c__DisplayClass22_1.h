#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_106309501E4FCB6B___c__DisplayClass22_0;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_106309501E4FCB6B___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAF01440)
#define CLASS_2_106309501E4FCB6B___C__DISPLAYCLASS22_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xAF01850)

inline static constexpr unsigned int Class_2_106309501E4FCB6B___c__DisplayClass22_1_TypeDefinitionIndex = 51384;

class Class_2_106309501E4FCB6B___c__DisplayClass22_1 : public ::System::Object
{
public:
	::Class_2_106309501E4FCB6B___c__DisplayClass22_0* CS___8__locals1; // 0x10
	::System::Boolean ignorePrefabAttachPoint; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B___C__DISPLAYCLASS22_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
