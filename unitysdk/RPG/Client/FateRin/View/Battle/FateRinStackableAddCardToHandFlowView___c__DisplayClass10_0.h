#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D0330)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0___CREATESETTEMPORARYCARDSACTIVECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5D0660)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinStackableAddCardToHandFlowView___c__DisplayClass10_0_TypeDefinitionIndex = 79376;

	class FateRinStackableAddCardToHandFlowView___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* temporaryCardRoots; // 0x10
		::System::Boolean active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateSetTemporaryCardsActiveCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0___CREATESETTEMPORARYCARDSACTIVECOMMAND_B__0_OFFSET))(this);
		}
	};
}
