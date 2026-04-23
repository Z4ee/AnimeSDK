#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_235EAE06A792DE91;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9D1070)
#define CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS5_0__TRIGGEREFFECTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xD9DA1B0)

inline static constexpr unsigned int Class_2_235EAE06A792DE91___c__DisplayClass5_0_TypeDefinitionIndex = 70966;

class Class_2_235EAE06A792DE91___c__DisplayClass5_0 : public ::System::Object
{
public:
	::UnityEngine::Transform* attachRoot; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerEffectAsync_b__0(::Class_2_235EAE06A792DE91* self, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* ent, ::UnityEngine::Transform* parent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_235EAE06A792DE91*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS5_0__TRIGGEREFFECTASYNC_B__0_OFFSET))(this, self, ent, parent);
	}
};
