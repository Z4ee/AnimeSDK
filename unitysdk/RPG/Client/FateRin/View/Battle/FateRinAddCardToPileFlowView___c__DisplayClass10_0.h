#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPendingPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B8F90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS10_0___PLAYADDCARDTOPILEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B5BA560)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass10_0_TypeDefinitionIndex = 79331;

	class FateRinAddCardToPileFlowView___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPendingPromise* pending; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* temporaryCardRoots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayAddCardToPileFlow_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS10_0___PLAYADDCARDTOPILEFLOW_B__0_OFFSET))(this, a1);
		}
	};
}
