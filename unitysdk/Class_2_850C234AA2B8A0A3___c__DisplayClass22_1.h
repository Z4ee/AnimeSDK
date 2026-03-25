#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_850C234AA2B8A0A3___c__DisplayClass22_0;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_850C234AA2B8A0A3___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11607090)
#define CLASS_2_850C234AA2B8A0A3___C__DISPLAYCLASS22_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x11607490)

inline static constexpr unsigned int Class_2_850C234AA2B8A0A3___c__DisplayClass22_1_TypeDefinitionIndex = 44014;

class Class_2_850C234AA2B8A0A3___c__DisplayClass22_1 : public ::System::Object
{
public:
	::Class_2_850C234AA2B8A0A3___c__DisplayClass22_0* CS___8__locals1; // 0x10
	::System::Boolean ignorePrefabAttachPoint; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitEffect_b__0(::RPG::Client::MonoEffect* pHitEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3___C__DISPLAYCLASS22_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET))(this, pHitEffect, extraParams);
	}
};
