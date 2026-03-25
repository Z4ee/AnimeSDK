#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_756B5584F1951889___c__DisplayClass28_0;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x897CC00)
#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS28_1__FIREEFFECTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x897EF50)

inline static constexpr unsigned int Class_1_756B5584F1951889___c__DisplayClass28_1_TypeDefinitionIndex = 62451;

class Class_1_756B5584F1951889___c__DisplayClass28_1 : public ::System::Object
{
public:
	::Class_1_756B5584F1951889___c__DisplayClass28_0* CS___8__locals1; // 0x10
	::RPG::GameCore::FiveDimEffectItem* effectItem; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
	}

	::System::Void _FireEffectList_b__0(::Entitas::IEntity* e, ::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS28_1__FIREEFFECTLIST_B__0_OFFSET))(this, e, go);
	}
};
