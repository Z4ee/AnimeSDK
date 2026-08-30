#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B6380)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5B6490)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToHandFlowView___c__DisplayClass10_0_TypeDefinitionIndex = 79326;

	class FateRinAddCardToHandFlowView___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* spawnWorldPositions; // 0x18
		::System::Object* negativeEffectOwner; // 0x20
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* effectController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateCardAnimatorPlayActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS10_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
