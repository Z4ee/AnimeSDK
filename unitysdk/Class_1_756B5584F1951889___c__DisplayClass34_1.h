#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_756B5584F1951889___c__DisplayClass34_0;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS34_1__CTOR_OFFSET UNITYSDK_OFFSET(0x142EA6B0)
#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS34_1__FIREPLAYERBRAKEEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0x142EB630)

inline static constexpr unsigned int Class_1_756B5584F1951889___c__DisplayClass34_1_TypeDefinitionIndex = 71269;

class Class_1_756B5584F1951889___c__DisplayClass34_1 : public ::System::Object
{
public:
	::Class_1_756B5584F1951889___c__DisplayClass34_0* CS___8__locals1; // 0x10
	::RPG::GameCore::FiveDimEffectItem* effectItem; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS34_1__CTOR_OFFSET))(this);
	}

	::System::Void _FirePlayerBrakeEffects_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS34_1__FIREPLAYERBRAKEEFFECTS_B__0_OFFSET))(this, a1, a2);
	}
};
