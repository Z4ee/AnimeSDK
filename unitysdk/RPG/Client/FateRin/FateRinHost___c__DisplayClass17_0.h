#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::FateRin::Card { class IFateRinReplaceCardViewModel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A389E50)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_0__SHOWCARDREWARDREPLACEDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1A38BAB0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass17_0_TypeDefinitionIndex = 75568;

	class FateRinHost___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::UInt32>* cardIDs; // 0x10
		::System::Action* showBossTransition; // 0x18
		::System::Action* onAllFinished; // 0x20
		::System::Boolean hasNextCard; // 0x28
		::System::Boolean showBossTransitionInTheEnd; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCardRewardReplaceDialog_b__0(::RPG::Client::UIController* a1, ::RPG::Client::FateRin::Card::IFateRinReplaceCardViewModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::FateRin::Card::IFateRinReplaceCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_0__SHOWCARDREWARDREPLACEDIALOG_B__0_OFFSET))(this, a1, a2);
		}
	};
}
