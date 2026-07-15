#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class MonoEffect; }

#define CLASS_3_50176A515053E061_1___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155B21C0)
#define CLASS_3_50176A515053E061_1___C__DISPLAYCLASS0_0__ONACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x155B21F0)

inline static constexpr unsigned int Class_3_50176A515053E061_1___c__DisplayClass0_0_TypeDefinitionIndex = 65628;

class Class_3_50176A515053E061_1___c__DisplayClass0_0 : public ::System::Object
{
public:
	::UnityEngine::Quaternion rot; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnActive_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1___C__DISPLAYCLASS0_0__ONACTIVE_B__0_OFFSET))(this, a1, a2);
	}
};
