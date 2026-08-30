#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B8C00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS9_0__PLAYPROJECTIONREPLICATEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B5BB420)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass9_0_TypeDefinitionIndex = 79338;

	class FateRinAddCardToPileFlowView___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* temporaryCardRoots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayProjectionReplicateFlow_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS9_0__PLAYPROJECTIONREPLICATEFLOW_B__0_OFFSET))(this, a1);
		}
	};
}
