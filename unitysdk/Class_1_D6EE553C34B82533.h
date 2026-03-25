#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UITopEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_D6EE553C34B82533__CTOR_OFFSET UNITYSDK_OFFSET(0x10933E90)

inline static constexpr unsigned int Class_1_D6EE553C34B82533_TypeDefinitionIndex = 44676;

class Class_1_D6EE553C34B82533 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_0; // 0x10
	::RPG::GameCore::UITopEffectType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EE553C34B82533__CTOR_OFFSET))(this);
	}
};
