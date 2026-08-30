#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D0040)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5D0D40)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinStackableAddCardToHandFlowView___c__DisplayClass8_0_TypeDefinitionIndex = 79380;

	class FateRinStackableAddCardToHandFlowView___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* root; // 0x10
		::System::String* triggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateCardAnimatorPlayActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
