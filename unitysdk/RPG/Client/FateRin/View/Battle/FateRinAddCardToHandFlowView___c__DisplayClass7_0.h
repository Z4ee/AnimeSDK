#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD015070)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS7_0___CREATECLEARNEGATIVESIDEEFFECTSCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD015B40)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToHandFlowView___c__DisplayClass7_0_TypeDefinitionIndex = 79329;

	class FateRinAddCardToHandFlowView___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* effectController; // 0x10
		::System::Object* owner; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateClearNegativeSideEffectsCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS7_0___CREATECLEARNEGATIVESIDEEFFECTSCOMMAND_B__0_OFFSET))(this);
		}
	};
}
