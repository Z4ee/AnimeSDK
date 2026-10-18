#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class MarbleEffect; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FCB9A1A95B2AB574___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3BF20)
#define CLASS_2_FCB9A1A95B2AB574___C__DISPLAYCLASS101_0__TRIGGERMARBLEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBB42E30)

inline static constexpr unsigned int Class_2_FCB9A1A95B2AB574___c__DisplayClass101_0_TypeDefinitionIndex = 60420;

class Class_2_FCB9A1A95B2AB574___c__DisplayClass101_0 : public ::System::Object
{
public:
	::RPG::GameCore::MarbleEffect* config; // 0x10
	::UnityEngine::Transform* attachTransform; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB9A1A95B2AB574___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerMarbleEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_FCB9A1A95B2AB574___C__DISPLAYCLASS101_0__TRIGGERMARBLEEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
