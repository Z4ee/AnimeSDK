#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA87AB00)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE___C__DISPLAYCLASS4_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA87C640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance___c__DisplayClass4_0_TypeDefinitionIndex = 43514;

	class BaseModifierInstance___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
		::RPG::GameCore::BaseModifierInstance* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryDestoryModifierEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE___C__DISPLAYCLASS4_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET))(this);
		}
	};
}
