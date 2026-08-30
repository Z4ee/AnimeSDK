#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UITopEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_D6EE553C34B82533__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABDAB0)

inline static constexpr unsigned int Class_1_D6EE553C34B82533_TypeDefinitionIndex = 55957;

class Class_1_D6EE553C34B82533 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x10
	::RPG::GameCore::UITopEffectType DLMINHHKKMK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EE553C34B82533__CTOR_OFFSET))(this);
	}
};
