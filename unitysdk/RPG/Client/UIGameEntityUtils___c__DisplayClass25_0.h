#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_CLIENT_UIGAMEENTITYUTILS___C__DISPLAYCLASS25_0__CACULATEFORCEKILLRATIO_B__0_OFFSET UNITYSDK_OFFSET(0xCB50D50)
#define RPG_CLIENT_UIGAMEENTITYUTILS___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4F620)

namespace RPG::Client
{
	inline static constexpr unsigned int UIGameEntityUtils___c__DisplayClass25_0_TypeDefinitionIndex = 68330;

	class UIGameEntityUtils___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::System::Nullable_1<::RPG::GameCore::ForceKillShowType> forceKillShowType; // 0x18
		::System::Single maxRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _CaculateForceKillRatio_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS___C__DISPLAYCLASS25_0__CACULATEFORCEKILLRATIO_B__0_OFFSET))(this, a1);
		}
	};
}
