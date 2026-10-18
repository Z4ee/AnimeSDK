#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB3290)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS6_0__PLAYADDCARDTOHANDFLOW_B__0_OFFSET UNITYSDK_OFFSET(0xCFB4CB0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToHandFlowView___c__DisplayClass6_0_TypeDefinitionIndex = 80652;

	class FateRinAddCardToHandFlowView___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::RPG::Client::Promises::IPendingPromise* pending; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAddCardToHandFlow_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS6_0__PLAYADDCARDTOHANDFLOW_B__0_OFFSET))(this, a1);
		}
	};
}
