#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_579DDCBEB4529D20;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18717040)
#define CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS5_0__TRIGGEREFFECTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x187207C0)

inline static constexpr unsigned int Class_2_579DDCBEB4529D20___c__DisplayClass5_0_TypeDefinitionIndex = 73313;

class Class_2_579DDCBEB4529D20___c__DisplayClass5_0 : public ::System::Object
{
public:
	::UnityEngine::Transform* attachRoot; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerEffectAsync_b__0(::Class_2_579DDCBEB4529D20* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_579DDCBEB4529D20*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS5_0__TRIGGEREFFECTASYNC_B__0_OFFSET))(this, a1, a2, a3);
	}
};
