#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_E00ED5CEE1C3E244___c__DisplayClass23_0;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_E00ED5CEE1C3E244___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163FC3A0)
#define CLASS_2_E00ED5CEE1C3E244___C__DISPLAYCLASS23_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x163FC7B0)

inline static constexpr unsigned int Class_2_E00ED5CEE1C3E244___c__DisplayClass23_1_TypeDefinitionIndex = 55191;

class Class_2_E00ED5CEE1C3E244___c__DisplayClass23_1 : public ::System::Object
{
public:
	::Class_2_E00ED5CEE1C3E244___c__DisplayClass23_0* CS___8__locals1; // 0x10
	::System::Boolean ignorePrefabAttachPoint; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244___C__DISPLAYCLASS23_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
