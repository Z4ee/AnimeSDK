#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD018B50)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS16_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD019DF0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass16_0_TypeDefinitionIndex = 79337;

	class FateRinAddCardToPileFlowView___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* triggerName; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* roots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateCardAnimatorPlayActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS16_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
