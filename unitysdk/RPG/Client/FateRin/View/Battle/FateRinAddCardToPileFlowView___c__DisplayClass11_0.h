#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD018930)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS11_0___CREATECLEARNEGATIVESIDEEFFECTSCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD0192B0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass11_0_TypeDefinitionIndex = 79333;

	class FateRinAddCardToPileFlowView___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Object* owner; // 0x10
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* effectController; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateClearNegativeSideEffectsCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS11_0___CREATECLEARNEGATIVESIDEEFFECTSCOMMAND_B__0_OFFSET))(this);
		}
	};
}
